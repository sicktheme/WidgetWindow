#include "icons.h"
#include <QMenu>
#include <QMenuBar>

Icons::Icons(QWidget *parent) : QMainWindow(parent)
{
    QPixmap newicon("D:\\icons\\new.png");
    QPixmap openicon("D:\\icons\\open.png");
    QPixmap quiticon("D:\\icons\\quit.png");

    QAction *newic = new QAction(newicon, "&New", this);
    QAction *openic = new QAction(openicon, "&Open", this);
    QAction *quitic = new QAction(quiticon, "&Quit", this);

    quitic->setShortcut(tr("ALT+Q"));

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(newic);
    file->addAction(openic);
    file->addSeparator();
    file->addAction(quitic);

    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

    connect(quitic, &QAction::triggered, qApp,&QApplication::quit);
}
