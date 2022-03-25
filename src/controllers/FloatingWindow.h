/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2020-2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#pragma once

#include "../Controller.h"

#include "kddockwidgets/docks_export.h"
#include "kddockwidgets/LayoutSaver.h"
#include "kddockwidgets/Qt5Qt6Compat_p.h"
#include "Frame.h"
#include "private/Draggable_p.h"
#include "private/DropArea_p.h"
#include "kddockwidgets/docks_export.h"

namespace KDDockWidgets {
class MainWindow;
class DropArea;
class MultiSplitter;
class LayoutWidget;
}

namespace KDDockWidgets::Controllers {

class TitleBar;
class Frame;

class DOCKS_EXPORT FloatingWindow : public Controller, public Draggable
{
    Q_OBJECT
public:
    explicit FloatingWindow(QRect suggestedGeometry, MainWindow *parent = nullptr);
    explicit FloatingWindow(Controllers::Frame *frame, QRect suggestedGeometry, MainWindow *parent = nullptr);
    virtual ~FloatingWindow() override;

    bool deserialize(const LayoutSaver::FloatingWindow &);
    LayoutSaver::FloatingWindow serialize() const;

    // Draggable:
    std::unique_ptr<WindowBeingDragged> makeWindow() override;
    Controllers::DockWidget *singleDockWidget() const override;
    bool isWindow() const override;

    const QVector<DockWidget *> dockWidgets() const;
    const Controllers::Frame::List frames() const;
    DropArea *dropArea() const
    {
        return m_dropArea;
    }

    int userType() const;

    static void ensureRectIsOnScreen(QRect &geometry);

#ifdef Q_OS_WIN
    void setLastHitTest(int hitTest)
    {
        m_lastHitTest = hitTest;
    }
#endif
    /**
     * @brief Returns the title bar.
     *
     * This TitleBar is hidden if we're using a native title bar.
     */
    Controllers::TitleBar *titleBar() const
    {
        return m_titleBar;
    }

    /**
     * @brief Equivalent to setGeometry(), but the value might be adjusted.
     *
     * For example, if the suggestedRect is bigger than max size, we'll make it smaller.
     *
     * @param preserveCenter, if true, then the center is preserved
     *
     */
    void setSuggestedGeometry(QRect suggestedRect, SuggestedGeometryHints = SuggestedGeometryHint_None);

    bool anyNonClosable() const;
    bool anyNonDockable() const;

    /**
     * @brief checks if this FloatingWindow only has one frame.
     * If true it means there's no side-by-side dock widgets here. There's only 1 frame.
     * Note that despite having only 1 frame it can still have multiple DockWidgets,
     * as they can be tabbed into the single frame.
     * @return true if this FloatingWindow has a single frame.
     */
    bool hasSingleFrame() const;

    /**
     * @brief checks if this FloatingWindow only has one dockwidget.
     * This is a more specific case than hasSingleFrame(), it implies not only a single frame,
     * but that frame must only have 1 dock widget.
     * @return true if this FloatingWindow only has one dockwidget.
     */
    bool hasSingleDockWidget() const;

    /// @brief If this floating window has only one Frame, it's returned, otherwise nullptr
    Controllers::Frame *singleFrame() const;

    /**
     * @brief Returns whether a deleteLater has already been issued
     */
    bool beingDeleted() const;

    /**
     * @brief Equivalent to deleteLater() but sets beingDeleted() to true
     */
    void scheduleDeleteLater();

    /**
     * @brief Returns the MultiSplitter
     */
    MultiSplitter *multiSplitter() const;

    /**
     * @brief Returns the LayoutWidget
     */
    LayoutWidget *layoutWidget() const;

    /**
     * @brief Returns whether @p globalPoint is inside the title bar (or, when there's no title-bar, the draggable empty
     * area of a tab bar)
     */
    bool isInDragArea(QPoint globalPoint) const;

    bool isMDI() const override;

    ///@brief updates the title and the icon
    void updateTitleAndIcon();
    void updateTitleBarVisibility();

    QStringList affinities() const;

    /**
     * Returns the drag rect in global coordinates. This is usually the title bar rect.
     * However, when using Config::Flag_HideTitleBarWhenTabsVisible it will be the tab bar background.
     * Returns global coordinates.
     */
    QRect dragRect() const;

