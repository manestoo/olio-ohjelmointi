#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectTimer = new QTimer();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectTimer;
    objectTimer=nullptr;
}


void MainWindow::on_quick_mode_clicked()
{
    ui->label->setText("It's gaming time...");
    ui->progressBar->setMaximum(120);
    ui->progressBar_2->setMaximum(120);
    ui->progressBar->setValue(120);
    ui->progressBar_2->setValue(120);
    gametime1 = 120;     //120 sekunttia
    gametime2 = 120;
}


void MainWindow::on_long_mode_clicked()
{
    ui->label->setText("It's gaming time...");
    ui->progressBar->setMaximum(300);
    ui->progressBar_2->setMaximum(300);
    ui->progressBar->setValue(300);
    ui->progressBar_2->setValue(300);
    gametime1 = 300;    //5 minuuttia
    gametime2 = 300;
}


void MainWindow::on_start_game_clicked()
{
    ui->label->setText("Game is on");
    objectTimer->start(1000);
    connect(objectTimer, SIGNAL(timeout()), this, SLOT(updateProgressBar()));
}

void MainWindow::updateProgressBar()
{
    if(x == 1){
        gametime1 -= 1;
        ui->progressBar->setValue(gametime1);

        if(gametime1 <= 0) {
            ui->label->setText("Player 2 wins!");
            objectTimer->stop();
        }
    }
    else{
        gametime2 -= 1;
        ui->progressBar_2->setValue(gametime2);

        if(gametime2 <= 0) {
            ui->label->setText("Player 1 wins!");
            objectTimer->stop();
        }
    }

}


void MainWindow::on_switch_player_clicked()
{
    x = 2;
}


void MainWindow::on_switch_player_2_clicked()
{
    x = 1;
}


void MainWindow::on_stop_game_clicked()
{
    objectTimer->stop();
    ui->label->setText("Select playtime and press start game!");
    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
    x = 1;
    objectTimer = new QTimer();
}

