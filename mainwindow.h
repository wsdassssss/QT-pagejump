#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void mysignal();
private slots:
    void on_btn_exit_clicked();
protected:
    virtual void closeEvent(QCloseEvent *event);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
