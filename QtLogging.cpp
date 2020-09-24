#include "QtLogging.h"

#include "Logger.h"

QtLogging::QtLogging(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QObject::connect(ui.debugButton, &QPushButton::clicked, this, &QtLogging::onDebug);
    QObject::connect(ui.infoButton, &QPushButton::clicked, this, &QtLogging::onInfo);
    QObject::connect(ui.warningButton, &QPushButton::clicked, this, &QtLogging::onWarning);
    QObject::connect(ui.criticalButton, &QPushButton::clicked, this, &QtLogging::onCritical);
    QObject::connect(ui.fatalButton, &QPushButton::clicked, this, &QtLogging::onFatal);
}

void QtLogging::onDebug() {
    qDebug() << "Debug Log!";
}

void QtLogging::onInfo() {
    qInfo() << "Info Log!";
}

void QtLogging::onWarning() {
    qWarning() << "Warning Log!";
}

void QtLogging::onCritical() {
    qCritical() << "Critical Log!";
}

void QtLogging::onFatal() {
    qFatal("Fatal Log!");
}
