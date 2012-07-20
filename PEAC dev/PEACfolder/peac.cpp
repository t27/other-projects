#include "peac.h"
#include "ui_peac.h"

PEAC::PEAC(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PEAC)
{
    ui->setupUi(this);
}

void PEAC:: openanswerfile()
{
    name= QFileDialog::getOpenFileName (this,"Browse Files","~/Desktop",("PEAC File (*.peac)"));
    preload();

   // ui->textEdit_2->append(list[0]);
    checkNA();
}
void PEAC:: checkNA()
{
    QString na;
    for(int i=0;i<list.size();i++)
    {
        if(list[i]=="na")
            na.append(QString::number(i+1)+",");
    }
    ui->label_4->setText(na);
}

void PEAC:: preload()
{
    QFile textFile(name);
    textFile.open(QIODevice::ReadOnly);
    QTextStream textStream(&textFile);
    QString line;

    line=textStream.readAll();
    list=line.split("\n");
}

PEAC::~PEAC()
{
    delete ui;
}




void PEAC::on_pushButton_clicked()
{

    QString ans;

    ans=ui->textEdit_2->toPlainText();

    int qno=ui->spinBox->value();
    QString riteans=list[qno-1];
    QMessageBox msgBox1;
    if(strcmp(riteans.toUtf8(),ans.toUtf8())==0)
        msgBox1.setText("True");
    else
        msgBox1.setText("False");
    msgBox1.exec();
}

void PEAC::on_pushButton_2_clicked()
{
    openanswerfile();
}

void PEAC::on_pushButton_3_clicked()
{
    QMessageBox msgBox;
    msgBox.about(this,"About PEAC","<p>Made By: two7dev</p>\n<p>This is for serious offline coding.</p>\n<p>If u just want answers, dont make a script for this,</p>\n<p> just <a href='http://bit.ly/LrPx68'>google</a> it</p>\n<p>For bugs, <a href='mailto:two7dev@gmail.com'>Contact Here</a></p>");

    //msgBox.exec();
}
