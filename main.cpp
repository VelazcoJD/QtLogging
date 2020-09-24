#include "QtLogging.h"
#include <QtWidgets/QApplication>

#include "Logger.h"

int main(int argc, char *argv[])
{
    Logger::init();

    QApplication a(argc, argv);
    QtLogging w;
    w.show();
    bool state = a.exec();

    Logger::clean();
    return state;
}
