#ifndef PEAC_H
#define PEAC_H

#include <QMainWindow>
#include <QStringList>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QFileInfo>
#include <QDebug>
#include <QCryptographicHash>
#include <QMessageBox>
namespace Ui {
class PEAC;
}

class PEAC : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit PEAC(QWidget *parent = 0);
    ~PEAC();
    
private slots:
    void on_pushButton_clicked();
    void openanswerfile();
    void preload();
    void on_pushButton_2_clicked();
    void checkNA();

    void on_pushButton_3_clicked();

private:
    Ui::PEAC *ui;
    QStringList list;
    QString name;
};

#endif // PEAC_H
