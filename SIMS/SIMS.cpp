#include "SIMS.h"

SIMS::SIMS(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
	if (login())
	{
		//显示主页面

	}
}

void SIMS::init()
{
	//登录功能
	m_login = new Login();
}

bool SIMS::login()
{
	bool result = false;
	m_login->show();

	return m_login->verify();
}
