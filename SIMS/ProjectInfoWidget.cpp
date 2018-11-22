#include "ProjectInfoWidget.h"

ProjectInfoWidget::ProjectInfoWidget(QString projectName, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m_projectName = projectName;
	m_connect = DatabaseOperate::getInstance();
	refreshInfo();
	refreshTimeline();
	}

ProjectInfoWidget::~ProjectInfoWidget()
{

}

void ProjectInfoWidget::refreshInfo()
{
	//填入项目名
	ui.name_LE->setText(m_projectName);
	//查询并填入项目描述
	QString query = QString("SELECT * FROM project WHERE project_name = '%1'").arg(m_projectName);
	QSqlQuery result = m_connect->exec(query);

	result.next();
	QSqlRecord rec = result.record();
	int describe = rec.indexOf("project_describe");
	QString value = result.value(describe).toString();
	ui.describe_TE->setText(value);
}

void ProjectInfoWidget::refreshTimeline()
{
	//加入项目时间线信息
	ui.timeline_SA_Layout->addWidget(new ProjectTimeLineWidget(QString("2018-10-11"), QString("this is a test!")));
}
