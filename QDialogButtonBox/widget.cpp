#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include<QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_ShowInformationpushbutton_clicked()
{
    infoDialog *dialog=new infoDialog(this);
    connect(dialog,&infoDialog::accepted,[=](){
        qDebug()<<"Dialog Accepted";
    });
    connect(dialog,&infoDialog::rejected,[=](){
         qDebug()<<"Dialog rejected";
    });
    dialog->exec();
}
