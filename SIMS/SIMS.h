#pragma once

#include <QtWidgets/QMainWindow>
#include <QDebug>
#include "ui_SIMS.h"
#include "Login.h"

class SIMS : public QMainWindow
{
	Q_OBJECT

public:
	SIMS(QWidget *parent = Q_NULLPTR);


private:
	void init();
	bool login();

	Ui::SIMSClass ui;
	Login* m_login;
};
