/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#include "Platform_qt.h"
#include "Window_qt.h"

#include <QWindow>
#include <QDebug>
#include <QGuiApplication>
#include <QElapsedTimer>

#include <QtTest/QTest>

using namespace KDDockWidgets;

namespace KDDockWidgets::Tests {

/// @brief Helper class to help us with tests
class EventFilter : public QObject
{
public:
    EventFilter(QEvent::Type type)
        : m_type(type)
    {
    }
    ~EventFilter() override;
    bool eventFilter(QObject *, QEvent *e) override
    {
        if (e->type() == m_type)
            m_got = true;

        return false;
    }

    const QEvent::Type m_type;
    bool m_got = false;
};

EventFilter::~EventFilter() = default;

}


Platform_qt::Platform_qt()
{
    if (!qApp)
        qWarning() << "Please call KDDockWidgets::initPlatform() after QGuiApplication";
}

Platform_qt::~Platform_qt()
{
}

std::shared_ptr<ViewWrapper> Platform_qt::focusedView() const
{
    return qobjectAsView(qApp->focusObject());
}

Window::List Platform_qt::windows() const
{
    Window::List windows;
    const auto qtwindows = qApp->topLevelWindows();
    windows.reserve(qtwindows.size());
    for (QWindow *qtwindow : qtwindows) {
        windows << windowFromQWindow(qtwindow);
    }

    return windows;
}

std::shared_ptr<Window> Platform_qt::qobjectAsWindow(QObject *obj) const
{
    if (auto window = qobject_cast<QWindow *>(obj))
        return windowFromQWindow(window);
    return nullptr;
}

#ifdef DOCKS_DEVELOPER_MODE

bool Platform_qt::tests_waitForWindowActive(Window::Ptr window, int timeout) const
{
    auto windowqt = static_cast<Window_qt *>(window.get());
    return QTest::qWaitForWindowActive(windowqt->qtWindow(), timeout);
}

bool Platform_qt::tests_waitForEvent(QObject *w, QEvent::Type type, int timeout) const
{
    Tests::EventFilter filter(type);
    w->installEventFilter(&filter);
    QElapsedTimer time;
    time.start();

    while (!filter.m_got && time.elapsed() < timeout) {
        qApp->processEvents();
        QTest::qWait(50);
    }

    return filter.m_got;
}

bool Platform_qt::tests_waitForEvent(View *view, QEvent::Type type, int timeout) const
{
    return tests_waitForEvent(view->asQObject(), type, timeout);
}

bool Platform_qt::tests_waitForResize(View *view, int timeout) const
{
    return tests_waitForEvent(view->asQObject(), QEvent::Resize, timeout);
}

bool Platform_qt::tests_waitForResize(Controller *c, int timeout) const
{
    return tests_waitForResize(c->view(), timeout);
}

bool Platform_qt::tests_waitForEvent(std::shared_ptr<Window> window, QEvent::Type type, int timeout) const
{
    auto windowqt = static_cast<Window_qt *>(window.get());
    return tests_waitForEvent(windowqt->qtWindow(), type, timeout);
}

#endif