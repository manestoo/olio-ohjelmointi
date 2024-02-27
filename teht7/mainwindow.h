#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_quick_mode_clicked();
    void on_long_mode_clicked();
    void on_start_game_clicked();
    void updateProgressBar();
    void on_switch_player_clicked();

    void on_switch_player_2_clicked();

    void on_stop_game_clicked();

private:
    Ui::MainWindow *ui;
    short gametime1;
    short gametime2;
    QTimer *objectTimer;
    int x = 1;
};
#endif // MAINWINDOW_H
