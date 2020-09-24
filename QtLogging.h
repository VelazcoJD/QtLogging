#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtLogging.h"

class QtLogging : public QMainWindow
{
    Q_OBJECT

public:
    QtLogging(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtLoggingClass ui;

public:
    void onDebug();
    void onInfo();
    void onWarning();
    void onCritical();
    void onFatal();
};
