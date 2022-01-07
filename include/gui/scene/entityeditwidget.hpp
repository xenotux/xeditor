/**
 *  Mana - 3D Game Engine
 *  Copyright (C) 2021  Julian Zampiccoli
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef XEDITOR_ENTITYEDITWIDGET_HPP
#define XEDITOR_ENTITYEDITWIDGET_HPP

#include <QWidget>

#include "ecs/componentmanager.hpp"

class EntityEditWidget : public QWidget {
Q_OBJECT
public:
    //TODO: Components Display / Edit
    explicit EntityEditWidget(QWidget *parent)
            : QWidget(parent) {}

    void setEntity(xengine::Entity value) {
        entity = value;
    }

    void setComponentManager(xengine::ComponentManager *value) {
        componentManager = value;
    }

private:
    xengine::Entity entity;
    xengine::ComponentManager *componentManager = nullptr;
};

#endif //XEDITOR_ENTITYEDITWIDGET_HPP
