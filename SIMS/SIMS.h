#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SIMS.h"

class SIMS : public QMainWindow
{
	Q_OBJECT

public:
	SIMS(QWidget *parent = Q_NULLPTR);

private:
	Ui::SIMSClass ui;
};
