#include "home.h"
#include "treegeneration.h"


int main(int argc, char *argv[])
{
    // Qt Main Event Loop
    QApplication app(argc, argv);
    Home Window;
    Window.show();
    return app.exec();
}
