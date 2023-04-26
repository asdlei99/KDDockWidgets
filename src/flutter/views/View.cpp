/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2020-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#include "View.h"
#include "Platform.h"
#include "core/View_p.h"
#include "core/layouting/Item_p.h"
#include "../Window.h"
#include "ViewWrapper.h"


using namespace KDDockWidgets;
using namespace KDDockWidgets::flutter;

#define PRINT_UNEXPECTED_CALL_MESSAGE \
    qWarning() << Q_FUNC_INFO << "Unexpected call" << m_controller << int(m_controller->type());

View::View(Core::Controller *controller, Core::ViewType type, Core::View *parent,
           Qt::WindowFlags)
    : Core::View(controller, type)
{
    m_parentView = static_cast<View *>(parent);

    if (parent) {
        // setParent(parent);
    }
}

View::~View()
{
    // qDebug() << "~View_flutter" << this << int(type());
    m_inDtor = true;
    if (m_parentView && !m_parentView->inDtor()) {
        m_parentView->onChildRemoved(this);
    }
}

void View::setGeometry(QRect)
{
}

void View::move(int, int)
{
}

bool View::close()
{
    return true;
}

bool View::isVisible() const
{
    PRINT_UNEXPECTED_CALL_MESSAGE
    return false;
}

void View::setVisible(bool)
{
    PRINT_UNEXPECTED_CALL_MESSAGE
}

void View::setSize(int w, int h)
{
    qDebug() << "flutter::View::setSize()" << w << h << this;
}

std::shared_ptr<Core::View> View::rootView() const
{
    if (m_parentView)
        return m_parentView->rootView();

    return const_cast<View *>(this)->asWrapper();
}

void View::setAttribute(Qt::WidgetAttribute, bool)
{
}

bool View::testAttribute(Qt::WidgetAttribute) const
{
    return false;
}

void View::setFlag(Qt::WindowType, bool)
{
}

Qt::WindowFlags View::flags() const
{
    return {};
}

void View::free_impl()
{
    // QObject::deleteLater();
    delete this;
}

QSize View::sizeHint() const
{
    return {};
}

QSize View::minSize() const
{
    return {};
}

QSize View::maxSizeHint() const
{
    return {};
}

QRect View::geometry() const
{
    return {};
}

QRect View::normalGeometry() const
{
    return {};
}

void View::setNormalGeometry(QRect)
{
}

void View::setMaximumSize(QSize)
{
}

void View::setWidth(int)
{
}

void View::setHeight(int)
{
}

void View::setFixedWidth(int)
{
}

void View::setFixedHeight(int)
{
}

void View::show()
{
}

void View::hide()
{
}

void View::updateGeometry()
{
}

void View::update()
{
}

void View::setParent(Core::View *parent)
{
    if (parent == m_parentView)
        return;

    m_parentView = static_cast<View *>(parent);

    if (parent) {
        static_cast<View *>(parent)->onChildAdded(this);
    }
}

void View::raiseAndActivate()
{
}

void View::activateWindow()
{
}

void View::raise()
{
}

QVariant View::property(const char *) const
{
    return {};
}

bool View::isRootView() const
{
    return m_parentView == nullptr;
}

QPoint View::mapToGlobal(QPoint) const
{
    return {};
}

QPoint View::mapFromGlobal(QPoint) const
{
    return {};
}

QPoint View::mapTo(Core::View *, QPoint) const
{
    return {};
}

void View::setWindowOpacity(double)
{
}

void View::setSizePolicy(SizePolicy, SizePolicy)
{
}

SizePolicy View::verticalSizePolicy() const
{
    return {};
}

SizePolicy View::horizontalSizePolicy() const
{
    return {};
}

void View::setWindowTitle(const QString &)
{
}

void View::setWindowIcon(const Icon &)
{
}

bool View::isActiveWindow() const
{
    return false;
}

void View::showNormal()
{
}

void View::showMinimized()
{
}

void View::showMaximized()
{
}

bool View::isMinimized() const
{
    return {};
}

bool View::isMaximized() const
{
    return {};
}

std::shared_ptr<Core::Window> View::window() const
{
    return {};
}

std::shared_ptr<Core::View> View::childViewAt(QPoint) const
{
    return {};
}

std::shared_ptr<Core::View> View::parentView() const
{
    // qDebug() << Q_FUNC_INFO << "parent is" << ( void * )m_parentView << "this=" << ( void * )this
    //          << int(type());

    if (m_parentView)
        return m_parentView->asWrapper();

    return {};
}

std::shared_ptr<Core::View> View::asWrapper()
{
    return ViewWrapper::create(this);
}

void View::setObjectName(const QString &name)
{
    m_name = name;
}

void View::grabMouse()
{
}

void View::releaseMouse()
{
}

void View::releaseKeyboard()
{
    // Not needed for QtQuick
}

void View::setFocus(Qt::FocusReason)
{
}

bool View::hasFocus() const
{
    return false;
}

Qt::FocusPolicy View::focusPolicy() const
{
    return {};
}

void View::setFocusPolicy(Qt::FocusPolicy)
{
}

QString View::objectName() const
{
    return m_name;
}

void View::setMinimumSize(QSize)
{
}

void View::render(QPainter *)
{
}

void View::setCursor(Qt::CursorShape)
{
}

void View::setMouseTracking(bool)
{
}

QVector<std::shared_ptr<Core::View>> View::childViews() const
{
    return {};
}

void View::setZOrder(int)
{
}

HANDLE View::handle() const
{
    // TODOm4
    return this;
}

bool View::onResize(int w, int h)
{
    // Indirection so Dartagnan generates it, while we don't do bindings for View.cpp
    return Core::View::onResize(w, h);
}