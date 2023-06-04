#include "toolbar.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>

ToolBar::ToolBar(QWidget *parent) : QMainWindow(parent)
{
    QPixmap newicon("D:\\icons\\new.png");
    QPixmap openicon("D:\\icons\\open.png");
    QPixmap quiticon("D:\\icons\\quit.png");

    QToolBar *toolbar = addToolBar("ToolBar");

    toolbar->addAction(QIcon(newicon), "New File");
    toolbar->addAction(QIcon(openicon), "Open File");
    toolbar->addSeparator();
    QAction *quit = toolbar->addAction(QIcon(quiticon), "Quit");

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}
