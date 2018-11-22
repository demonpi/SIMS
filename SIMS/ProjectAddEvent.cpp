#include "ProjectAddEvent.h"

ProjectAddEvent::ProjectAddEvent(QString projectName, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setModal(true);
	m_projectName = projectName;

	connect(ui.save_PB, SIGNAL(clicked()), this, SLOT(save()));
	connect(ui.cancel_PB, SIGNAL(clicked()), this, SLOT(reject()));
}

ProjectAddEvent::~ProjectAddEvent()
{
}

void ProjectAddEvent::save()
{
	//写入日志
	if (Log::getInstance()->addEvent(m_projectName, ui.event_TE->toPlainText()))
	{
		//如果成功
		this->close();
		QMessageBox::about(NULL, QStringLiteral("通知"), QStringLiteral("添加事件成功！"));
		//释放信号，让主界面刷新
		emit success();
	}
	else
	{
		QMessageBox::critical(0, QStringLiteral("通知"), QStringLiteral("添加事件失败！"), QMessageBox::Cancel);
	}
}
