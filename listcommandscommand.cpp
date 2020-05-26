#include "listcommandscommand.h"
#include <QDebug>
#include <QtGlobal>

ListCommandsCommand::ListCommandsCommand(QObject *parent)
    : CommandInterface(parent) {}

QString ListCommandsCommand::getName() const { return QStringLiteral("list"); }

void ListCommandsCommand::execute(ApplicationServerInterface *app) {
  qInfo() << "The following commands are registered:";
  Q_FOREACH (const QString &command, app->GetCommands()) { qInfo() << command; }
}
