#ifndef PAMIETNIK_H
#define PAMIETNIK_H

#include <QMainWindow>
#include <vector>
#include <algorithm>
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
    void addWpis(Wpis &wpis);
    void fillListaWpisow();
    bool checkDuplicatedWpis(Wpis &wpis);


private slots:

    void on_addWpisButton_clicked();

private:
    Ui::Pamietnik *ui;
    std::vector<Wpis> vectorWpisow;


};
#endif // PAMIETNIK_H
