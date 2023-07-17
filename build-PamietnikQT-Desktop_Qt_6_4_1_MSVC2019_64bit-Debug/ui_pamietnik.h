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
    QTextEdit *previousWpisTextEdit;
    QTextEdit *currentWpisTextEdit;
    QTextEdit *nextWpisTextEdit;
    QPushButton *previousWpisPushButton;
    QPushButton *nextWpispPushButton;
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
        dataWpisuDateTime->setGeometry(QRect(50, 510, 194, 29));
        addWpisButton = new QPushButton(centralwidget);
        addWpisButton->setObjectName("addWpisButton");
        addWpisButton->setGeometry(QRect(540, 500, 201, 41));
        listaWpisowTextEdit = new QTextEdit(centralwidget);
        listaWpisowTextEdit->setObjectName("listaWpisowTextEdit");
        listaWpisowTextEdit->setEnabled(true);
        listaWpisowTextEdit->setGeometry(QRect(30, 20, 741, 41));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listaWpisowTextEdit->sizePolicy().hasHeightForWidth());
        listaWpisowTextEdit->setSizePolicy(sizePolicy);
        listaWpisowTextEdit->setMaximumSize(QSize(741, 291));
        listaWpisowTextEdit->setLineWrapMode(QTextEdit::NoWrap);
        trescWpisuTextEdit = new QTextEdit(centralwidget);
        trescWpisuTextEdit->setObjectName("trescWpisuTextEdit");
        trescWpisuTextEdit->setGeometry(QRect(30, 420, 741, 71));
        previousWpisTextEdit = new QTextEdit(centralwidget);
        previousWpisTextEdit->setObjectName("previousWpisTextEdit");
        previousWpisTextEdit->setGeometry(QRect(30, 80, 741, 81));
        currentWpisTextEdit = new QTextEdit(centralwidget);
        currentWpisTextEdit->setObjectName("currentWpisTextEdit");
        currentWpisTextEdit->setGeometry(QRect(30, 170, 741, 81));
        nextWpisTextEdit = new QTextEdit(centralwidget);
        nextWpisTextEdit->setObjectName("nextWpisTextEdit");
        nextWpisTextEdit->setGeometry(QRect(30, 260, 741, 81));
        previousWpisPushButton = new QPushButton(centralwidget);
        previousWpisPushButton->setObjectName("previousWpisPushButton");
        previousWpisPushButton->setGeometry(QRect(60, 360, 241, 41));
        nextWpispPushButton = new QPushButton(centralwidget);
        nextWpispPushButton->setObjectName("nextWpispPushButton");
        nextWpispPushButton->setGeometry(QRect(500, 360, 241, 41));
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
        previousWpisPushButton->setText(QCoreApplication::translate("Pamietnik", "Poprzednie", nullptr));
        nextWpispPushButton->setText(QCoreApplication::translate("Pamietnik", "Nastepne", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pamietnik: public Ui_Pamietnik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAMIETNIK_H
