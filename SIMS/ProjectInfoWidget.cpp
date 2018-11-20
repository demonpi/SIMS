#include "ProjectInfoWidget.h"

ProjectInfoWidget::ProjectInfoWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//加入项目时间线信息
	ui.timeline_SA_Layout->addWidget(new ProjectTimeLineWidget(QString("2018-10-11"), QString("sdafds")));
}

ProjectInfoWidget::~ProjectInfoWidget()
{

}
