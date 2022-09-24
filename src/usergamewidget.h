#ifndef USERGAMEWIDGET_H
#define USERGAMEWIDGET_H

#include <QWidget>
#include "QListWidgetItem"
#include "gameoverviewitem.h"
namespace Ui {
class UserGameWidget;
}

class UserGameWidget : public QWidget
{
    Q_OBJECT

public:
    explicit UserGameWidget(QWidget *parent = nullptr);
    ~UserGameWidget();
    void addGamePlay();
    void addGameUpdate();
    void addGame();
    void setGameOverview();
    void setGameDynamic();

private:
    Ui::UserGameWidget *ui;
    QList<QListWidgetItem *> listview;
    QList<GameOverviewItem *> gameOverview;
    void initLayout();
};

#endif // USERGAMEWIDGET_H
