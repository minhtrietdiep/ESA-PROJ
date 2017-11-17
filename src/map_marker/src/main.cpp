#include <QtGui>
#include <QApplication>
#include "main_window.hpp"
#include "geometry_msgs/Pose.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    map_marker::MainWindow w(argc,argv);
    w.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
    int result = app.exec();

	return result;
}
