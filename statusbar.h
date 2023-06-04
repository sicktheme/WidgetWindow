#pragma once

#include <QMainWindow>
#include <QApplication>

class StatusBar : public QMainWindow
{
    Q_OBJECT

public:
    StatusBar(QWidget *parent = 0);

private slots:
    void toggleStatusBar();

private:
    QAction *viewstatus;
};
