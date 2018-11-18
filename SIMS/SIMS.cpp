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
	//�޸ı���ͼ
	QImage backgroundImage(":/background/background.jpg");
	backgroundImage.scaled(this->width(), this->height(), Qt::KeepAspectRatio);
	ui.background_L->setPixmap(QPixmap::fromImage(backgroundImage));
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
		m_project->show();
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