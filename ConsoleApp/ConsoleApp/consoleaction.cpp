#include "consoleaction.h"
#include <iostream>

ConsoleAction::ConsoleAction(QObject* parent)
{

}

void ConsoleAction::doAction()
{
    QString hello = "Hello World";
    std::cout << hello.toStdString() << std::endl;
    emit finished();
}
