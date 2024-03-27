#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_fluoro_toggled(bool checked);
    void on_timerbutton_toggled(bool cheked);
    void updateTimer();

    void on_xraybutton_toggled(bool checked);

    void on_pushButton_11_toggled(bool checked);

    void on_overheatingbutton_toggled(bool checked);

    void on_angiobutton_toggled(bool checked);
    void on_label_8_windowIconChanged(const QIcon &icon);

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    int timerRemaining;
    bool timerRunning;
};
#endif // MAINWINDOW_H
