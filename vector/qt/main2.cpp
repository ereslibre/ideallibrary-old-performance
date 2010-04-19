/*
 * This file is part of the Ideal Library
 * Copyright (C) 2010 Rafael Fernández López <ereslibre@ereslibre.es>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include <QtCore/QList>
#include <QtCore/QDebug>

int main(int argc, char **argv)
{
    QList<size_t> v;

    for (int i = 0; i < 50000; ++i) {
        v.append(i);
    }

    for (int i = 0; i < 50000; ++i) {
        v.prepend(i);
    }

    qDebug() << "number of items " << v.count();

    QList<size_t>::Iterator it = v.begin();
    for (int i = 0; i < 50000; ++i) {
        it = v.erase(it);
    }

    qDebug() << "number of items " << v.count();

    return 0;
}
