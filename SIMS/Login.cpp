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

	//访问数据库
	if (tempInstance->connect())
	{
		//获取界面提交数据
		QString username = ui.username_LE->text();
		QString password = ui.password_LE->text();
		QString query = QString("SELECT `user_password` FROM `user` WHERE user_name='" + username + "'");
		QSqlQuery result = tempInstance->exec(query);
		QSqlRecord rec = result.record();

		if (result.size() < 1)
		{
			QMessageBox::critical(0, QStringLiteral("登录失败"), 	QStringLiteral("未找到用户名"), QMessageBox::Cancel);
		}
		else 
		{
			result.next();
			rec = result.record();
			int pswdcol = rec.indexOf("user_password");
			QString value = result.value(pswdcol).toString();
			if (value == password)
			{
				//关闭对话框
				this->accept();
				//提示登录成功
				QMessageBox::about(NULL, QStringLiteral("登录成功"), QStringLiteral("登录成功"));
				m_username = username;
				m_verify        = true;
				//将Log类中的username进行更新
				Log::getInstance()->setUserName(username);
			}
			else
			{
				QMessageBox::critical(0, QStringLiteral("登录失败"), QStringLiteral("密码错误"), QMessageBox::Cancel);
			}
		}
	}
}

void Login::cancel()
{
	ui.username_LE->clear();
	ui.password_LE->clear();
}
