#ifndef ADDWPISFORM_H
#define ADDWPISFORM_H

#include <QDialog>

namespace Ui {
class addWpisForm;
}

class addWpisForm : public QDialog
{
    Q_OBJECT

public:
    explicit addWpisForm(QWidget *parent = nullptr);
    ~addWpisForm();
    QString getText() const;
    QDateTime getDateTime() const;


private slots:


private:
    Ui::addWpisForm *ui;
};

#endif // ADDWPISFORM_H
