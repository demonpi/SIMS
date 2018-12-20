#include "ProjectDataStreamWidget.h"

ProjectDataStreamWidget::ProjectDataStreamWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	createToolBox();

	m_scene = new DiagramScene(ui.graphicsView);
	ui.graphicsView->setScene(m_scene);
	m_scene->setSceneRect(QRectF(0, 0, 5000, 5000));

	connect(m_scene, SIGNAL(itemInserted(DiagramItem*)), this, SLOT(itemInserted(DiagramItem*)));
	connect(m_scene, SIGNAL(itemSelected(QGraphicsItem*)), 	this, SLOT(itemSelected(QGraphicsItem*)));
}

ProjectDataStreamWidget::~ProjectDataStreamWidget()
{
}

void ProjectDataStreamWidget::createToolBox()
{
	//创建buttonGroup
	m_buttonGroup = new QButtonGroup(this);
	m_buttonGroup->setExclusive(false);
	connect(m_buttonGroup, SIGNAL(buttonClicked(int)), 	this, SLOT(buttonGroupClicked(int)));


	//创建software_W
	QGridLayout* softwareLayout = new QGridLayout(ui.software_W);
	softwareLayout->addWidget(createCellWidget(QStringLiteral("软件"), DiagramItem::Software), 0, 0);

	softwareLayout->setRowStretch(3, 10);
	softwareLayout->setColumnStretch(2, 10);
	ui.software_W->setLayout(softwareLayout);
	//create connect_W
	QGridLayout* connectLayout= new QGridLayout(ui.connect_W);
	connectLayout->addWidget(createCellWidget(QStringLiteral("1553B"), DiagramItem::Connect1553B), 0, 0);
	connectLayout->addWidget(createCellWidget(QStringLiteral("RS422"), DiagramItem::ConnectRS422), 0, 1);
	connectLayout->addWidget(createCellWidget(QStringLiteral("RS485"), DiagramItem::ConnectRS485), 1, 0);
	connectLayout->addWidget(createCellWidget(QStringLiteral("CAN"),	   DiagramItem::ConnectCAN),    1, 1);
	connectLayout->addWidget(createCellWidget(QStringLiteral("TCP"),     DiagramItem::ConnectTCP),     2, 0);
	connectLayout->addWidget(createCellWidget(QStringLiteral("UDP"),    DiagramItem::ConnectUDP),    2, 1);
	connectLayout->addWidget(createCellWidget(QStringLiteral("光纤"),    DiagramItem::ConnectFiber),   3, 0);

	ui.connect_W->setLayout(connectLayout);
	//create assist_W 各种分隔符
	QGridLayout* assistLayout = new QGridLayout(ui.assist_W);



	ui.assist_W->setLayout(assistLayout);
}

QWidget * ProjectDataStreamWidget::createCellWidget(const QString & text, DiagramItem::DiagramType type)
{
	DiagramItem item(type);
	QIcon icon(item.image());

	QToolButton *button = new QToolButton;
	button->setIcon(icon);
	button->setIconSize(QSize(50, 50));
	button->setCheckable(true);
	//TODO:临时措施，仅为了实现功能
	button->setObjectName(QString::number(type));

	m_buttonGroup->addButton(button, int(type));

	QGridLayout *layout = new QGridLayout;
	layout->addWidget(button, 0, 0, Qt::AlignHCenter);
	layout->addWidget(new QLabel(text), 1, 0, Qt::AlignCenter);

	QWidget *widget = new QWidget;
	widget->setLayout(layout);

	return widget;
}

void ProjectDataStreamWidget::buttonGroupClicked(int id)
{
	QList<QAbstractButton *> buttons = m_buttonGroup->buttons();
	foreach(QAbstractButton *button, buttons) 
	{
		if (m_buttonGroup->button(id) != button)
			button->setChecked(false);
		else
		{
			if (button->objectName() == QString::number(DiagramItem::Connect1553B))
			{
				m_scene->setMode(DiagramScene::InsertLine);
			}
			else
			{
				m_scene->setMode(DiagramScene::InsertItem);
			}
		}
	}

	m_scene->setItemType(DiagramItem::DiagramType(id));
}

void ProjectDataStreamWidget::itemInserted(DiagramItem *item)
{
	m_scene->setMode(DiagramScene::MoveItem);
	m_buttonGroup->button(int(item->diagramType()))->setChecked(false);
}

void ProjectDataStreamWidget::itemSelected(DiagramItem *item)
{
	DiagramItem::DiagramType currentItemType = item->diagramType();
	//如果是software
	





	//如果是connect



}
