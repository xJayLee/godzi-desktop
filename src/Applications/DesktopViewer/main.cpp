/* --*-c++-*-- */
/**
 * Godzi
 * Copyright 2010 Pelican Mapping
 * http://pelicanmapping.com
 * http://github.com/gwaldron/godzi
 *
 * Godzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */
#include <Godzi/UI/ViewerWidgets>
#include <Godzi/Earth>
#include <osgViewer/View>

#include <QtGui/QApplication>
#include <QtGui/QWidget>
#include <QtGui/QGridLayout>

#include "DesktopMainWindow"

#define EARTH_FILE "http://demo.pelicanmapping.com/rmweb/maps/bluemarble.earth"

int
main( int argc, char** argv )
{
    QApplication app( argc, argv );

		DesktopMainWindow* top = new DesktopMainWindow( EARTH_FILE );
    
    top->resize( 800, 600 );
    top->show();

    app.connect( &app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()) );
    return app.exec();
}