    ///@brief Returns whether all dock widgets have the specified option set
    bool allDockWidgetsHave(Controllers::DockWidget::Option) const;

    ///@brief Returns whether at least one dock widget has the specified option set
    bool anyDockWidgetsHas(DockWidget::Option) const;

    ///@brief Returns whether all dock widgets have the specified  layout saver option set
    bool allDockWidgetsHave(DockWidget::LayoutSaverOption) const;

    ///@brief Returns whether at least one dock widget has the specified layout saver option set
    bool anyDockWidgetsHas(DockWidget::LayoutSaverOption) const;

    /// @brief Adds the dock widget to the specified location
    void addDockWidget(DockWidget *, KDDockWidgets::Location location,
                       DockWidget *relativeTo, InitialOption = {});

    /// @brief Returns the MainWindow which is the transient parent of this FloatingWindow
    /// Can be nullptr if you create dock widgets before the main window. Can also be some
    /// arbitrary value if you have more than one main window.
    MainWindow *mainWindow() const;

    ///@brief Returns the contents margins
    QMargins contentMargins() const;

    ///@brief Allows the user to override QWindow::isMaximized()
    /// Needed to workaround window managers that don't support maximizing/minimizing Qt::Tool windows.
    /// By default this just calls QWindow::isMaximized()
    /// @sa QTBUG-95478
    virtual bool isMaximizedOverride() const;

    ///@brief Allows the user to override QWindow::isMinimized()
    /// Needed to workaround window managers that don't support maximizing/minimizing Qt::Tool windows.
    /// By default this just calls QWindow::isMinimized()
    /// @sa QTBUG-95478
    virtual bool isMinimizedOverride() const;

    ///@brief By default equivalent to QWindow::showMaximized()
    /// But allows the user to override it and workaround exotic window manager bugs
    /// @sa QTBUG-95478
    virtual void showMaximized();

    ///@brief By default equivalent to QWindow::showNormal()
    /// But allows the user to override it and workaround exotic window manager bugs
    /// @sa QTBUG-95478
    virtual void showNormal();

    ///@brief By default equivalent to QWindow::showMinimized()
    /// But allows the user to override it and workaround exotic window manager bugs
    /// @sa QTBUG-95478
    virtual void showMinimized();

    ///@brief By default equivalent to QWidget::normalGeometry()
    /// Derived classes can implement something different here, to workaround window manager issues with Qt::Tool
    /// Also useful for QtQuick to eventually preserve normal geometry upon save/restore of a maximized window. As
    /// QWindow has no notion of normal geometry, so we need to implement it here.
    /// @sa QTBUG-95478
    virtual QRect normalGeometry() const;

    ///@brief Allows the user app to specify which window flags to use, instead of KDDWs default ones
    /// Bugs caused by this won't be supported, as the amount of combinations that could go wrong can
    /// be open ended
    static Qt::WindowFlags s_windowFlagsOverride;

    void updateSizeConstraints(); // TODO: Move private

    void onCloseEvent(QCloseEvent *);

Q_SIGNALS:
    void activatedChanged();
    void numFramesChanged();
    void windowStateChanged(QWindowStateChangeEvent *);

protected:
    void maybeCreateResizeHandler();

#if defined(Q_OS_WIN) && defined(KDDOCKWIDGETS_QTWIDGETS)
    bool nativeEvent(const QByteArray &eventType, void *message, Qt5Qt6Compat::qintptr *result) override;
#endif

    QPointer<DropArea> m_dropArea;
    Controllers::TitleBar *const m_titleBar;

private:
    Q_DISABLE_COPY(FloatingWindow)
    QSize maxSizeHint() const;
    void onFrameCountChanged(int count);
    void onVisibleFrameCountChanged(int count);
    bool m_disableSetVisible = false;
    bool m_deleteScheduled = false;
    bool m_inDtor = false;
    bool m_updatingTitleBarVisibility = false;
    QMetaObject::Connection m_layoutDestroyedConnection;
    QAbstractNativeEventFilter *m_nchittestFilter = nullptr;
    Qt::WindowState windowStateOverride() const;
#ifdef Q_OS_WIN
    int m_lastHitTest = 0;
#endif
};

}