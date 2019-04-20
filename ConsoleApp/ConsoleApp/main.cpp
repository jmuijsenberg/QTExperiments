#include <QCoreApplication>
#include <QTimer>
#include <consoleaction.h>

// Requires deploy of  libgcc_s_seh-1.dll, libstdc++-6.dll, libwinpthread-1.dll,  Qt5Core.dll from C:\Qt\5.12.2\mingw73_64\bin

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    ConsoleAction action;

    // Quit application when action finished
    QObject::connect(&action, SIGNAL(finished()), &app, SLOT(quit()));

    // Run action from event loop
    QTimer::singleShot(0, &action, SLOT(doAction()));

    return app.exec();
}
