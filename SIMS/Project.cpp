#include "Project.h"

Project::Project(QWidget *parent)
	: QWidget(parent)
{
	setParent(parent);
	ui.setupUi(this);
	m_centralWidget = static_cast<QWidget*>(this->parent());
	m_mainWidget = new QTabWidget(this);
}

Project::~Project()
{
}

void Project::show()
{
	m_projectList = new ProjectList();
	connect(m_projectList, SIGNAL(projectOpened(QString)), this, SLOT(openProject(QString)));
	//��ʾѡ���ͺŽ���
	m_projectList->show();
}

void Project::openProject(QString name)
{
	//����Ѵ򿪣����ȹر�����tabҳ
	if (m_mainWidget->count() != 0)
	{
		m_mainWidget->clear();
	}
	//ͨ��projectName��ʼ���������棺������Ϣ����Ϣ�����������
	m_infoWidget            = new ProjectInfoWidget(name);
	m_dataStreamWidget = new ProjectDataStreamWidget();
	m_softwareWidget     = new ProjectSoftwareWidget(name);

	m_mainWidget->addTab(m_infoWidget,            QStringLiteral("������Ϣ"));
	m_mainWidget->addTab(m_dataStreamWidget, QStringLiteral("��Ϣ��"));
	m_mainWidget->addTab(m_softwareWidget,     QStringLiteral("���������Ϣ"));
	
	//���������м���
	m_centralWidget->layout()->addWidget(m_mainWidget);
}
