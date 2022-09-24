#include "usergamewidget.h"
#include "ui_usergamewidget.h"
UserGameWidget::UserGameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserGameWidget)
{
    ui->setupUi(this);
    initLayout();
    addGamePlay();
    addGameUpdate();
    addGame();
    setGameOverview();
    setGameDynamic();
}

UserGameWidget::~UserGameWidget()
{
    delete ui;
    qDeleteAll(listview.begin(),listview.end());
    qDeleteAll(gameOverview.begin(),gameOverview.end());
    listview.clear();
    gameOverview.clear();
}

void UserGameWidget::addGamePlay()
{
    ui->gameplay->addItem("游戏A");
    ui->gameplay->addItem("游戏B");
    ui->gameplay->addItem("...");
}

void UserGameWidget::addGameUpdate()
{
    ui->gameupdate->addItem("游戏A");
    ui->gameupdate->addItem("游戏A");
    ui->gameupdate->addItem("...");
}

void UserGameWidget::addGame()
{
    ui->gameList->addItem("游戏A");
    ui->gameList->addItem("游戏A");
    ui->gameList->addItem("...");
}

void UserGameWidget::setGameOverview()
{
    GameOverviewItem *item;
    QListWidgetItem *listItem;
    ui->gameoverview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    for(int i=0;i<10;i++)
    {
        listItem=new QListWidgetItem();
        item=new GameOverviewItem();
        item->setData("游戏A","12h","1");
        gameOverview.append(item);
        item->resize(ui->gameoverview->width(),item->height());
        listview.append(listItem);
        ui->gameoverview->addItem(listItem);
        ui->gameoverview->setItemWidget(listItem,item);
    }
    for(int i=0;i<10;i++)
    {
        listItem=new QListWidgetItem();
        item=new GameOverviewItem();
        item->setData("游戏B","12h","1");
        gameOverview.append(item);
        item->resize(ui->gameoverview->width(),item->height());
        listview.append(listItem);
        ui->gameoverview->addItem(listItem);
        ui->gameoverview->setItemWidget(listItem,item);
    }

}

void UserGameWidget::setGameDynamic()
{
    ui->gamedynamic->addItem("官方发布的动态");
    ui->gamedynamic->addItem("游戏a需要更新");
    ui->gamedynamic->addItem("积分翻倍游戏活动");
}
void UserGameWidget::initLayout()
{
    ui->widgetlayout->setStretch(0,2);
    ui->widgetlayout->setStretch(1,1);
    ui->gamelistlayout2->setStretch(0,1);
    ui->gamelistlayout2->setStretch(1,2);
    ui->gamelistlayout1->setStretch(0,1);
    ui->gamelistlayout1->setStretch(1,2);
    ui->gamelistlayout->setStretch(0,1);
    ui->gamelistlayout->setStretch(1,5);
}
