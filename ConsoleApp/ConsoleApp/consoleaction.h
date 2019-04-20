#ifndef CONSOLEACTION_H
#define CONSOLEACTION_H

#include <QTCore>

class ConsoleAction : public QObject
{
    Q_OBJECT
public:
    ConsoleAction(QObject* parent = nullptr);

private slots:
    void doAction();

signals:
        void finished();
};

#endif // CONSOLEACTION_H
