#include <iostream>
#include <QApplication>
#include "widgets.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    MainWindow window;
    window.show();

    return app.exec();
}