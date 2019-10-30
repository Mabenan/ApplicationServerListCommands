#include "listcommandscommand.h"
#include <QDebug>

ListCommandsCommand::ListCommandsCommand(QObject *parent)
    : CommandInterface(parent)
{
}

QString ListCommandsCommand::getName() const
{
    return "list";
}

void ListCommandsCommand::execute(ApplicationServerInterface *app)
{
    qInfo() << "The following commands are registered:";
    foreach(QString command, app->GetCommands()){
        qInfo() << command;
    }
}

