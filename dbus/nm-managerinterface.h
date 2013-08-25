/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p nm-managerinterface /home/jgrulich/projects/libnm-qt/dbus/introspection/nm-manager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NETWORKMANAGERQT_MANAGERINTERFACE_H
#define NETWORKMANAGERQT_MANAGERINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "generic-types.h"

/*
 * Proxy class for interface org.freedesktop.NetworkManager
 */
class OrgFreedesktopNetworkManagerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.NetworkManager"; }

public:
    OrgFreedesktopNetworkManagerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopNetworkManagerInterface();

    Q_PROPERTY(QList<QDBusObjectPath> ActiveConnections READ activeConnections)
    inline QList<QDBusObjectPath> activeConnections() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("ActiveConnections")); }

    Q_PROPERTY(bool NetworkingEnabled READ networkingEnabled)
    inline bool networkingEnabled() const
    { return qvariant_cast< bool >(property("NetworkingEnabled")); }

    Q_PROPERTY(uint State READ state)
    inline uint state() const
    { return qvariant_cast< uint >(property("State")); }

    Q_PROPERTY(QString Version READ version)
    inline QString version() const
    { return qvariant_cast< QString >(property("Version")); }

    Q_PROPERTY(bool WimaxEnabled READ wimaxEnabled WRITE setWimaxEnabled)
    inline bool wimaxEnabled() const
    { return qvariant_cast< bool >(property("WimaxEnabled")); }
    inline void setWimaxEnabled(bool value)
    { setProperty("WimaxEnabled", QVariant::fromValue(value)); }

    Q_PROPERTY(bool WimaxHardwareEnabled READ wimaxHardwareEnabled)
    inline bool wimaxHardwareEnabled() const
    { return qvariant_cast< bool >(property("WimaxHardwareEnabled")); }

    Q_PROPERTY(bool WirelessEnabled READ wirelessEnabled WRITE setWirelessEnabled)
    inline bool wirelessEnabled() const
    { return qvariant_cast< bool >(property("WirelessEnabled")); }
    inline void setWirelessEnabled(bool value)
    { setProperty("WirelessEnabled", QVariant::fromValue(value)); }

    Q_PROPERTY(bool WirelessHardwareEnabled READ wirelessHardwareEnabled)
    inline bool wirelessHardwareEnabled() const
    { return qvariant_cast< bool >(property("WirelessHardwareEnabled")); }

    Q_PROPERTY(bool WwanEnabled READ wwanEnabled WRITE setWwanEnabled)
    inline bool wwanEnabled() const
    { return qvariant_cast< bool >(property("WwanEnabled")); }
    inline void setWwanEnabled(bool value)
    { setProperty("WwanEnabled", QVariant::fromValue(value)); }

    Q_PROPERTY(bool WwanHardwareEnabled READ wwanHardwareEnabled)
    inline bool wwanHardwareEnabled() const
    { return qvariant_cast< bool >(property("WwanHardwareEnabled")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath> ActivateConnection(const QDBusObjectPath &connection, const QDBusObjectPath &device, const QDBusObjectPath &specific_object)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(connection) << QVariant::fromValue(device) << QVariant::fromValue(specific_object);
        return asyncCallWithArgumentList(QLatin1String("ActivateConnection"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath, QDBusObjectPath> AddAndActivateConnection(const NMVariantMapMap &connection, const QDBusObjectPath &device, const QDBusObjectPath &specific_object)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(connection) << QVariant::fromValue(device) << QVariant::fromValue(specific_object);
        return asyncCallWithArgumentList(QLatin1String("AddAndActivateConnection"), argumentList);
    }

    inline QDBusPendingReply<> DeactivateConnection(const QDBusObjectPath &active_connection)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(active_connection);
        return asyncCallWithArgumentList(QLatin1String("DeactivateConnection"), argumentList);
    }

    inline QDBusPendingReply<> Enable(bool enable)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(enable);
        return asyncCallWithArgumentList(QLatin1String("Enable"), argumentList);
    }

    inline QDBusPendingReply<QDBusObjectPath> GetDeviceByIpIface(const QString &iface)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(iface);
        return asyncCallWithArgumentList(QLatin1String("GetDeviceByIpIface"), argumentList);
    }

    inline QDBusPendingReply<QList<QDBusObjectPath> > GetDevices()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetDevices"), argumentList);
    }

    inline QDBusPendingReply<QString, QString> GetLogging()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetLogging"), argumentList);
    }

    inline QDBusPendingReply<NMStringMap> GetPermissions()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetPermissions"), argumentList);
    }

    inline QDBusPendingReply<> SetLogging(const QString &level, const QString &domains)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(level) << QVariant::fromValue(domains);
        return asyncCallWithArgumentList(QLatin1String("SetLogging"), argumentList);
    }

    inline QDBusPendingReply<> Sleep(bool sleep)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(sleep);
        return asyncCallWithArgumentList(QLatin1String("Sleep"), argumentList);
    }

    inline QDBusPendingReply<uint> state()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("state"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void CheckPermissions();
    void DeviceAdded(const QDBusObjectPath &device_path);
    void DeviceRemoved(const QDBusObjectPath &device_path);
    void PropertiesChanged(const QVariantMap &properties);
    void StateChanged(uint state);
};

#endif
