#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>
#include<QAbstractButton>

namespace Ui {
class infoDialog;
}

class infoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit infoDialog(QWidget *parent = nullptr);
    ~infoDialog();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::infoDialog *ui;
};

#endif // INFODIALOG_H
