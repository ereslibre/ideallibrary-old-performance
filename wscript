#!/usr/bin/env python

# This file is part of the Ideal Library
# Copyright (C) 2010 Rafael Fernández López <ereslibre@ereslibre.es>
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Library General Public
# License as published by the Free Software Foundation; either
# version 3 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Library General Public License for more details.
#
# You should have received a copy of the GNU Library General Public License
# along with this library; see the file COPYING.LIB.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
# Boston, MA 02110-1301, USA.

VERSION    = '1.0'
APPNAME    = 'performanceTests'
srcdir     = '.'
blddir     = 'build'

performanceTests = ['file/ideal', 'file/qt', 'string', 'uri/ideal', 'uri/qt']

def init():
    pass

def set_options(opt):
    opt.tool_options('compiler_cxx qt4')

def configure(conf):
    conf.check_tool('compiler_cxx qt4')
    conf.find_program('pkg-config')
    conf.check_cfg(package = 'idealcore', args = '--cflags --libs')
    conf.env['CXXFLAGS'] += ['-std=c++0x', '-g']

def build(bld):
	bld.add_subdirs(performanceTests)
