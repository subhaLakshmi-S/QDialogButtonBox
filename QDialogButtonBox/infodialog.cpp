#include "infodialog.h"
#include "ui_infodialog.h"
#include<QDebug>

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

void infoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton=ui->buttonBox->standardButton(button);
//QMessageBox::StandardButton and QPlatformDialogHelper::StandardButton
    if(stdButton==QDialogButtonBox::Ok)

    {

    accept();

    qDebug()<<"Ok button clicked";

    }
    if(stdButton==QDialogButtonBox::Cancel)

    {

    reject();

    qDebug()<<"cancel button clicked";

    }
    if(stdButton==QDialogButtonBox::Save)

    {

    //accept();

    qDebug()<<"Save button clicked";

    }
    if(stdButton==QDialogButtonBox::SaveAll)

    {

    //accept();

    qDebug()<<"Save All button clicked";

    }
    if(stdButton==QDialogButtonBox::No)

    {

   // reject();

    qDebug()<<"No button clicked";

    }
    if(stdButton==QDialogButtonBox::NoToAll)

    {

   // reject();

    qDebug()<<"No To All button clicked";

    }
    if(stdButton==QDialogButtonBox::Open)

    {

    //accept();

    qDebug()<<"Open button clicked";

    }
}
