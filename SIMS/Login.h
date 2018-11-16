#pragma once
#include <qwidget.h>
#include "ui_Login.h"
#include "DatabaseOperate.h"

class Login :
	public QDialog
{
	Q_OBJECT

public:
	Login(QWidget *parent = Q_NULLPTR);
	~Login();

	bool verify();


private slots:
	void confirm();
	void cancel();

private:
	Ui::LoginDialog ui;
	bool m_verify = false;

};
