#include "SIMS.h"

SIMS::SIMS(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
	if (login())
	{
		//��ʾ��ҳ��

	}
}

void SIMS::init()
{
	//��¼����
	m_login = new Login();
}

bool SIMS::login()
{
	bool result = false;
	m_login->show();

	return m_login->verify();
}
