#ifndef LISTCOMMANDSCOMMAND_H
#define LISTCOMMANDSCOMMAND_H

#include <CommandInterface.h>

class ListCommandsCommand : public CommandInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID CommandInterface_iid FILE "ApplicationServerListCommands.json")
    Q_INTERFACES(CommandInterface)

public:
    explicit ListCommandsCommand(QObject *parent = nullptr);

private:
    // CommandInterface interface
public:
    QString getName() const;
    void execute(ApplicationServerInterface *app);
};

#endif // LISTCOMMANDSCOMMAND_H
