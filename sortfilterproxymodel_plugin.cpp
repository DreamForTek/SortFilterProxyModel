#include "sortfilterproxymodel_plugin.h"

#include <qqmlengine.h>

#include <sorters/expressionsorter.h>
#include <sorters/filtersorter.h>
#include <sorters/rolesorter.h>
#include <sorters/rolesorter.h>
#include <sorters/sorter.h>
#include <sorters/stringsorter.h>

#include <filters/alloffilter.h>
#include <filters/anyoffilter.h>
#include <filters/expressionfilter.h>
#include <filters/indexfilter.h>
#include <filters/rangefilter.h>
#include <filters/regexpfilter.h>
#include <filters/valuefilter.h>

#include <proxyroles/expressionrole.h>
#include <proxyroles/filterrole.h>
#include <proxyroles/joinrole.h>
#include <proxyroles/proxyrole.h>
#include <proxyroles/regexprole.h>
#include <proxyroles/switchrole.h>

SortFilterProxyModelPlugin::SortFilterProxyModelPlugin(QObject *parent)
    : QQmlExtensionPlugin{parent}
{

}



void SortFilterProxyModelPlugin::registerTypes(const char *uri)
{


    qmlRegisterUncreatableType<qqsfpm::Sorter>(uri, 1,0, "Sorter", "Sorter is an abstract class");
    qmlRegisterType<qqsfpm::RoleSorter>(uri, 1, 0, "RoleSorter");
    qmlRegisterType<qqsfpm::StringSorter>(uri, 1, 0, "StringSorter");
    qmlRegisterType<qqsfpm::FilterSorter>(uri, 1, 0, "FilterSorter");
    qmlRegisterType<qqsfpm::ExpressionSorter>(uri, 1, 0, "ExpressionSorter");

    qmlRegisterUncreatableType<qqsfpm::Filter>(uri, 1, 0, "Filter", "Filter is an abstract class");
    qmlRegisterType<qqsfpm::ValueFilter>(uri, 1, 0, "ValueFilter");

    qmlRegisterType<qqsfpm::IndexFilter>(uri, 1, 0, "IndexFilter");
    qmlRegisterType<qqsfpm::RegExpFilter>(uri, 1, 0, "RegExpFilter");
    qmlRegisterType<qqsfpm::RangeFilter>(uri, 1, 0, "RangeFilter");
    qmlRegisterType<qqsfpm::ExpressionFilter>(uri, 1, 0, "ExpressionFilter");
    qmlRegisterType<qqsfpm::AnyOfFilter>(uri, 1, 0, "AnyOf");
    qmlRegisterType<qqsfpm::AllOfFilter>(uri, 1, 0, "AllOf");

    qmlRegisterUncreatableType<qqsfpm::ProxyRole>(uri, 1, 0, "ProxyRole", "ProxyRole is an abstract class");
    qmlRegisterType<qqsfpm::JoinRole>(uri, 1, 0, "JoinRole");
    qmlRegisterType<qqsfpm::SwitchRole>(uri, 1, 0, "SwitchRole");
    qmlRegisterType<qqsfpm::ExpressionRole>(uri, 1, 0, "ExpressionRole");
    qmlRegisterType<qqsfpm::RegExpRole>(uri, 1, 0, "RegExpRole");
    qmlRegisterType<qqsfpm::FilterRole>(uri, 1, 0, "FilterRole");

}

void SortFilterProxyModelPlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{


    engine->addImportPath("qrc:///");



}

