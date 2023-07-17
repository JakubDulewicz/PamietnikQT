#ifndef PAMIETNIK_H
#define PAMIETNIK_H

#include <QMainWindow>
#include <vector>
#include <algorithm>
#include <QDebug>
#include "qtextedit.h"
#include "wpis.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Pamietnik; }
QT_END_NAMESPACE

class Pamietnik : public QMainWindow
{
    Q_OBJECT

public:
    Pamietnik(QWidget *parent = nullptr);
    ~Pamietnik();
    void fillListaWpisow();
    void initVectorWpisow();
    void initCurrentWpis();
    QString generateDelimiter();
    void addWpisAndSetupFont(QTextEdit &textEdit, int index);
    void printLackOfWpis(QTextEdit &textEdit);
    bool checkDuplicatedWpis(Wpis &wpis);


private slots:

    void on_addWpisButton_clicked();

    void on_previousWpisPushButton_clicked();

    void on_nextWpispPushButton_clicked();

private:
    Ui::Pamietnik *ui;
    std::vector<Wpis> vectorWpisow;
    int currentWpis;


};
#endif // PAMIETNIK_H
