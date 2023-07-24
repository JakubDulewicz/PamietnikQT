#include "addwpisform.h"
#include "ui_addwpisform.h"
#include "pamietnik.h"
addWpisForm::addWpisForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addWpisForm)
{
    ui->setupUi(this);
}

addWpisForm::~addWpisForm()
{
    delete ui;
}

QString addWpisForm::getText() const
{
    return ui->textEdit->toPlainText();
}

QDateTime addWpisForm::getDateTime() const
{
    return ui->dateTimeEdit->dateTime();
}


