#include "wpis.h"

Wpis::Wpis()
{

}

Wpis::Wpis(QString content, QDateTime date)
{
    this->content = content;
    this->date = date;
}

bool Wpis::operator==(const Wpis& wpis) const
{
    if(this->date == wpis.date)
        return true;
    else
        return false;
}

bool Wpis::operator!=(Wpis& wpis)
{
    return !(this == &wpis);
}

bool Wpis::operator<(Wpis &wpis)
{
    if(this->date > wpis.date)
        return true;
    else
        return false;
}

QDateTime Wpis::getDate() const
{
    return date;
}

QString Wpis::getContent() const
{
    return content;
}

QString Wpis::generateWpis()
{
    return(this->date.toString() + " " + this->content);
}

