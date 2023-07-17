#ifndef WPIS_H
#define WPIS_H
#include <QDateTime>
#include <QString>

class Wpis
{
public:
    Wpis();
    Wpis(QString content, QDateTime date);
    bool operator==(const Wpis& wpis) const;
    bool operator!=(Wpis& wpis);
    bool operator<(Wpis& wpis);


    QDateTime getDate() const;
    QString getContent() const;
    QString generateWpis();

private:
    QString content;
    QDateTime date;


};

#endif // WPIS_H
