#include "pamietnik.h"
#include "ui_pamietnik.h"

Pamietnik::Pamietnik(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Pamietnik)
{
    ui->setupUi(this);

    ui->dataWpisuDateTime->setDateTime(QDateTime::currentDateTime());
    ui->listaWpisowTextEdit->setLineWrapMode(QTextEdit::NoWrap);

    //initVectorWpisow();
    initCurrentWpis();
    file.setFileName("Pamietnik.txt");
    //saveWpisyToFile();
    loadWpisyFromFile();
    printLackOfWpis(*ui->previousWpisTextEdit);
    addWpisAndSetupFont(*ui->currentWpisTextEdit,0);
    addWpisAndSetupFont(*ui->nextWpisTextEdit,1);
}

Pamietnik::~Pamietnik()
{
    delete ui;
}

void Pamietnik::loadWpisyFromFile()
{
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream inStream(&file);
        while (!inStream.atEnd())
        {
            QString line = inStream.readLine();
            QStringList fields = line.split("|");

            if (fields.size() >= 2)
            {
                QString dateText = fields[0].trimmed();
                QString contentText = fields[1].trimmed();

                QDateTime date = QDateTime::fromString(dateText, "dd.MM.yyyy hh:mm:ss");

                Wpis wpis(contentText, date);
                vectorWpisow.push_back(wpis);
            }
        }

    }
}
void Pamietnik::saveWpisyToFile()
{
    QFile file("Pamietnik.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream outStream(&file);

        for (const Wpis& wpis : vectorWpisow)
        {
            QString dateText = wpis.getDate().toString("dd.MM.yyyy hh:mm:ss");
            QString contentText = wpis.getContent();

            QString line = dateText + " | " + contentText;
            outStream << line << "\n";
        }

        file.close();
    }
}



void Pamietnik::fillListaWpisow() // Do ANALIZY!!!
{
    ui->listaWpisowTextEdit->clear();
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
        cursor.insertText(generateDelimiter());
        cursor.insertText("\n");
    }
}

void Pamietnik::initVectorWpisow()
{
    Wpis wpis("Test1",QDateTime::currentDateTime());
    Wpis wpis2("Test2",QDateTime(QDate(2011,4,9),QTime(17,2,3)));
    Wpis wpis3("Test3",QDateTime(QDate(2012,5,21),QTime(2,14,7)));
    Wpis wpis4("Test4",QDateTime(QDate(2013,6,2),QTime(3,14,9)));

    this->vectorWpisow.push_back(wpis);
    this->vectorWpisow.push_back(wpis2);
    this->vectorWpisow.push_back(wpis3);
    this->vectorWpisow.push_back(wpis4);

    std::sort(this->vectorWpisow.begin(),this->vectorWpisow.end());
    fillListaWpisow();
}

void Pamietnik::initCurrentWpis()
{
        this->currentWpis = 0;
}

QString Pamietnik::generateDelimiter()
{
    int width = (ui->listaWpisowTextEdit->size().width());
    QFontMetrics fontMetrics(ui->listaWpisowTextEdit->currentFont());
    int dashWidth = fontMetrics.horizontalAdvance("-");
    int size = (width/dashWidth) + 1;
    QString line = QString(size,'-');
    return line;
}

void Pamietnik::addWpisAndSetupFont(QTextEdit &textEdit, int index)
{
    textEdit.clear();
    QTextCursor cursor(textEdit.textCursor());

    QString dateText = this->vectorWpisow.at(index).getDate().toString();
    QString contentText = this->vectorWpisow.at(index).getContent();

    QTextCharFormat boldFormat;
    boldFormat.setFontWeight(QFont::Bold);

    QTextCharFormat normalFormat;
    normalFormat.setFontWeight(QFont::Normal);

    cursor.insertText(dateText, boldFormat);
    cursor.insertText("   ");
    cursor.insertText(contentText, normalFormat);
}

void Pamietnik::printLackOfWpis(QTextEdit &textEdit)
{
    textEdit.clear();
    QTextCursor cursor(textEdit.textCursor());

    //Dodać stylizownie czcionki

    cursor.insertText("Brak Wspomnienia!");
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


void Pamietnik::on_previousWpisPushButton_clicked()
{
    if (currentWpis > 0)
    {
        currentWpis--;
        if (currentWpis > 0)
            this->addWpisAndSetupFont(*ui->previousWpisTextEdit, currentWpis - 1);
        else
            this->printLackOfWpis(*ui->previousWpisTextEdit);

        this->addWpisAndSetupFont(*ui->currentWpisTextEdit, currentWpis);
        this->addWpisAndSetupFont(*ui->nextWpisTextEdit, currentWpis + 1);
    }
}


void Pamietnik::on_nextWpispPushButton_clicked()
{
    if(currentWpis < this->vectorWpisow.size() - 1){
        currentWpis++;
        this->addWpisAndSetupFont(*ui->previousWpisTextEdit,currentWpis-1);
        this->addWpisAndSetupFont(*ui->currentWpisTextEdit,currentWpis);
        if(currentWpis + 1 > this->vectorWpisow.size() - 1)
            this->printLackOfWpis(*ui->nextWpisTextEdit);
        else
            this->addWpisAndSetupFont(*ui->nextWpisTextEdit,currentWpis + 1);
    }
}

