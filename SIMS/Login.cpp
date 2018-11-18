#include "Login.h"

Login::Login(QWidget *parent )
{
	setParent(parent);
	ui.setupUi(this);
	this->setModal(true);

	connect(ui.comfirm_PB, SIGNAL(clicked()), this, SLOT(confirm()));
	connect(ui.cancel_PB, SIGNAL(clicked()), this, SLOT(cancel()));
}


Login::~Login()
{
}

bool Login::verify()
{
	return m_verify;
}

QString Login::getUsername()
{
	return m_username;
}

void Login::confirm()
{
	DatabaseOperate* tempInstance = DatabaseOperate::getInstance();

	//�������ݿ�
	if (tempInstance->connect())
	{
		//��ȡ�����ύ����
		QString username = ui.username_LE->text();
		QString password = ui.password_LE->text();
		QString query = QString("SELECT `password` FROM `userinfo_t` WHERE username='" + username + "'");
		QSqlQuery result = tempInstance->exec(query);
		QSqlRecord rec = result.record();

		if (result.size() < 1)
		{
			QMessageBox::critical(0, QStringLiteral("��¼ʧ��"), 	QStringLiteral("δ�ҵ��û���"), QMessageBox::Cancel);
		}
		else 
		{
			result.next();
			rec = result.record();
			int pswdcol = rec.indexOf("password");
			QString value = result.value(pswdcol).toString();
			if (value == password)
			{
				//�رնԻ���
				this->accept();
				//��ʾ��¼�ɹ�
				QMessageBox::about(NULL, QStringLiteral("��¼�ɹ�"), QStringLiteral("��¼�ɹ�"));
				m_username = username;
				m_verify        = true;
			}
			else
			{
				QMessageBox::critical(0, QStringLiteral("��¼ʧ��"), QStringLiteral("�������"), QMessageBox::Cancel);
			}
		}
	}
}

void Login::cancel()
{
	ui.username_LE->clear();
	ui.password_LE->clear();
}
