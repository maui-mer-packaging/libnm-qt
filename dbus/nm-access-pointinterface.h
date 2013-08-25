/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p nm-access-pointinterface /home/jgrulich/projects/libnm-qt/dbus/introspection/nm-access-point.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NETWORKMANAGERQT_ACCESS_POINTINTERFACE_H
#define NETWORKMANAGERQT_ACCESS_POINTINTERFACE_H

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
 * Proxy class for interface org.freedesktop.NetworkManager.AccessPoint
 */
class OrgFreedesktopNetworkManagerAccessPointInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.NetworkManager.AccessPoint"; }

public:
    OrgFreedesktopNetworkManagerAccessPointInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopNetworkManagerAccessPointInterface();

    Q_PROPERTY(uint Flags READ flags)
    inline uint flags() const
    { return qvariant_cast< uint >(property("Flags")); }

    Q_PROPERTY(uint Frequency READ frequency)
    inline uint frequency() const
    { return qvariant_cast< uint >(property("Frequency")); }

    Q_PROPERTY(QString HwAddress READ hwAddress)
    inline QString hwAddress() const
    { return qvariant_cast< QString >(property("HwAddress")); }

    Q_PROPERTY(uint MaxBitrate READ maxBitrate)
    inline uint maxBitrate() const
    { return qvariant_cast< uint >(property("MaxBitrate")); }

    Q_PROPERTY(uint Mode READ mode)
    inline uint mode() const
    { return qvariant_cast< uint >(property("Mode")); }

    Q_PROPERTY(uint RsnFlags READ rsnFlags)
    inline uint rsnFlags() const
    { return qvariant_cast< uint >(property("RsnFlags")); }

    Q_PROPERTY(QByteArray Ssid READ ssid)
    inline QByteArray ssid() const
    { return qvariant_cast< QByteArray >(property("Ssid")); }

    Q_PROPERTY(uchar Strength READ strength)
    inline uchar strength() const
    { return qvariant_cast< uchar >(property("Strength")); }

    Q_PROPERTY(uint WpaFlags READ wpaFlags)
    inline uint wpaFlags() const
    { return qvariant_cast< uint >(property("WpaFlags")); }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
