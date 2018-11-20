#pragma once
/**
��Ŀ���ͺţ�������
*/
#include <QObject>
#include "ProjectList.h"
#include "ProjectInfoWidget.h"
#include "ProjectDataStreamWidget.h"
#include "ProjectSoftwareWidget.h"
#include "ui_ProjectUI.h"


class Project : public QWidget
{
	Q_OBJECT

public:
	Project(QWidget *parent = 0);
	~Project();

	//���action����Ӧ
	void show();

private slots:
	void openProject(QString name);

private:

	ProjectList* m_projectList;
	QString m_projectName;
	Ui::ProjectUI ui;
	QWidget* m_centralWidget;
	QTabWidget* m_mainWidget;
	//3��tabҳ
	ProjectInfoWidget * m_infoWidget = nullptr;
	ProjectDataStreamWidget * m_dataStreamWidget = nullptr;
	ProjectSoftwareWidget * m_softwareWidget = nullptr;
};
