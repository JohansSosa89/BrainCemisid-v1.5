#ifndef DIALOGCONSULTNEURON_H
#define DIALOGCONSULTNEURON_H
#include<QDialog>
#include<QPushButton>
#include<QRegExpValidator>
#include"Class/neuralNetwork.h"
#include<iostream>

namespace Ui{
class DialogConsultNeuron;
}

class DialogConsultNeuron : public QDialog{
    Q_OBJECT

public slots:
    void changeSight();
    void changeHearing();
    void checkText();

public:
    explicit DialogConsultNeuron(const unsigned char *ptrHearing, const unsigned char *ptrSight, QWidget *parent = 0);
    senses radioButtonActive();
    int returnIdNeuron();
    void setLimits(QString text);
    void setRegularExp(unsigned char number);
    ~DialogConsultNeuron();
    unsigned char *ptrNeuron;

private slots:
   /* void on_buttonBox_clicked(QAbstractButton *button);*/

private:
    Ui::DialogConsultNeuron *ui;
    QString textLimits(const unsigned char number);
};
#endif // DIALOGCONSULTNEURON_H
