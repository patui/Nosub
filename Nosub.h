#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Nosub.h"

class Nosub : public QMainWindow
{
    Q_OBJECT

public:
    Nosub(QWidget *parent = Q_NULLPTR);

private:
    Ui::NosubClass ui;
};
