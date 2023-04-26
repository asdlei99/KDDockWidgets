/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/
#include "View_c.h"


#include <QDebug>


namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template<typename T>
struct ValueWrapper
{
    T value;
};

}
namespace KDDockWidgetsBindings_wrappersNS {
namespace KDDWBindingsFlutter {
View_wrapper::View_wrapper(KDDockWidgets::Core::Controller *controller, KDDockWidgets::Core::ViewType type, KDDockWidgets::Core::View *arg__3, Qt::WindowFlags windowFlags)
    : ::KDDockWidgets::flutter::View(controller, type, arg__3, windowFlags)
{
}
void View_wrapper::activateWindow()
{
    if (m_activateWindowCallback) {
        const void *thisPtr = this;
        m_activateWindowCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::activateWindow();
    }
}
void View_wrapper::activateWindow_nocallback()
{
    ::KDDockWidgets::flutter::View::activateWindow();
}
bool View_wrapper::close()
{
    if (m_closeCallback) {
        const void *thisPtr = this;
        return m_closeCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::close();
    }
}
bool View_wrapper::close_nocallback()
{
    return ::KDDockWidgets::flutter::View::close();
}
void View_wrapper::createPlatformWindow()
{
    if (m_createPlatformWindowCallback) {
        const void *thisPtr = this;
        m_createPlatformWindowCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::createPlatformWindow();
    }
}
void View_wrapper::createPlatformWindow_nocallback()
{
    ::KDDockWidgets::flutter::View::createPlatformWindow();
}
Qt::WindowFlags View_wrapper::flags() const
{
    if (m_flagsCallback) {
        const void *thisPtr = this;
        return m_flagsCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::flags();
    }
}
Qt::WindowFlags View_wrapper::flags_nocallback() const
{
    return ::KDDockWidgets::flutter::View::flags();
}
void View_wrapper::free_impl()
{
    if (m_free_implCallback) {
        const void *thisPtr = this;
        m_free_implCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::free_impl();
    }
}
void View_wrapper::free_impl_nocallback()
{
    ::KDDockWidgets::flutter::View::free_impl();
}
QRect View_wrapper::geometry() const
{
    if (m_geometryCallback) {
        const void *thisPtr = this;
        return *m_geometryCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::geometry();
    }
}
QRect View_wrapper::geometry_nocallback() const
{
    return ::KDDockWidgets::flutter::View::geometry();
}
void View_wrapper::grabMouse()
{
    if (m_grabMouseCallback) {
        const void *thisPtr = this;
        m_grabMouseCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::grabMouse();
    }
}
void View_wrapper::grabMouse_nocallback()
{
    ::KDDockWidgets::flutter::View::grabMouse();
}
bool View_wrapper::hasFocus() const
{
    if (m_hasFocusCallback) {
        const void *thisPtr = this;
        return m_hasFocusCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::hasFocus();
    }
}
bool View_wrapper::hasFocus_nocallback() const
{
    return ::KDDockWidgets::flutter::View::hasFocus();
}
void View_wrapper::hide()
{
    if (m_hideCallback) {
        const void *thisPtr = this;
        m_hideCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::hide();
    }
}
void View_wrapper::hide_nocallback()
{
    ::KDDockWidgets::flutter::View::hide();
}
void View_wrapper::init()
{
    if (m_initCallback) {
        const void *thisPtr = this;
        m_initCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::init();
    }
}
void View_wrapper::init_nocallback()
{
    ::KDDockWidgets::flutter::View::init();
}
bool View_wrapper::isActiveWindow() const
{
    if (m_isActiveWindowCallback) {
        const void *thisPtr = this;
        return m_isActiveWindowCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::isActiveWindow();
    }
}
bool View_wrapper::isActiveWindow_nocallback() const
{
    return ::KDDockWidgets::flutter::View::isActiveWindow();
}
bool View_wrapper::isMaximized() const
{
    if (m_isMaximizedCallback) {
        const void *thisPtr = this;
        return m_isMaximizedCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::isMaximized();
    }
}
bool View_wrapper::isMaximized_nocallback() const
{
    return ::KDDockWidgets::flutter::View::isMaximized();
}
bool View_wrapper::isMinimized() const
{
    if (m_isMinimizedCallback) {
        const void *thisPtr = this;
        return m_isMinimizedCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::isMinimized();
    }
}
bool View_wrapper::isMinimized_nocallback() const
{
    return ::KDDockWidgets::flutter::View::isMinimized();
}
bool View_wrapper::isNull() const
{
    if (m_isNullCallback) {
        const void *thisPtr = this;
        return m_isNullCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::isNull();
    }
}
bool View_wrapper::isNull_nocallback() const
{
    return ::KDDockWidgets::flutter::View::isNull();
}
bool View_wrapper::isRootView() const
{
    if (m_isRootViewCallback) {
        const void *thisPtr = this;
        return m_isRootViewCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::isRootView();
    }
}
bool View_wrapper::isRootView_nocallback() const
{
    return ::KDDockWidgets::flutter::View::isRootView();
}
bool View_wrapper::isVisible() const
{
    if (m_isVisibleCallback) {
        const void *thisPtr = this;
        return m_isVisibleCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::isVisible();
    }
}
bool View_wrapper::isVisible_nocallback() const
{
    return ::KDDockWidgets::flutter::View::isVisible();
}
QPoint View_wrapper::mapFromGlobal(QPoint globalPt) const
{
    if (m_mapFromGlobalCallback) {
        const void *thisPtr = this;
        return *m_mapFromGlobalCallback(const_cast<void *>(thisPtr), &globalPt);
    } else {
        return ::KDDockWidgets::flutter::View::mapFromGlobal(globalPt);
    }
}
QPoint View_wrapper::mapFromGlobal_nocallback(QPoint globalPt) const
{
    return ::KDDockWidgets::flutter::View::mapFromGlobal(globalPt);
}
QPoint View_wrapper::mapTo(KDDockWidgets::Core::View *parent, QPoint pos) const
{
    if (m_mapToCallback) {
        const void *thisPtr = this;
        return *m_mapToCallback(const_cast<void *>(thisPtr), parent, &pos);
    } else {
        return ::KDDockWidgets::flutter::View::mapTo(parent, pos);
    }
}
QPoint View_wrapper::mapTo_nocallback(KDDockWidgets::Core::View *parent, QPoint pos) const
{
    return ::KDDockWidgets::flutter::View::mapTo(parent, pos);
}
QPoint View_wrapper::mapToGlobal(QPoint localPt) const
{
    if (m_mapToGlobalCallback) {
        const void *thisPtr = this;
        return *m_mapToGlobalCallback(const_cast<void *>(thisPtr), &localPt);
    } else {
        return ::KDDockWidgets::flutter::View::mapToGlobal(localPt);
    }
}
QPoint View_wrapper::mapToGlobal_nocallback(QPoint localPt) const
{
    return ::KDDockWidgets::flutter::View::mapToGlobal(localPt);
}
QSize View_wrapper::maxSizeHint() const
{
    if (m_maxSizeHintCallback) {
        const void *thisPtr = this;
        return *m_maxSizeHintCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::maxSizeHint();
    }
}
QSize View_wrapper::maxSizeHint_nocallback() const
{
    return ::KDDockWidgets::flutter::View::maxSizeHint();
}
QSize View_wrapper::minSize() const
{
    if (m_minSizeCallback) {
        const void *thisPtr = this;
        return *m_minSizeCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::minSize();
    }
}
QSize View_wrapper::minSize_nocallback() const
{
    return ::KDDockWidgets::flutter::View::minSize();
}
int View_wrapper::minimumHeight() const
{
    if (m_minimumHeightCallback) {
        const void *thisPtr = this;
        return m_minimumHeightCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::minimumHeight();
    }
}
int View_wrapper::minimumHeight_nocallback() const
{
    return ::KDDockWidgets::flutter::View::minimumHeight();
}
int View_wrapper::minimumWidth() const
{
    if (m_minimumWidthCallback) {
        const void *thisPtr = this;
        return m_minimumWidthCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::minimumWidth();
    }
}
int View_wrapper::minimumWidth_nocallback() const
{
    return ::KDDockWidgets::flutter::View::minimumWidth();
}
void View_wrapper::move(int x, int y)
{
    if (m_move_2Callback) {
        const void *thisPtr = this;
        m_move_2Callback(const_cast<void *>(thisPtr), x, y);
    } else {
        ::KDDockWidgets::flutter::View::move(x, y);
    }
}
void View_wrapper::move_nocallback(int x, int y)
{
    ::KDDockWidgets::flutter::View::move(x, y);
}
QRect View_wrapper::normalGeometry() const
{
    if (m_normalGeometryCallback) {
        const void *thisPtr = this;
        return *m_normalGeometryCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::normalGeometry();
    }
}
QRect View_wrapper::normalGeometry_nocallback() const
{
    return ::KDDockWidgets::flutter::View::normalGeometry();
}
QString View_wrapper::objectName() const
{
    if (m_objectNameCallback) {
        const void *thisPtr = this;
        return *m_objectNameCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::objectName();
    }
}
QString View_wrapper::objectName_nocallback() const
{
    return ::KDDockWidgets::flutter::View::objectName();
}
void View_wrapper::onChildAdded(KDDockWidgets::Core::View *childView)
{
    if (m_onChildAddedCallback) {
        const void *thisPtr = this;
        m_onChildAddedCallback(const_cast<void *>(thisPtr), childView);
    } else {
        ::KDDockWidgets::flutter::View::onChildAdded(childView);
    }
}
void View_wrapper::onChildAdded_nocallback(KDDockWidgets::Core::View *childView)
{
    ::KDDockWidgets::flutter::View::onChildAdded(childView);
}
void View_wrapper::onChildRemoved(KDDockWidgets::Core::View *childView)
{
    if (m_onChildRemovedCallback) {
        const void *thisPtr = this;
        m_onChildRemovedCallback(const_cast<void *>(thisPtr), childView);
    } else {
        ::KDDockWidgets::flutter::View::onChildRemoved(childView);
    }
}
void View_wrapper::onChildRemoved_nocallback(KDDockWidgets::Core::View *childView)
{
    ::KDDockWidgets::flutter::View::onChildRemoved(childView);
}
bool View_wrapper::onResize(int w, int h)
{
    if (m_onResize_2Callback) {
        const void *thisPtr = this;
        return m_onResize_2Callback(const_cast<void *>(thisPtr), w, h);
    } else {
        return ::KDDockWidgets::flutter::View::onResize(w, h);
    }
}
bool View_wrapper::onResize_nocallback(int w, int h)
{
    return ::KDDockWidgets::flutter::View::onResize(w, h);
}
void View_wrapper::raise()
{
    if (m_raiseCallback) {
        const void *thisPtr = this;
        m_raiseCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::raise();
    }
}
void View_wrapper::raise_nocallback()
{
    ::KDDockWidgets::flutter::View::raise();
}
void View_wrapper::raiseAndActivate()
{
    if (m_raiseAndActivateCallback) {
        const void *thisPtr = this;
        m_raiseAndActivateCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::raiseAndActivate();
    }
}
void View_wrapper::raiseAndActivate_nocallback()
{
    ::KDDockWidgets::flutter::View::raiseAndActivate();
}
void View_wrapper::releaseKeyboard()
{
    if (m_releaseKeyboardCallback) {
        const void *thisPtr = this;
        m_releaseKeyboardCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::releaseKeyboard();
    }
}
void View_wrapper::releaseKeyboard_nocallback()
{
    ::KDDockWidgets::flutter::View::releaseKeyboard();
}
void View_wrapper::releaseMouse()
{
    if (m_releaseMouseCallback) {
        const void *thisPtr = this;
        m_releaseMouseCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::releaseMouse();
    }
}
void View_wrapper::releaseMouse_nocallback()
{
    ::KDDockWidgets::flutter::View::releaseMouse();
}
void View_wrapper::setCursor(Qt::CursorShape shape)
{
    if (m_setCursorCallback) {
        const void *thisPtr = this;
        m_setCursorCallback(const_cast<void *>(thisPtr), shape);
    } else {
        ::KDDockWidgets::flutter::View::setCursor(shape);
    }
}
void View_wrapper::setCursor_nocallback(Qt::CursorShape shape)
{
    ::KDDockWidgets::flutter::View::setCursor(shape);
}
void View_wrapper::setFixedHeight(int h)
{
    if (m_setFixedHeightCallback) {
        const void *thisPtr = this;
        m_setFixedHeightCallback(const_cast<void *>(thisPtr), h);
    } else {
        ::KDDockWidgets::flutter::View::setFixedHeight(h);
    }
}
void View_wrapper::setFixedHeight_nocallback(int h)
{
    ::KDDockWidgets::flutter::View::setFixedHeight(h);
}
void View_wrapper::setFixedWidth(int w)
{
    if (m_setFixedWidthCallback) {
        const void *thisPtr = this;
        m_setFixedWidthCallback(const_cast<void *>(thisPtr), w);
    } else {
        ::KDDockWidgets::flutter::View::setFixedWidth(w);
    }
}
void View_wrapper::setFixedWidth_nocallback(int w)
{
    ::KDDockWidgets::flutter::View::setFixedWidth(w);
}
void View_wrapper::setGeometry(QRect geometry)
{
    if (m_setGeometryCallback) {
        const void *thisPtr = this;
        m_setGeometryCallback(const_cast<void *>(thisPtr), &geometry);
    } else {
        ::KDDockWidgets::flutter::View::setGeometry(geometry);
    }
}
void View_wrapper::setGeometry_nocallback(QRect geometry)
{
    ::KDDockWidgets::flutter::View::setGeometry(geometry);
}
void View_wrapper::setHeight(int h)
{
    if (m_setHeightCallback) {
        const void *thisPtr = this;
        m_setHeightCallback(const_cast<void *>(thisPtr), h);
    } else {
        ::KDDockWidgets::flutter::View::setHeight(h);
    }
}
void View_wrapper::setHeight_nocallback(int h)
{
    ::KDDockWidgets::flutter::View::setHeight(h);
}
void View_wrapper::setMaximumSize(QSize sz)
{
    if (m_setMaximumSizeCallback) {
        const void *thisPtr = this;
        m_setMaximumSizeCallback(const_cast<void *>(thisPtr), &sz);
    } else {
        ::KDDockWidgets::flutter::View::setMaximumSize(sz);
    }
}
void View_wrapper::setMaximumSize_nocallback(QSize sz)
{
    ::KDDockWidgets::flutter::View::setMaximumSize(sz);
}
void View_wrapper::setMinimumSize(QSize sz)
{
    if (m_setMinimumSizeCallback) {
        const void *thisPtr = this;
        m_setMinimumSizeCallback(const_cast<void *>(thisPtr), &sz);
    } else {
        ::KDDockWidgets::flutter::View::setMinimumSize(sz);
    }
}
void View_wrapper::setMinimumSize_nocallback(QSize sz)
{
    ::KDDockWidgets::flutter::View::setMinimumSize(sz);
}
void View_wrapper::setMouseTracking(bool enable)
{
    if (m_setMouseTrackingCallback) {
        const void *thisPtr = this;
        m_setMouseTrackingCallback(const_cast<void *>(thisPtr), enable);
    } else {
        ::KDDockWidgets::flutter::View::setMouseTracking(enable);
    }
}
void View_wrapper::setMouseTracking_nocallback(bool enable)
{
    ::KDDockWidgets::flutter::View::setMouseTracking(enable);
}
void View_wrapper::setNormalGeometry(QRect geo)
{
    ::KDDockWidgets::flutter::View::setNormalGeometry(geo);
}
void View_wrapper::setObjectName(const QString &name)
{
    if (m_setObjectNameCallback) {
        const void *thisPtr = this;
        m_setObjectNameCallback(const_cast<void *>(thisPtr), name);
    } else {
        ::KDDockWidgets::flutter::View::setObjectName(name);
    }
}
void View_wrapper::setObjectName_nocallback(const QString &name)
{
    ::KDDockWidgets::flutter::View::setObjectName(name);
}
void View_wrapper::setParent(KDDockWidgets::Core::View *parent)
{
    if (m_setParentCallback) {
        const void *thisPtr = this;
        m_setParentCallback(const_cast<void *>(thisPtr), parent);
    } else {
        ::KDDockWidgets::flutter::View::setParent(parent);
    }
}
void View_wrapper::setParent_nocallback(KDDockWidgets::Core::View *parent)
{
    ::KDDockWidgets::flutter::View::setParent(parent);
}
void View_wrapper::setSize(int w, int h)
{
    if (m_setSize_2Callback) {
        const void *thisPtr = this;
        m_setSize_2Callback(const_cast<void *>(thisPtr), w, h);
    } else {
        ::KDDockWidgets::flutter::View::setSize(w, h);
    }
}
void View_wrapper::setSize_nocallback(int w, int h)
{
    ::KDDockWidgets::flutter::View::setSize(w, h);
}
void View_wrapper::setVisible(bool visible)
{
    if (m_setVisibleCallback) {
        const void *thisPtr = this;
        m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
    } else {
        ::KDDockWidgets::flutter::View::setVisible(visible);
    }
}
void View_wrapper::setVisible_nocallback(bool visible)
{
    ::KDDockWidgets::flutter::View::setVisible(visible);
}
void View_wrapper::setWidth(int w)
{
    if (m_setWidthCallback) {
        const void *thisPtr = this;
        m_setWidthCallback(const_cast<void *>(thisPtr), w);
    } else {
        ::KDDockWidgets::flutter::View::setWidth(w);
    }
}
void View_wrapper::setWidth_nocallback(int w)
{
    ::KDDockWidgets::flutter::View::setWidth(w);
}
void View_wrapper::setWindowOpacity(double v)
{
    if (m_setWindowOpacityCallback) {
        const void *thisPtr = this;
        m_setWindowOpacityCallback(const_cast<void *>(thisPtr), v);
    } else {
        ::KDDockWidgets::flutter::View::setWindowOpacity(v);
    }
}
void View_wrapper::setWindowOpacity_nocallback(double v)
{
    ::KDDockWidgets::flutter::View::setWindowOpacity(v);
}
void View_wrapper::setWindowTitle(const QString &title)
{
    if (m_setWindowTitleCallback) {
        const void *thisPtr = this;
        m_setWindowTitleCallback(const_cast<void *>(thisPtr), title);
    } else {
        ::KDDockWidgets::flutter::View::setWindowTitle(title);
    }
}
void View_wrapper::setWindowTitle_nocallback(const QString &title)
{
    ::KDDockWidgets::flutter::View::setWindowTitle(title);
}
void View_wrapper::setZOrder(int z)
{
    if (m_setZOrderCallback) {
        const void *thisPtr = this;
        m_setZOrderCallback(const_cast<void *>(thisPtr), z);
    } else {
        ::KDDockWidgets::flutter::View::setZOrder(z);
    }
}
void View_wrapper::setZOrder_nocallback(int z)
{
    ::KDDockWidgets::flutter::View::setZOrder(z);
}
void View_wrapper::show()
{
    if (m_showCallback) {
        const void *thisPtr = this;
        m_showCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::show();
    }
}
void View_wrapper::show_nocallback()
{
    ::KDDockWidgets::flutter::View::show();
}
void View_wrapper::showMaximized()
{
    if (m_showMaximizedCallback) {
        const void *thisPtr = this;
        m_showMaximizedCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::showMaximized();
    }
}
void View_wrapper::showMaximized_nocallback()
{
    ::KDDockWidgets::flutter::View::showMaximized();
}
void View_wrapper::showMinimized()
{
    if (m_showMinimizedCallback) {
        const void *thisPtr = this;
        m_showMinimizedCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::showMinimized();
    }
}
void View_wrapper::showMinimized_nocallback()
{
    ::KDDockWidgets::flutter::View::showMinimized();
}
void View_wrapper::showNormal()
{
    if (m_showNormalCallback) {
        const void *thisPtr = this;
        m_showNormalCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::showNormal();
    }
}
void View_wrapper::showNormal_nocallback()
{
    ::KDDockWidgets::flutter::View::showNormal();
}
QSize View_wrapper::sizeHint() const
{
    if (m_sizeHintCallback) {
        const void *thisPtr = this;
        return *m_sizeHintCallback(const_cast<void *>(thisPtr));
    } else {
        return ::KDDockWidgets::flutter::View::sizeHint();
    }
}
QSize View_wrapper::sizeHint_nocallback() const
{
    return ::KDDockWidgets::flutter::View::sizeHint();
}
void View_wrapper::update()
{
    if (m_updateCallback) {
        const void *thisPtr = this;
        m_updateCallback(const_cast<void *>(thisPtr));
    } else {
        ::KDDockWidgets::flutter::View::update();
    }
}
void View_wrapper::update_nocallback()
{
    ::KDDockWidgets::flutter::View::update();
}
void View_wrapper::updateGeometry()
{
    ::KDDockWidgets::flutter::View::updateGeometry();
}
View_wrapper::~View_wrapper()
{
}

}
}
static KDDockWidgets::flutter::View *fromPtr(void *ptr)
{
    return reinterpret_cast<KDDockWidgets::flutter::View *>(ptr);
}
static KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper *fromWrapperPtr(void *ptr)
{
    return reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper *>(ptr);
}
extern "C" {
void c_KDDockWidgets__flutter__View_Finalizer(void *, void *cppObj, void *)
{
    delete reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper *>(cppObj);
}
void *c_KDDockWidgets__flutter__View__constructor_Controller_ViewType_View_WindowFlags(void *controller_, int type, void *arg__3_, int windowFlags)
{
    auto controller = reinterpret_cast<KDDockWidgets::Core::Controller *>(controller_);
    auto arg__3 = reinterpret_cast<KDDockWidgets::Core::View *>(arg__3_);
    auto ptr = new KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper(controller, static_cast<KDDockWidgets::Core::ViewType>(type), arg__3, static_cast<Qt::WindowFlags>(windowFlags));
    return reinterpret_cast<void *>(ptr);
}
// activateWindow()
void c_KDDockWidgets__flutter__View__activateWindow(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->activateWindow_nocallback();} else {    return targetPtr->activateWindow();} }();
}
// close()
bool c_KDDockWidgets__flutter__View__close(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->close_nocallback();} else {    return targetPtr->close();} }();
}
// createPlatformWindow()
void c_KDDockWidgets__flutter__View__createPlatformWindow(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->createPlatformWindow_nocallback();} else {    return targetPtr->createPlatformWindow();} }();
}
// flags() const
int c_KDDockWidgets__flutter__View__flags(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->flags_nocallback();} else {    return targetPtr->flags();} }();
}
// free_impl()
void c_KDDockWidgets__flutter__View__free_impl(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->free_impl_nocallback();} else {    return targetPtr->free_impl();} }();
}
// geometry() const
void *c_KDDockWidgets__flutter__View__geometry(void *thisObj)
{
    return new Dartagnan::ValueWrapper<QRect> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->geometry_nocallback();} else {    return targetPtr->geometry();} }() };
}
// grabMouse()
void c_KDDockWidgets__flutter__View__grabMouse(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->grabMouse_nocallback();} else {    return targetPtr->grabMouse();} }();
}
// hasFocus() const
bool c_KDDockWidgets__flutter__View__hasFocus(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->hasFocus_nocallback();} else {    return targetPtr->hasFocus();} }();
}
// hide()
void c_KDDockWidgets__flutter__View__hide(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->hide_nocallback();} else {    return targetPtr->hide();} }();
}
// init()
void c_KDDockWidgets__flutter__View__init(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->init_nocallback();} else {    return targetPtr->init();} }();
}
// isActiveWindow() const
bool c_KDDockWidgets__flutter__View__isActiveWindow(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->isActiveWindow_nocallback();} else {    return targetPtr->isActiveWindow();} }();
}
// isMaximized() const
bool c_KDDockWidgets__flutter__View__isMaximized(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->isMaximized_nocallback();} else {    return targetPtr->isMaximized();} }();
}
// isMinimized() const
bool c_KDDockWidgets__flutter__View__isMinimized(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->isMinimized_nocallback();} else {    return targetPtr->isMinimized();} }();
}
// isNull() const
bool c_KDDockWidgets__flutter__View__isNull(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->isNull_nocallback();} else {    return targetPtr->isNull();} }();
}
// isRootView() const
bool c_KDDockWidgets__flutter__View__isRootView(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->isRootView_nocallback();} else {    return targetPtr->isRootView();} }();
}
// isVisible() const
bool c_KDDockWidgets__flutter__View__isVisible(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->isVisible_nocallback();} else {    return targetPtr->isVisible();} }();
}
// mapFromGlobal(QPoint globalPt) const
void *c_KDDockWidgets__flutter__View__mapFromGlobal_QPoint(void *thisObj, void *globalPt_)
{
    assert(globalPt_);
    auto &globalPt = *reinterpret_cast<QPoint *>(globalPt_);
    return new Dartagnan::ValueWrapper<QPoint> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->mapFromGlobal_nocallback(globalPt);} else {    return targetPtr->mapFromGlobal(globalPt);} }() };
}
// mapTo(KDDockWidgets::Core::View * parent, QPoint pos) const
void *c_KDDockWidgets__flutter__View__mapTo_View_QPoint(void *thisObj, void *parent_, void *pos_)
{
    auto parent = reinterpret_cast<KDDockWidgets::Core::View *>(parent_);
    assert(pos_);
    auto &pos = *reinterpret_cast<QPoint *>(pos_);
    return new Dartagnan::ValueWrapper<QPoint> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->mapTo_nocallback(parent,pos);} else {    return targetPtr->mapTo(parent,pos);} }() };
}
// mapToGlobal(QPoint localPt) const
void *c_KDDockWidgets__flutter__View__mapToGlobal_QPoint(void *thisObj, void *localPt_)
{
    assert(localPt_);
    auto &localPt = *reinterpret_cast<QPoint *>(localPt_);
    return new Dartagnan::ValueWrapper<QPoint> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->mapToGlobal_nocallback(localPt);} else {    return targetPtr->mapToGlobal(localPt);} }() };
}
// maxSizeHint() const
void *c_KDDockWidgets__flutter__View__maxSizeHint(void *thisObj)
{
    return new Dartagnan::ValueWrapper<QSize> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->maxSizeHint_nocallback();} else {    return targetPtr->maxSizeHint();} }() };
}
// minSize() const
void *c_KDDockWidgets__flutter__View__minSize(void *thisObj)
{
    return new Dartagnan::ValueWrapper<QSize> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->minSize_nocallback();} else {    return targetPtr->minSize();} }() };
}
// minimumHeight() const
int c_KDDockWidgets__flutter__View__minimumHeight(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->minimumHeight_nocallback();} else {    return targetPtr->minimumHeight();} }();
}
// minimumWidth() const
int c_KDDockWidgets__flutter__View__minimumWidth(void *thisObj)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->minimumWidth_nocallback();} else {    return targetPtr->minimumWidth();} }();
}
// move(int x, int y)
void c_KDDockWidgets__flutter__View__move_int_int(void *thisObj, int x, int y)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->move_nocallback(x,y);} else {    return targetPtr->move(x,y);} }();
}
// normalGeometry() const
void *c_KDDockWidgets__flutter__View__normalGeometry(void *thisObj)
{
    return new Dartagnan::ValueWrapper<QRect> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->normalGeometry_nocallback();} else {    return targetPtr->normalGeometry();} }() };
}
// objectName() const
void *c_KDDockWidgets__flutter__View__objectName(void *thisObj)
{
    return new Dartagnan::ValueWrapper<QString> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->objectName_nocallback();} else {    return targetPtr->objectName();} }() };
}
// onChildAdded(KDDockWidgets::Core::View * childView)
void c_KDDockWidgets__flutter__View__onChildAdded_View(void *thisObj, void *childView_)
{
    auto childView = reinterpret_cast<KDDockWidgets::Core::View *>(childView_);
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->onChildAdded_nocallback(childView);} else {    return targetPtr->onChildAdded(childView);} }();
}
// onChildRemoved(KDDockWidgets::Core::View * childView)
void c_KDDockWidgets__flutter__View__onChildRemoved_View(void *thisObj, void *childView_)
{
    auto childView = reinterpret_cast<KDDockWidgets::Core::View *>(childView_);
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->onChildRemoved_nocallback(childView);} else {    return targetPtr->onChildRemoved(childView);} }();
}
// onResize(int w, int h)
bool c_KDDockWidgets__flutter__View__onResize_int_int(void *thisObj, int w, int h)
{
    return [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->onResize_nocallback(w,h);} else {    return targetPtr->onResize(w,h);} }();
}
// raise()
void c_KDDockWidgets__flutter__View__raise(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->raise_nocallback();} else {    return targetPtr->raise();} }();
}
// raiseAndActivate()
void c_KDDockWidgets__flutter__View__raiseAndActivate(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->raiseAndActivate_nocallback();} else {    return targetPtr->raiseAndActivate();} }();
}
// releaseKeyboard()
void c_KDDockWidgets__flutter__View__releaseKeyboard(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->releaseKeyboard_nocallback();} else {    return targetPtr->releaseKeyboard();} }();
}
// releaseMouse()
void c_KDDockWidgets__flutter__View__releaseMouse(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->releaseMouse_nocallback();} else {    return targetPtr->releaseMouse();} }();
}
// setCursor(Qt::CursorShape shape)
void c_KDDockWidgets__flutter__View__setCursor_CursorShape(void *thisObj, int shape)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setCursor_nocallback(static_cast<Qt::CursorShape>(shape));} else {    return targetPtr->setCursor(static_cast<Qt::CursorShape>(shape));} }();
}
// setFixedHeight(int h)
void c_KDDockWidgets__flutter__View__setFixedHeight_int(void *thisObj, int h)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setFixedHeight_nocallback(h);} else {    return targetPtr->setFixedHeight(h);} }();
}
// setFixedWidth(int w)
void c_KDDockWidgets__flutter__View__setFixedWidth_int(void *thisObj, int w)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setFixedWidth_nocallback(w);} else {    return targetPtr->setFixedWidth(w);} }();
}
// setGeometry(QRect geometry)
void c_KDDockWidgets__flutter__View__setGeometry_QRect(void *thisObj, void *geometry_)
{
    assert(geometry_);
    auto &geometry = *reinterpret_cast<QRect *>(geometry_);
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setGeometry_nocallback(geometry);} else {    return targetPtr->setGeometry(geometry);} }();
}
// setHeight(int h)
void c_KDDockWidgets__flutter__View__setHeight_int(void *thisObj, int h)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setHeight_nocallback(h);} else {    return targetPtr->setHeight(h);} }();
}
// setMaximumSize(QSize sz)
void c_KDDockWidgets__flutter__View__setMaximumSize_QSize(void *thisObj, void *sz_)
{
    assert(sz_);
    auto &sz = *reinterpret_cast<QSize *>(sz_);
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setMaximumSize_nocallback(sz);} else {    return targetPtr->setMaximumSize(sz);} }();
}
// setMinimumSize(QSize sz)
void c_KDDockWidgets__flutter__View__setMinimumSize_QSize(void *thisObj, void *sz_)
{
    assert(sz_);
    auto &sz = *reinterpret_cast<QSize *>(sz_);
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setMinimumSize_nocallback(sz);} else {    return targetPtr->setMinimumSize(sz);} }();
}
// setMouseTracking(bool enable)
void c_KDDockWidgets__flutter__View__setMouseTracking_bool(void *thisObj, bool enable)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setMouseTracking_nocallback(enable);} else {    return targetPtr->setMouseTracking(enable);} }();
}
// setNormalGeometry(QRect geo)
void c_KDDockWidgets__flutter__View__setNormalGeometry_QRect(void *thisObj, void *geo_)
{
    assert(geo_);
    auto &geo = *reinterpret_cast<QRect *>(geo_);
    fromPtr(thisObj)->setNormalGeometry(geo);
}
// setObjectName(const QString & name)
void c_KDDockWidgets__flutter__View__setObjectName_QString(void *thisObj, const char *name_)
{
    const auto name = QString::fromUtf8(name_);
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setObjectName_nocallback(name);} else {    return targetPtr->setObjectName(name);} }();
}
// setParent(KDDockWidgets::Core::View * parent)
void c_KDDockWidgets__flutter__View__setParent_View(void *thisObj, void *parent_)
{
    auto parent = reinterpret_cast<KDDockWidgets::Core::View *>(parent_);
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setParent_nocallback(parent);} else {    return targetPtr->setParent(parent);} }();
}
// setSize(int w, int h)
void c_KDDockWidgets__flutter__View__setSize_int_int(void *thisObj, int w, int h)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setSize_nocallback(w,h);} else {    return targetPtr->setSize(w,h);} }();
}
// setVisible(bool visible)
void c_KDDockWidgets__flutter__View__setVisible_bool(void *thisObj, bool visible)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setVisible_nocallback(visible);} else {    return targetPtr->setVisible(visible);} }();
}
// setWidth(int w)
void c_KDDockWidgets__flutter__View__setWidth_int(void *thisObj, int w)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setWidth_nocallback(w);} else {    return targetPtr->setWidth(w);} }();
}
// setWindowOpacity(double v)
void c_KDDockWidgets__flutter__View__setWindowOpacity_double(void *thisObj, double v)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setWindowOpacity_nocallback(v);} else {    return targetPtr->setWindowOpacity(v);} }();
}
// setWindowTitle(const QString & title)
void c_KDDockWidgets__flutter__View__setWindowTitle_QString(void *thisObj, const char *title_)
{
    const auto title = QString::fromUtf8(title_);
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setWindowTitle_nocallback(title);} else {    return targetPtr->setWindowTitle(title);} }();
}
// setZOrder(int z)
void c_KDDockWidgets__flutter__View__setZOrder_int(void *thisObj, int z)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->setZOrder_nocallback(z);} else {    return targetPtr->setZOrder(z);} }();
}
// show()
void c_KDDockWidgets__flutter__View__show(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->show_nocallback();} else {    return targetPtr->show();} }();
}
// showMaximized()
void c_KDDockWidgets__flutter__View__showMaximized(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->showMaximized_nocallback();} else {    return targetPtr->showMaximized();} }();
}
// showMinimized()
void c_KDDockWidgets__flutter__View__showMinimized(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->showMinimized_nocallback();} else {    return targetPtr->showMinimized();} }();
}
// showNormal()
void c_KDDockWidgets__flutter__View__showNormal(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->showNormal_nocallback();} else {    return targetPtr->showNormal();} }();
}
// sizeHint() const
void *c_KDDockWidgets__flutter__View__sizeHint(void *thisObj)
{
    return new Dartagnan::ValueWrapper<QSize> { [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->sizeHint_nocallback();} else {    return targetPtr->sizeHint();} }() };
}
// update()
void c_KDDockWidgets__flutter__View__update(void *thisObj)
{
    [&] {auto targetPtr = fromPtr(thisObj);auto wrapperPtr = dynamic_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper*>(targetPtr);if (wrapperPtr) {    return wrapperPtr->update_nocallback();} else {    return targetPtr->update();} }();
}
// updateGeometry()
void c_KDDockWidgets__flutter__View__updateGeometry(void *thisObj)
{
    fromPtr(thisObj)->updateGeometry();
}
void c_KDDockWidgets__flutter__View__destructor(void *thisObj)
{
    delete fromPtr(thisObj);
}
void c_KDDockWidgets__flutter__View__registerVirtualMethodCallback(void *ptr, void *callback, int methodId)
{
    auto wrapper = fromWrapperPtr(ptr);
    switch (methodId) {
    case 886:
        wrapper->m_activateWindowCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_activateWindow>(callback);
        break;
    case 897:
        wrapper->m_closeCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_close>(callback);
        break;
    case 900:
        wrapper->m_createPlatformWindowCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_createPlatformWindow>(callback);
        break;
    case 905:
        wrapper->m_flagsCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_flags>(callback);
        break;
    case 907:
        wrapper->m_free_implCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_free_impl>(callback);
        break;
    case 909:
        wrapper->m_geometryCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_geometry>(callback);
        break;
    case 911:
        wrapper->m_grabMouseCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_grabMouse>(callback);
        break;
    case 914:
        wrapper->m_hasFocusCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_hasFocus>(callback);
        break;
    case 916:
        wrapper->m_hideCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_hide>(callback);
        break;
    case 919:
        wrapper->m_initCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_init>(callback);
        break;
    case 921:
        wrapper->m_isActiveWindowCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_isActiveWindow>(callback);
        break;
    case 922:
        wrapper->m_isMaximizedCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_isMaximized>(callback);
        break;
    case 923:
        wrapper->m_isMinimizedCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_isMinimized>(callback);
        break;
    case 924:
        wrapper->m_isNullCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_isNull>(callback);
        break;
    case 925:
        wrapper->m_isRootViewCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_isRootView>(callback);
        break;
    case 926:
        wrapper->m_isVisibleCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_isVisible>(callback);
        break;
    case 927:
        wrapper->m_mapFromGlobalCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_mapFromGlobal>(callback);
        break;
    case 928:
        wrapper->m_mapToCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_mapTo>(callback);
        break;
    case 929:
        wrapper->m_mapToGlobalCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_mapToGlobal>(callback);
        break;
    case 930:
        wrapper->m_maxSizeHintCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_maxSizeHint>(callback);
        break;
    case 931:
        wrapper->m_minSizeCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_minSize>(callback);
        break;
    case 932:
        wrapper->m_minimumHeightCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_minimumHeight>(callback);
        break;
    case 933:
        wrapper->m_minimumWidthCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_minimumWidth>(callback);
        break;
    case 935:
        wrapper->m_move_2Callback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_move_2>(callback);
        break;
    case 936:
        wrapper->m_normalGeometryCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_normalGeometry>(callback);
        break;
    case 937:
        wrapper->m_objectNameCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_objectName>(callback);
        break;
    case 1004:
        wrapper->m_onChildAddedCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_onChildAdded>(callback);
        break;
    case 1005:
        wrapper->m_onChildRemovedCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_onChildRemoved>(callback);
        break;
    case 939:
        wrapper->m_onResize_2Callback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_onResize_2>(callback);
        break;
    case 942:
        wrapper->m_raiseCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_raise>(callback);
        break;
    case 943:
        wrapper->m_raiseAndActivateCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_raiseAndActivate>(callback);
        break;
    case 945:
        wrapper->m_releaseKeyboardCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_releaseKeyboard>(callback);
        break;
    case 946:
        wrapper->m_releaseMouseCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_releaseMouse>(callback);
        break;
    case 950:
        wrapper->m_setCursorCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setCursor>(callback);
        break;
    case 951:
        wrapper->m_setFixedHeightCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setFixedHeight>(callback);
        break;
    case 952:
        wrapper->m_setFixedWidthCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setFixedWidth>(callback);
        break;
    case 953:
        wrapper->m_setGeometryCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setGeometry>(callback);
        break;
    case 954:
        wrapper->m_setHeightCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setHeight>(callback);
        break;
    case 955:
        wrapper->m_setMaximumSizeCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setMaximumSize>(callback);
        break;
    case 956:
        wrapper->m_setMinimumSizeCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setMinimumSize>(callback);
        break;
    case 957:
        wrapper->m_setMouseTrackingCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setMouseTracking>(callback);
        break;
    case 958:
        wrapper->m_setObjectNameCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setObjectName>(callback);
        break;
    case 959:
        wrapper->m_setParentCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setParent>(callback);
        break;
    case 961:
        wrapper->m_setSize_2Callback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setSize_2>(callback);
        break;
    case 962:
        wrapper->m_setVisibleCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setVisible>(callback);
        break;
    case 963:
        wrapper->m_setWidthCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setWidth>(callback);
        break;
    case 964:
        wrapper->m_setWindowOpacityCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setWindowOpacity>(callback);
        break;
    case 965:
        wrapper->m_setWindowTitleCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setWindowTitle>(callback);
        break;
    case 966:
        wrapper->m_setZOrderCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_setZOrder>(callback);
        break;
    case 967:
        wrapper->m_showCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_show>(callback);
        break;
    case 968:
        wrapper->m_showMaximizedCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_showMaximized>(callback);
        break;
    case 969:
        wrapper->m_showMinimizedCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_showMinimized>(callback);
        break;
    case 970:
        wrapper->m_showNormalCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_showNormal>(callback);
        break;
    case 972:
        wrapper->m_sizeHintCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_sizeHint>(callback);
        break;
    case 974:
        wrapper->m_updateCallback = reinterpret_cast<KDDockWidgetsBindings_wrappersNS::KDDWBindingsFlutter::View_wrapper::Callback_update>(callback);
        break;
    }
}
}