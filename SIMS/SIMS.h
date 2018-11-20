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
	//��Ŀ������Ӧ
	void project();
	//���������Ӧ
	void software();
	//��־�鿴��Ӧ
	void log();
	//�˻�������Ӧ
	void account();

private:
	void init();

	Ui::SIMSClass ui;
	//��¼�Ի���״̬
	Login* m_login;
	//��Ŀ������ز���
	Project* m_project = nullptr;
};
