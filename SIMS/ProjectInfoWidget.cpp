#include "ProjectInfoWidget.h"

ProjectInfoWidget::ProjectInfoWidget(QString projectName, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_projectName = projectName;
	m_connect = DatabaseOperate::getInstance();
	
	refreshInfo();
	refreshTimeline();

	connect(ui.add_PB, SIGNAL(clicked()), this, SLOT(addEvent()));
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
	//清空界面
	while (!ui.timeline_SA_Layout->isEmpty())
	{
		QLayoutItem* tempptr = ui.timeline_SA_Layout->itemAt(0);
		ui.timeline_SA_Layout->removeItem(tempptr);
		tempptr->widget()->setParent(nullptr);
		delete tempptr;
	}
	//连接数据库，读取日志文件信息
	QString query = QString("SELECT * FROM log WHERE log_project = '%1' ORDER BY log_time DESC")
		.arg(m_projectName);
	QSqlQuery result = m_connect->exec(query);
	while (result.next())
	{
		QSqlRecord rec = result.record();
		int timeIndex         = rec.indexOf("log_time");
		int usernameIndex = rec.indexOf("log_username");
		int operateIndex    = rec.indexOf("log_operate");
		int objectIndex       = rec.indexOf("log_object");
		int previousIndex   = rec.indexOf("log_previous");
		int resultIndex        = rec.indexOf("log_result");

		QString time = rec.value(timeIndex).toString();
		QString describe = QString("%1 %2 %3 %4 %5").arg(rec.value(usernameIndex).toString())
			.arg(rec.value(operateIndex).toString()).arg(rec.value(objectIndex).toString())
			.arg(rec.value(previousIndex).toString()).arg(rec.value(resultIndex).toString());

		//加入项目时间线信息
		ui.timeline_SA_Layout->addWidget(new ProjectTimeLineWidget(time, describe));
	}
}

void ProjectInfoWidget::addEvent()
{
	ProjectAddEvent* dialog = new ProjectAddEvent(m_projectName);
	connect(dialog, SIGNAL(success()), this, SLOT(refreshTimeline()));
	dialog->show();
}