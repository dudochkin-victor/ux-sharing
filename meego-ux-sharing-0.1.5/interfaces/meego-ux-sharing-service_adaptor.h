/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -i meegouxsharingdbustypes.h -a ../interfaces/meego-ux-sharing-service_adaptor.h:../interfaces/meego-ux-sharing-service_adaptor.cpp ../interfaces/meego-ux-sharing-service.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef MEEGO_UX_SHARING_SERVICE_ADAPTOR_H_1367652591
#define MEEGO_UX_SHARING_SERVICE_ADAPTOR_H_1367652591

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "meegouxsharingdbustypes.h"
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.meego.ux.sharing.service
 */
class ServiceAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.meego.ux.sharing.service")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.meego.ux.sharing.service\">\n"
"    <doc:doc>\n"
"      <doc:summary>Service interface.</doc:summary>\n"
"    </doc:doc>\n"
"    <method name=\"GetServiceName\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"servicename\">\n"
"        <doc:doc>\n"
"          <doc:summary>The service name</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <method name=\"GetDisplayName\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"displayname\">\n"
"        <doc:doc>\n"
"          <doc:summary>The localized service display name</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <method name=\"GetIconPath\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"path\"/>\n"
"    </method>\n"
"    <method name=\"GetServiceDesc\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"desc\"/>\n"
"    </method>\n"
"    <method name=\"GetServiceType\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"servicetype\">\n"
"        <doc:doc>\n"
"          <doc:summary>The service type - *NOT* to be confused with the sharing type! This is used for grouping in context menus/lists.</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <method name=\"CanShareType\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"sharetype\">\n"
"        <doc:doc>\n"
"          <doc:summary>The share type in question</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"      <arg direction=\"out\" type=\"b\" name=\"canshare\">\n"
"        <doc:doc>\n"
"          <doc:summary>Whether the service supports the share type specified</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <method name=\"GetServiceAvailable\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"avail\">\n"
"        <doc:doc>\n"
"          <doc:summary>Whether the service is currently available</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <method name=\"GetCredsState\">\n"
"      <arg direction=\"out\" type=\"u\" name=\"state\">\n"
"        <doc:doc>\n"
"          <doc:summary>If applicable, the state of credentials. Valid values are 0 (Valid), 1 (Invalid), and 2 (Unknown). If this is not applicable for your plugin, it is expected to return Valid.</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <method name=\"GetServiceStateText\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"text\">\n"
"        <doc:doc>\n"
"          <doc:summary>A localized, descriptive text of the current service state.</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <method name=\"GetUIName\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"widgettype\">\n"
"        <doc:doc>\n"
"          <doc:summary>The widget set being used. Right now, only QML custom UI widgets are supported.</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"      <arg direction=\"in\" type=\"s\" name=\"platform\">\n"
"        <doc:doc>\n"
"          <doc:summary>The platform this is running on - this is used for UI differentiation between platforms. If you only have 1 UI, ignore this value.</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"      <arg direction=\"in\" type=\"s\" name=\"product\">\n"
"        <doc:doc>\n"
"          <doc:summary>The product this is running on - this is used for UI differentiation between products. If you only have 1 UI, ignore this value</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"      <arg direction=\"in\" type=\"s\" name=\"sharetype\">\n"
"        <doc:doc>\n"
"          <doc:summary>The type of sharing being done. Same valid values as the CanShareType::sharetype argument. This allows for custom UI widgets on a per-service, per-datatype basis</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"      <arg direction=\"in\" type=\"u\" name=\"sharecount\">\n"
"        <doc:doc>\n"
"          <doc:summary>The number of items that the user is trying to share. This allows for custom UI widgets/flows based on item quantity - typical usage is just varying between single/multiple item UIs, but with actualy quantity being passed, things can get fancier</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"      <arg direction=\"out\" type=\"s\" name=\"uiname\">\n"
"        <doc:doc>\n"
"          <doc:summary>The identifier for the requested UI widget/element name</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <method name=\"GetSettingsURI\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"platform\">\n"
"        <doc:doc>\n"
"          <doc:summary>A platform identifier that the plugin can use to decide how its settings should be invoked. If you only have 1 settings UI, you can ignore this value</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"      <arg direction=\"in\" type=\"s\" name=\"product\">\n"
"        <doc:doc>\n"
"          <doc:summary>A product identifier that the plugin can use to decide how its settings should be invoked. If you only have 1 settings UI, you can ignore this value</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"      <arg direction=\"out\" type=\"s\" name=\"settingsuri\">\n"
"        <doc:doc>\n"
"          <doc:summary>The URI needed for invoking the settings URI for this service on this platform - this URI will be launched via exec, so it can be an executable w/ arguments, or a dbus-send command, etc.</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </method>\n"
"    <signal name=\"ServiceChanged\">\n"
"      <doc:doc>\n"
"        <doc:summary>Sent if *something* about the service changes (Availability, Creds State, Type of sharing supported, etc.). It's up to the client to figure out what changed and handle accordingly</doc:summary>\n"
"      </doc:doc>\n"
"      <arg direction=\"out\" type=\"s\" name=\"service\">\n"
"        <doc:doc>\n"
"          <doc:summary>The name of the service that is sending the signal</doc:summary>\n"
"        </doc:doc>\n"
"      </arg>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    ServiceAdaptor(QObject *parent);
    virtual ~ServiceAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    bool CanShareType(const QString &sharetype);
    uint GetCredsState();
    QString GetDisplayName();
    QString GetIconPath();
    bool GetServiceAvailable();
    QString GetServiceDesc();
    QString GetServiceName();
    QString GetServiceStateText();
    QString GetServiceType();
    QString GetSettingsURI(const QString &platform, const QString &product);
    QString GetUIName(const QString &widgettype, const QString &platform, const QString &product, const QString &sharetype, uint sharecount);
Q_SIGNALS: // SIGNALS
    void ServiceChanged(const QString &service);
};

#endif
