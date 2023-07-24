#ifndef PAMIETNIK_H
#define PAMIETNIK_H

#include <QMainWindow>
#include <vector>
#include <algorithm>
#include <QDebug>
#include <QFile>
#include <QDateTimeEdit>
#include "qtextedit.h"
#include "wpis.h"
#include "addwpisform.h"
//#include <QDateTimeEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class Pamietnik; }
QT_END_NAMESPACE

class Pamietnik : public QMainWindow
{
    Q_OBJECT

public:
    Pamietnik(QWidget *parent = nullptr);
    ~Pamietnik();

    void loadWpisyFromFile();
    void saveWpisyToFile();
    void loadSetupFromFile();
    void saveSetupToFile();

    void fillListaWpisow();
    void initVectorWpisow();
    void initCurrentWpis();

    QString generateDelimiter();


    void printWpisAndSetupFont(QTextEdit &textEdit, int index);
    void printEmptyVector(QTextEdit &previousTextEdit, QTextEdit &currentTextEdit, QTextEdit &nextTextEdit);
    void printLackOfWpis(QTextEdit &textEdit);
    void refreshAllPrintWpis(QTextEdit &previousTextEdit, QTextEdit &currentTextEdit, QTextEdit &nextTextEdit ,int index);
    void generateWpisSortAndPrintWpises(QString content, QDateTime dateTime);
    bool checkDuplicatedWpis(Wpis &wpis);





private slots:

    void on_addWpisButton_clicked();
    void on_previousWpisPushButton_clicked();
    void on_nextWpispPushButton_clicked();
    void on_removeWpisPushButton_clicked();

private:


    Ui::Pamietnik *ui;
    addWpisForm *addWpis;
    std::vector<Wpis> vectorWpisow;
    int currentWpis;
    QFile fileDatabase;
    QFile setup;


};
#endif // PAMIETNIK_H
