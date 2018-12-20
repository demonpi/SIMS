#include "ProjectSoftwareWidget.h"

ProjectSoftwareWidget::ProjectSoftwareWidget(QString name,  QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m_projectName = name;
	//获取数据库数据，查询视图
	DatabaseOperate* tempConnect = DatabaseOperate::getInstance();
	m_model = new QSqlQueryModel(this);
	//TODO: 设计中间层，将界面操作与设计库操作分离，解耦。
	QString query = QString("SELECT * FROM project_software_v WHERE project_software_v.project_name = '" + name + "';");
	m_model->setQuery((query), tempConnect->getDB());
	ui.main_TB->setModel(m_model);

	connect(ui.add_PB, SIGNAL(clicked()), this, SLOT(addSoftware()));
}

ProjectSoftwareWidget::~ProjectSoftwareWidget()
{
}

void ProjectSoftwareWidget::addSoftware()
{
	//显示添加软件界面
	SoftwareInfo* tempDialog = new SoftwareInfo();
	tempDialog->show();

}