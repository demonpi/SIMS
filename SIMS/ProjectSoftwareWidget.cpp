#include "ProjectSoftwareWidget.h"

ProjectSoftwareWidget::ProjectSoftwareWidget(QString name,  QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m_projectName = name;
	//��ȡ���ݿ����ݣ���ѯ��ͼ
	DatabaseOperate* tempConnect = DatabaseOperate::getInstance();
	m_model = new QSqlQueryModel(this);
	//TODO: ����м�㣬�������������ƿ�������룬���
	QString query = QString("SELECT * FROM project_software_v WHERE project_software_v.project_name = '" + name + "';");
	m_model->setQuery((query), tempConnect->getDB());
	ui.main_TB->setModel(m_model);
}

ProjectSoftwareWidget::~ProjectSoftwareWidget()
{
}
