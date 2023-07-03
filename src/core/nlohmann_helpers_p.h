/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019-2023 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Waqar Ahmed <waqar.ahmed@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/
#ifndef KDAB_NLOHMANN_JSON_QT_HELPERS_H
#define KDAB_NLOHMANN_JSON_QT_HELPERS_H

#include <nlohmann/json.hpp>

#include "Logging_p.h"

#include <QRect>
#include <QSize>

QT_BEGIN_NAMESPACE

inline void from_json(const nlohmann::json &j, QString &string)
{
    string = QString::fromStdString(j.get<std::string>());
}

inline void to_json(nlohmann::json &j, const QString &s)
{
    j = s.toStdString();
}

inline void from_json(const nlohmann::json &j, QStringList &stringList)
{
    if (!j.is_null() && !j.is_array()) {
        KDDW_ERROR("This is not an array, fix the code");
        stringList.clear();
        return;
    }
    stringList.reserve(( int )j.size());
    for (const auto &v : j) {
        stringList.push_back(v.get<QString>());
    }
}

inline void to_json(nlohmann::json &j, const QStringList &stringList)
{
    for (const auto &s : stringList) {
        j.push_back(s);
    }
}

inline void to_json(nlohmann::json &j, const QSize &size)
{
    j["width"] = size.width();
    j["height"] = size.height();
}

inline void from_json(const nlohmann::json &j, QSize &size)
{
    QSize s;
    size.setWidth(j.value("width", s.width()));
    size.setHeight(j.value("height", s.height()));
}

inline void to_json(nlohmann::json &j, const QRect &rect)
{
    j["x"] = rect.x();
    j["y"] = rect.y();
    j["width"] = rect.width();
    j["height"] = rect.height();
}

inline void from_json(const nlohmann::json &j, QRect &rect)
{
    QRect r;
    rect.setX(j.value("x", r.x()));
    rect.setY(j.value("y", r.y()));
    rect.setWidth(j.value("width", r.width()));
    rect.setHeight(j.value("height", r.height()));
}

QT_END_NAMESPACE

#endif