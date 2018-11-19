#include "ProjectAdd.h"

ProjectAdd::ProjectAdd(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.add_PB, SIGNAL(clicked()), this, SLOT(addProjcet()));
}

ProjectAdd::~ProjectAdd()
{

}

void ProjectAdd::addProjcet()
{
	//验证内容不为空
	if (ui.name_LE->text().trimmed() == QString("") || ui.desceribe_TE->toPlainText().trimmed() == QString(""))
	{
		QMessageBox::information(0, QStringLiteral("提示"), QStringLiteral("所填内容不能为空！"), QMessageBox::Ok);
	}
	else 
	{
		//连接数据库
		DatabaseOperate* tempConnect = DatabaseOperate::getInstance();
		//验证没有相同的项目名，利用了UNIQUE字段。直接提交看结果
		QString name = ui.name_LE->text();
		QString describe = ui.desceribe_TE->toPlainText();
		QString query = QString("INSERT INTO `sims`.`projectinfo_t`(`name`, `describe`) VALUES ('" + name + "', '" + describe + "')");
		tempConnect->exec(query);
		if (tempConnect->getDB().lastError().type() == QSqlError::NoError)
		{
			this->close();
			QMessageBox::about(NULL, QStringLiteral("提示"), QStringLiteral("添加成功"));
		}
		else
		{
			QMessageBox::about(NULL, QStringLiteral("提示"), QStringLiteral("添加失败。项目名重复！"));
		}
	}
}
