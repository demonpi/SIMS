#include "SIMS.h"

SIMS::SIMS(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void SIMS::init()
{
	//��¼����
	m_login = new Login();
	//������action����
	connect(ui.project,   SIGNAL(triggered()), this, SLOT(project()));
	connect(ui.software, SIGNAL(triggered()), this, SLOT(software()));
	connect(ui.log,         SIGNAL(triggered()), this, SLOT(log()));
	connect(ui.account,  SIGNAL(triggered()),  this, SLOT(account()));
	//��ʼ����¼����
	m_login->show();
}

void SIMS::process()
{
	//�����ʼ��
	init();
}

QWidget* SIMS::getCentralWidget()
{
	return ui.centralWidget;
}

void SIMS::account()
{
	//��ʾ�˻���Ϣ
	if (m_login->verify())
	{

	}
	//��ʾ��¼����
	else
	{
		m_login->show();
	}
}

void SIMS::project()
{
	//��δ��¼���ȵ�¼
	if (!m_login->verify())
	{
		m_login->show();
	}
	//����ѵ�¼������ʾ�����߼�
	else
	{
		if (m_project != nullptr)
		{
			m_project->show();
		}
		else 
		{
			m_project = new Project(ui.centralWidget);
			m_project->show();
		}
	}
}

void SIMS::software()
{
	//��δ��¼���ȵ�¼
	if (!m_login->verify())
	{
		m_login->show();
	}
	//����ѵ�¼������ʾ�����߼�
	else
	{

	}
}

void SIMS::log()
{
	//��δ��¼���ȵ�¼
	if (!m_login->verify())
	{
		m_login->show();
	}
	//����ѵ�¼������ʾ�����߼�
	else
	{

	}
}