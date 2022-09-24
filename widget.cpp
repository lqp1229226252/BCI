#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    widget=new UserGameWidget();
    ui->verticalLayout->addWidget(widget);
}

Widget::~Widget()
{
    delete ui;
}

