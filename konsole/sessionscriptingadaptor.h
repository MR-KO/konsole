/*
 * This file was generated by dbusidl2cpp version 0.5
 * when processing input file org.kde.konsole.Session.Scripting.xml
 *
 * dbusidl2cpp is Copyright (C) 2006 Trolltech AS. All rights reserved.
 *
 * This is an auto-generated file.
 */

#ifndef SESSIONSCRIPTINGADAPTOR_H_115611150842733
#define SESSIONSCRIPTINGADAPTOR_H_115611150842733

#include <QtCore/QObject>
#include <dbus/qdbus.h>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface org.kde.konsole.Session.Scripting
 */
class SessionScriptingAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.konsole.Session.Scripting")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.konsole.Session.Scripting\" >\n"
"    <method name=\"feedSession\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"text\" />\n"
"    </method>\n"
"    <method name=\"sendSession\" >\n"
"      <arg direction=\"in\" type=\"s\" name=\"text\" />\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    SessionScriptingAdaptor(QObject *parent);
    virtual ~SessionScriptingAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void feedSession(const QString &text);
    void sendSession(const QString &text);
Q_SIGNALS: // SIGNALS
};

#endif
