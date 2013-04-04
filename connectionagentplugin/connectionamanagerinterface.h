/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp ../connd/conn.xml -c ConnectionManagerInterface -p connectionamanagerinterface
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef CONNECTIONAMANAGERINTERFACE_H_1363759925
#define CONNECTIONAMANAGERINTERFACE_H_1363759925

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.jolla.Connectiond
 */
class ConnectionManagerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.jolla.Connectiond"; }

public:
    ConnectionManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ConnectionManagerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> connectToType(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("connectToType"), argumentList);
    }

    inline QDBusPendingReply<> sendConnectReply(const QString &in0, int in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("sendConnectReply"), argumentList);
    }

    inline QDBusPendingReply<> sendUserReply(const QVariantMap &input)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(input);
        return asyncCallWithArgumentList(QLatin1String("sendUserReply"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void connectionRequest();
    void connectionState(const QString &state, const QString &type);
    void errorReported(const QString &error);
    void requestBrowser(const QString &url);
    void userInputCanceled();
    void userInputRequested(const QString &service, const QVariantMap &fields);
    void wlanConfigurationNeeded();
};

namespace com {
  namespace jolla {
    typedef ::ConnectionManagerInterface Connectiond;
  }
}
#endif
