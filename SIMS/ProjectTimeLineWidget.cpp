#include "ProjectTimeLineWidget.h"

ProjectTimeLineWidget::ProjectTimeLineWidget(QString time, QString content, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	m_time      = time;
	m_content = content;
	ui.time_L->setText(time);
	ui.content_TB->setText(content);
}

ProjectTimeLineWidget::~ProjectTimeLineWidget()
{
}
