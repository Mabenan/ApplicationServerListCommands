#ifndef LISTCOMMANDSCOMMAND_H
#define LISTCOMMANDSCOMMAND_H

#include <ApplicationServerInterface>

class ListCommandsCommand : public CommandInterface
{
    Q_OBJECT

public:
    explicit ListCommandsCommand(QObject *parent = nullptr);

private:
    // CommandInterface interface
public:
    QString getName() const;
    void execute(ApplicationServerInterface *app);
};

#endif // LISTCOMMANDSCOMMAND_H
