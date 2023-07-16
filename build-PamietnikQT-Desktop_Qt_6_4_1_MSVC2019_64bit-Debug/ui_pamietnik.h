/********************************************************************************
** Form generated from reading UI file 'pamietnik.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAMIETNIK_H
#define UI_PAMIETNIK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pamietnik
{
public:
    QWidget *centralwidget;
    QDateTimeEdit *dataWpisuDateTime;
    QPushButton *addWpisButton;
    QTextEdit *listaWpisowTextEdit;
    QTextEdit *trescWpisuTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Pamietnik)
    {
        if (Pamietnik->objectName().isEmpty())
            Pamietnik->setObjectName("Pamietnik");
        Pamietnik->resize(800, 600);
        centralwidget = new QWidget(Pamietnik);
        centralwidget->setObjectName("centralwidget");
        dataWpisuDateTime = new QDateTimeEdit(centralwidget);
        dataWpisuDateTime->setObjectName("dataWpisuDateTime");
        dataWpisuDateTime->setGeometry(QRect(30, 420, 194, 29));
        addWpisButton = new QPushButton(centralwidget);
        addWpisButton->setObjectName("addWpisButton");
        addWpisButton->setGeometry(QRect(540, 500, 201, 41));
        listaWpisowTextEdit = new QTextEdit(centralwidget);
        listaWpisowTextEdit->setObjectName("listaWpisowTextEdit");
        listaWpisowTextEdit->setEnabled(true);
        listaWpisowTextEdit->setGeometry(QRect(30, 20, 741, 291));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listaWpisowTextEdit->sizePolicy().hasHeightForWidth());
        listaWpisowTextEdit->setSizePolicy(sizePolicy);
        listaWpisowTextEdit->setMaximumSize(QSize(741, 291));
        listaWpisowTextEdit->setLineWrapMode(QTextEdit::NoWrap);
        trescWpisuTextEdit = new QTextEdit(centralwidget);
        trescWpisuTextEdit->setObjectName("trescWpisuTextEdit");
        trescWpisuTextEdit->setGeometry(QRect(30, 320, 741, 71));
        Pamietnik->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Pamietnik);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Pamietnik->setMenuBar(menubar);
        statusbar = new QStatusBar(Pamietnik);
        statusbar->setObjectName("statusbar");
        Pamietnik->setStatusBar(statusbar);

        retranslateUi(Pamietnik);

        QMetaObject::connectSlotsByName(Pamietnik);
    } // setupUi

    void retranslateUi(QMainWindow *Pamietnik)
    {
        Pamietnik->setWindowTitle(QCoreApplication::translate("Pamietnik", "Pamietnik", nullptr));
        addWpisButton->setText(QCoreApplication::translate("Pamietnik", "Dodaj Wpis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pamietnik: public Ui_Pamietnik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAMIETNIK_H
