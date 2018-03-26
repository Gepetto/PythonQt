/*
*
*  Copyright (C) 2010 MeVis Medical Solutions AG All Rights Reserved.
*
*  This library is free software; you can redistribute it and/or
*  modify it under the terms of the GNU Lesser General Public
*  License as published by the Free Software Foundation; either
*  version 2.1 of the License, or (at your option) any later version.
*
*  This library is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*  Lesser General Public License for more details.
*
*  Further, this software is distributed without any warranty that it is
*  free of the rightful claim of any third person regarding infringement
*  or the like.  Any license provided herein, whether implied or
*  otherwise, applies only to this software file.  Patent licenses, if
*  any, provided herein do not apply to combinations of this program with
*  other software, or any other product whatsoever.
*
*  You should have received a copy of the GNU Lesser General Public
*  License along with this library; if not, write to the Free Software
*  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*  Contact information: MeVis Medical Solutions AG, Universitaetsallee 29,
*  28359 Bremen, Germany or:
*
*  http://www.mevis.de
*
*/

#include "PythonQt_QtAll.h"

#include "PythonQt.h"

#ifdef PythonQt_Wrap_Qtgui
void PythonQt_init_QtGui(PyObject*);
#endif
#ifdef PythonQt_Wrap_Qtsvg
void PythonQt_init_QtSvg(PyObject*);
#endif
#ifdef PythonQt_Wrap_Qtsql
void PythonQt_init_QtSql(PyObject*);
#endif
#ifdef PythonQt_Wrap_Qtnetwork
void PythonQt_init_QtNetwork(PyObject*);
#endif
#ifdef PythonQt_Wrap_Qtcore
void PythonQt_init_QtCore(PyObject*);
#endif
#ifdef PythonQt_Wrap_Qtwebkit
void PythonQt_init_QtWebKit(PyObject*);
#endif
#ifdef PythonQt_Wrap_Qtopengl
void PythonQt_init_QtOpenGL(PyObject*);
#endif
#ifdef PythonQt_Wrap_Qtxml
void PythonQt_init_QtXml(PyObject*);
#endif
#ifdef PythonQt_Wrap_Qtuitools
void PythonQt_init_QtUiTools(PyObject*);
#endif

namespace PythonQt_QtAll
{
  PYTHONQT_QTALL_EXPORT void init() {
#ifdef PythonQt_Wrap_Qtcore
    PythonQt_init_QtCore(0);
#endif
#ifdef PythonQt_Wrap_Qtnetwork
    PythonQt_init_QtNetwork(0);
#endif
#ifdef PythonQt_Wrap_Qtgui
    PythonQt_init_QtGui(0);
#endif
#ifdef PythonQt_Wrap_Qtxml
    PythonQt_init_QtXml(0);
#endif
#ifdef PythonQt_Wrap_Qtsvg
    PythonQt_init_QtSvg(0);
#endif
#ifdef PythonQt_Wrap_Qtsql
    PythonQt_init_QtSql(0);
#endif
#ifdef PythonQt_Wrap_Qtwebkit
    PythonQt_init_QtWebKit(0);
#endif
#ifdef PythonQt_Wrap_Qtopengl
    PythonQt_init_QtOpenGL(0);
#endif
#ifdef PythonQt_Wrap_Qtuitools
    PythonQt_init_QtUiTools(0);
#endif
  };
};


