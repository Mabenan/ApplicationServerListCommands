#include "ListCommandPlugin.h"
#include "listcommandscommand.h"
#include <QDebug>

ListCommandPlugin::ListCommandPlugin(QObject *parent)
    : ApplicationServerPluginInterface(parent)
{
}

void ListCommandPlugin::init(ApplicationServerInterface *app)
{
    app->registerCommand(new ListCommandsCommand(this));
}

