#pragma once

#include <QtWidgets/QMainWindow>
#include <QDebug>
#include "ui_SIMS.h"
#include "Login.h"
#include "Project.h"

class SIMS : public QMainWindow
{
	Q_OBJECT

public:
	SIMS(QWidget *parent = Q_NULLPTR);
	void process();
	QWidget* getCentralWidget();

private slots:
	//项目管理响应
	void project();
	//软件管理响应
	void software();
	//日志查看响应
	void log();
	//账户管理响应
	void account();

private:
	void init();

	Ui::SIMSClass ui;
	//登录对话框及状态
	Login* m_login;
	//项目管理相关操作
	Project* m_project = nullptr;
};
