#include "skelet.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>

Skelet::Skelet(QWidget *parent) : QMainWindow(parent)
{
    QPixmap newicon("D:\\icons\\new.png");
    QPixmap openicon("D:\\icons\\open.png");
    QPixmap quiticon("D:\\icons\\quit.png");

    QAction *quit = new QAction("&Quit", this);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);

    connect(quit,&QAction::triggered, qApp, &QApplication::quit);

    QToolBar *toolbar = addToolBar("ToolBar");
    toolbar->addAction(QIcon(newicon), "New FIle");
    toolbar->addAction(QIcon(openicon), "New File");
    toolbar->addSeparator();

    QAction *quit2 = toolbar->addAction(QIcon(quiticon), "Quit");
    connect(quit2, &QAction::triggered, qApp, &QApplication::quit);

    QTextEdit *edit = new QTextEdit(this);
    setCentralWidget(edit);

    statusBar()->showMessage("Ready");
}
