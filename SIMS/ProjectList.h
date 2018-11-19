#pragma once

#include <QDialog>
#include <QSortFilterProxyModel>
#include "ui_ProjectList.h"
#include "DatabaseOperate.h"
#include "ProjectAdd.h"

class ProjectList : public QDialog
{
	Q_OBJECT

public:
	ProjectList(QWidget *parent = Q_NULLPTR);
	~ProjectList();

private slots:
	void filtrate(QString text);
	void addProject();
	void showUP();

private:
	Ui::ProjectList ui;
	//��ȡ���ݿ�������
	QSqlQueryModel* m_model;
	QSortFilterProxyModel* m_proxyModel;
};
