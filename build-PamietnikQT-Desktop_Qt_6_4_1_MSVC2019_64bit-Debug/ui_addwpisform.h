/********************************************************************************
** Form generated from reading UI file 'addwpisform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWPISFORM_H
#define UI_ADDWPISFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addWpisForm
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QDialog *addWpisForm)
    {
        if (addWpisForm->objectName().isEmpty())
            addWpisForm->setObjectName("addWpisForm");
        addWpisForm->resize(456, 236);
        buttonBox = new QDialogButtonBox(addWpisForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(250, 180, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(addWpisForm);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 10, 431, 141));
        dateTimeEdit = new QDateTimeEdit(addWpisForm);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(30, 180, 194, 29));

        retranslateUi(addWpisForm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addWpisForm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addWpisForm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addWpisForm);
    } // setupUi

    void retranslateUi(QDialog *addWpisForm)
    {
        addWpisForm->setWindowTitle(QCoreApplication::translate("addWpisForm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addWpisForm: public Ui_addWpisForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWPISFORM_H
