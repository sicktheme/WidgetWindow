#include "skelet.h"

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);

    Skelet window;

    window.resize(350,250);
    window.setWindowTitle("Application Skelet");
    window.show();

    return a.exec();
}
