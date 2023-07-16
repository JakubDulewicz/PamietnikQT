#include "pamietnik.h"
#include "ui_pamietnik.h"

Pamietnik::Pamietnik(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pamietnik)
{
    ui->setupUi(this);
    ui->dataWpisuDateTime->setDateTime(QDateTime::currentDateTime());
    ui->listaWpisowTextEdit->setLineWrapMode(QTextEdit::NoWrap);
}

Pamietnik::~Pamietnik()
{
    delete ui;
}

void Pamietnik::addWpis(Wpis &wpis)
{
    vectorWpisow.push_back(wpis);
}

void Pamietnik::fillListaWpisow() // Do ANALIZY!!! // Podzielić na funkcje
{
    ui->listaWpisowTextEdit->clear();
    int width = (ui->listaWpisowTextEdit->size().width());
    QFontMetrics fontMetrics(ui->listaWpisowTextEdit->currentFont());
    int dashWidth = fontMetrics.horizontalAdvance("-");
    int size = (width/dashWidth) + 1;



    QString line = QString(size,'-');

    qDebug() << width;
    qDebug() << dashWidth;
    qDebug() << size;

    QTextCursor cursor(ui->listaWpisowTextEdit->textCursor());

    for (int i = 0; i < this->vectorWpisow.size(); i++) {
        QString dateText = this->vectorWpisow.at(i).getDate().toString();
        QString contentText = this->vectorWpisow.at(i).getContent();


        QTextCharFormat boldFormat;
        boldFormat.setFontWeight(QFont::Bold);

        QTextCharFormat normalFormat;
        normalFormat.setFontWeight(QFont::Normal);


        cursor.insertText(dateText, boldFormat);
        cursor.insertText("   ");
        cursor.insertText(contentText,normalFormat);
        cursor.insertText("\n");
        cursor.insertText(line);
        cursor.insertText("\n");
    }
}

void Pamietnik::fillListaWpisowAlterantaive()
{
    ui->listaWpisowTextEdit->clear();

}



bool Pamietnik::checkDuplicatedWpis(Wpis &wpis)
{
    for (int i = 0; i < vectorWpisow.size(); ++i) {
        if(this->vectorWpisow.at(i) == wpis){

            std::replace(this->vectorWpisow.begin(),this->vectorWpisow.end(),this->vectorWpisow.at(i),wpis);
            return true;
        }
    }
    return false;
}

void Pamietnik::on_addWpisButton_clicked()
{
    if(!(ui->trescWpisuTextEdit->toPlainText().isEmpty())){
        Wpis wpis(ui->trescWpisuTextEdit->toPlainText(),ui->dataWpisuDateTime->dateTime());
        if(!(this->checkDuplicatedWpis(wpis)))
        this->vectorWpisow.push_back(wpis);

       std::sort(this->vectorWpisow.begin(),this->vectorWpisow.end());
        this->fillListaWpisow();

    }

}

