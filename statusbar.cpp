#include "statusbar.h"
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>

StatusBar::StatusBar(QWidget *parent) : QMainWindow(parent)
{
    viewstatus = new QAction("&View statusbar", this);
    viewstatus->setCheckable(true);
    viewstatus->setChecked(true);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(viewstatus);

    statusBar();

    connect(viewstatus, &QAction::triggered, this, &StatusBar::toggleStatusBar);
}

void StatusBar::toggleStatusBar()
{
    if(viewstatus->isChecked())
    {
        statusBar()->show();
    }
    else
    {
        statusBar()->hide();
    }
}
