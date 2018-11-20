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

signals:
	void projectOpened(QString name);

private slots:
	void filtrate(QString text);
	void addProject();
	void showUP();
	void openProject();

private:
	Ui::ProjectList ui;
	//读取数据库中数据
	QSqlQueryModel* m_model;
	QSortFilterProxyModel* m_proxyModel;
};
