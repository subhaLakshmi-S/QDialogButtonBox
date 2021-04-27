#include "widget.h"
#include "ui_widget.h"
#include<QFile>
#include<QFileDialog>
#include<QDebug>
#include<infodialog.h>

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


void Widget::on_pushButton_clicked()
{

    infoDialog *dialog=new infoDialog(this);
            /*Modal
           int ret=dialog->exec()
            if(ret==QDialog::Accepted)
            {
                QString position= dialog->getPosition();
                QString Os= dialog->getFavouriteoS();
                qDebug()<<"Dialog Accepted, position is:"<<position<<"and favourite os: "<<Os;
                ui->infolabel->setText("Your position is:  "+position+"and favourite os:  "+Os);
            }
            if(ret==QDialog::Rejected)
            {
             qDebug()<<"Dialog Rejected";
             }*/

            connect(dialog,&infoDialog::accepted,[=](){
                QString position=dialog->getPosition();
                QString Os=dialog->getFavoriteOS();
                qDebug()<<"Dialog Accepted, position is:"<<position<<"and favourite os:"<<Os;
                ui->label->setText("your position is: "+position+"and your favourite os: "+Os);

            });
            connect(dialog,&infoDialog::rejected,[=](){
               qDebug()<<"Dialog Rejected";

            });
            dialog->show();
            dialog->raise();
            dialog->activateWindow();
}
