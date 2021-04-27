#include "infodialog.h"
#include "ui_infodialog.h"
infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}


void infoDialog::on_OKpushButton_clicked()
{
    QString userposition= ui->lineEdit->text();
           if(userposition.isEmpty())
           {
               Position=userposition;
               if(ui->radioButton->isChecked())
               {
                   FavoriteOS="Windows";
               }
               if(ui->radioButton_2->isChecked())
               {
                   FavoriteOS="MAC";
               }
               if(ui->radioButton_3->isChecked())
               {
                   FavoriteOS="Linux";
               }
           }
           accept();
}

void infoDialog::on_CancelpushButton_clicked()

    {
         reject();
    }

    QString infoDialog::getPosition() const
    {
        return Position;
    }

    QString infoDialog::getFavoriteOS() const
{
        return FavoriteOS;
}

