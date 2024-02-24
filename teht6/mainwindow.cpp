#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    num1 = ui->num1;
    num2 = ui->num2;
    calcResult = ui->calcResult;
    N0 = ui->N0;
    N1 = ui->N1;
    N2 = ui->N2;
    N3 = ui->N3;
    N4 = ui->N4;
    N5 = ui->N5;
    N6 = ui->N6;
    N7 = ui->N7;
    N8 = ui->N8;
    N9 = ui->N9;
    add = ui->add;
    sub = ui->sub;
    mul = ui->mul;
    div = ui->div;
    clear = ui->clear;
    enter = ui->enter;

    state = 1;

    connect(N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(add, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(sub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler() {
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString buttonText = clickedButton->text();

    if (state == 1) {
        number1.append(buttonText);
        num1->setText(number1);
    } else if (state == 2) {
        number2.append(buttonText);
        num2->setText(number2);
    }
}

void MainWindow::addSubMulDivClickHandler() {
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString buttonText = clickedButton->text();

    if (buttonText == "+")
        operand = 0;
    else if (buttonText == "-")
        operand = 1;
    else if (buttonText == "*")
        operand = 2;
    else if (buttonText == "/")
        operand = 3;

    state = 2;
}

void MainWindow::resetLineEdits() {
    num1->clear();
    num2->clear();
    calcResult->clear();
    number1.clear();
    number2.clear();
}


void MainWindow::clearAndEnterClickHandler() {
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString buttonText = clickedButton->text();

    if (buttonText == "Clear") {
        resetLineEdits();
        state = 1;
    } else if (buttonText == "Enter") {
        float num1Float = number1.toFloat();
        float num2Float = number2.toFloat();

        if (operand == 3 && num2Float == 0) {
            calcResult->setText("Virhe!");
            return;
        }

        switch (operand) {
        case 0: result = num1Float + num2Float; break;
        case 1: result = num1Float - num2Float; break;
        case 2: result = num1Float * num2Float; break;
        case 3: result = num1Float / num2Float; break;
        default: break;
        }

        calcResult->setText(QString::number(result));
        state = 1;
    }
}
