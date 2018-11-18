#include "SIMS.h"

SIMS::SIMS(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void SIMS::init()
{
	//登录功能
	m_login = new Login();
	//修改背景图
	QImage backgroundImage(":/background/background.jpg");
	backgroundImage.scaled(this->width(), this->height(), Qt::KeepAspectRatio);
	ui.background_L->setPixmap(QPixmap::fromImage(backgroundImage));
	//绑定所有action操作
	connect(ui.project,   SIGNAL(triggered()), this, SLOT(project()));
	connect(ui.software, SIGNAL(triggered()), this, SLOT(software()));
	connect(ui.log,         SIGNAL(triggered()), this, SLOT(log()));
	connect(ui.account,  SIGNAL(triggered()),  this, SLOT(account()));
	//初始化登录界面
	m_login->show();
}

void SIMS::process()
{
	//界面初始化
	init();
}

void SIMS::account()
{
	//显示账户信息
	if (m_login->verify())
	{

	}
	//显示登录窗口
	else
	{
		m_login->show();
	}
}

void SIMS::project()
{
	//若未登录，先登录
	if (!m_login->verify())
	{
		m_login->show();
	}
	//如果已登录，再显示其他逻辑
	else
	{
		m_project->show();
	}
}

void SIMS::software()
{
	//若未登录，先登录
	if (!m_login->verify())
	{
		m_login->show();
	}
	//如果已登录，再显示其他逻辑
	else
	{

	}
}

void SIMS::log()
{
	//若未登录，先登录
	if (!m_login->verify())
	{
		m_login->show();
	}
	//如果已登录，再显示其他逻辑
	else
	{

	}
}