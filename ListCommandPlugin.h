#ifndef ListCommandPlugin_H
#define ListCommandPlugin_H

#include <ApplicationServerInterface>
#include <QtPlugin>
class ListCommandPlugin : public ApplicationServerPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID ApplicationServerPluginInterface_iid FILE "ApplicationServerListCommands.json")
    Q_INTERFACES(ApplicationServerPluginInterface)

public:
    explicit ListCommandPlugin(QObject *parent = nullptr);

private:
    // CommandInterface interface
public:
    void init(ApplicationServerInterface *app);
};

#endif // ListCommandPlugin_H
