#ifndef SORTFILTERPROXYMODELPLUGIN_H
#define SORTFILTERPROXYMODELPLUGIN_H

#include <QQmlExtensionPlugin>

class SortFilterProxyModelPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:

    explicit SortFilterProxyModelPlugin(QObject *parent = nullptr);

    void registerTypes(const char *uri) override;
    virtual void initializeEngine(QQmlEngine *engine, const char *uri) override;

};

#endif // SORTFILTERPROXYMODELPLUGIN_H
