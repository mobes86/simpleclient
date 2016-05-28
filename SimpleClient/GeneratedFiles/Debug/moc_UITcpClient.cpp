/****************************************************************************
** Meta object code from reading C++ file 'UITcpClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UITcpClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UITcpClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UITcpClient_t {
    QByteArrayData data[12];
    char stringdata[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UITcpClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UITcpClient_t qt_meta_stringdata_UITcpClient = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UITcpClient"
QT_MOC_LITERAL(1, 12, 21), // "clientWasConnectedFwd"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 24), // "clientWasDisconnectedFwd"
QT_MOC_LITERAL(4, 60, 20), // "fileProgressFinished"
QT_MOC_LITERAL(5, 81, 6), // "size_t"
QT_MOC_LITERAL(6, 88, 4), // "perc"
QT_MOC_LITERAL(7, 93, 15), // "socketException"
QT_MOC_LITERAL(8, 109, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 138, 11), // "socketError"
QT_MOC_LITERAL(10, 150, 18), // "clientWasConnected"
QT_MOC_LITERAL(11, 169, 21) // "clientWasDisconnected"

    },
    "UITcpClient\0clientWasConnectedFwd\0\0"
    "clientWasDisconnectedFwd\0fileProgressFinished\0"
    "size_t\0perc\0socketException\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "clientWasConnected\0clientWasDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UITcpClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   49,    2, 0x0a /* Public */,
      10,    0,   52,    2, 0x0a /* Public */,
      11,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UITcpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UITcpClient *_t = static_cast<UITcpClient *>(_o);
        switch (_id) {
        case 0: _t->clientWasConnectedFwd(); break;
        case 1: _t->clientWasDisconnectedFwd(); break;
        case 2: _t->fileProgressFinished((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 3: _t->socketException((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->clientWasConnected(); break;
        case 5: _t->clientWasDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UITcpClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UITcpClient::clientWasConnectedFwd)) {
                *result = 0;
            }
        }
        {
            typedef void (UITcpClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UITcpClient::clientWasDisconnectedFwd)) {
                *result = 1;
            }
        }
        {
            typedef void (UITcpClient::*_t)(size_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UITcpClient::fileProgressFinished)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject UITcpClient::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UITcpClient.data,
      qt_meta_data_UITcpClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UITcpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UITcpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UITcpClient.stringdata))
        return static_cast<void*>(const_cast< UITcpClient*>(this));
    return QDialog::qt_metacast(_clname);
}

int UITcpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void UITcpClient::clientWasConnectedFwd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UITcpClient::clientWasDisconnectedFwd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void UITcpClient::fileProgressFinished(size_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
