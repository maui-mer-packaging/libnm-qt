/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p nm-device-wifiinterface /home/jgrulich/projects/libnm-qt/dbus/introspection/nm-device-wifi.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NETWORKMANAGERQT_DEVICE_WIFIINTERFACE_H
#define NETWORKMANAGERQT_DEVICE_WIFIINTERFACE_H

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
 * Proxy class for interface org.freedesktop.NetworkManager.Device.Wireless
 */
class OrgFreedesktopNetworkManagerDeviceWirelessInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.NetworkManager.Device.Wireless"; }

public:
    OrgFreedesktopNetworkManagerDeviceWirelessInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopNetworkManagerDeviceWirelessInterface();

    Q_PROPERTY(QDBusObjectPath ActiveAccessPoint READ activeAccessPoint)
    inline QDBusObjectPath activeAccessPoint() const
    { return qvariant_cast< QDBusObjectPath >(property("ActiveAccessPoint")); }

    Q_PROPERTY(uint Bitrate READ bitrate)
    inline uint bitrate() const
    { return qvariant_cast< uint >(property("Bitrate")); }

    Q_PROPERTY(QString HwAddress READ hwAddress)
    inline QString hwAddress() const
    { return qvariant_cast< QString >(property("HwAddress")); }

    Q_PROPERTY(uint Mode READ mode)
    inline uint mode() const
    { return qvariant_cast< uint >(property("Mode")); }

    Q_PROPERTY(QString PermHwAddress READ permHwAddress)
    inline QString permHwAddress() const
    { return qvariant_cast< QString >(property("PermHwAddress")); }

    Q_PROPERTY(uint WirelessCapabilities READ wirelessCapabilities)
    inline uint wirelessCapabilities() const
    { return qvariant_cast< uint >(property("WirelessCapabilities")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QList<QDBusObjectPath> > GetAccessPoints()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetAccessPoints"), argumentList);
    }

    inline QDBusPendingReply<> RequestScan(const QVariantMap &options)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(options);
        return asyncCallWithArgumentList(QLatin1String("RequestScan"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void AccessPointAdded(const QDBusObjectPath &access_point);
    void AccessPointRemoved(const QDBusObjectPath &access_point);
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
