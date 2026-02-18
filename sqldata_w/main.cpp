#include "mainwindow.h"
#include "sqldata.h"
#include <QString>
#include <QtGui/QApplication>
#include <string>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;

  // Do not allow to resize the main window
  w.setFixedWidth(1000);
  w.setFixedHeight(670);
  w.show();

  return a.exec();
}
