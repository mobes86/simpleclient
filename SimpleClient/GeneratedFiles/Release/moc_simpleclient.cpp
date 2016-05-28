/****************************************************************************
** Meta object code from reading C++ file 'simpleclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../simpleclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simpleclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SimpleClient_t {
    QByteArrayData data[11];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleClient_t qt_meta_stringdata_SimpleClient = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SimpleClient"
QT_MOC_LITERAL(1, 13, 6), // "upload"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "openFile"
QT_MOC_LITERAL(4, 30, 7), // "connect"
QT_MOC_LITERAL(5, 38, 10), // "disconnect"
QT_MOC_LITERAL(6, 49, 15), // "clientConnected"
QT_MOC_LITERAL(7, 65, 18), // "clientDisconnected"
QT_MOC_LITERAL(8, 84, 17), // "progressBarUpdate"
QT_MOC_LITERAL(9, 102, 6), // "size_t"
QT_MOC_LITERAL(10, 109, 4) // "perc"

    },
    "SimpleClient\0upload\0\0openFile\0connect\0"
    "disconnect\0clientConnected\0"
    "clientDisconnected\0progressBarUpdate\0"
    "size_t\0perc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void SimpleClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimpleClient *_t = static_cast<SimpleClient *>(_o);
        switch (_id) {
        case 0: _t->upload(); break;
        case 1: _t->openFile(); break;
        case 2: _t->connect(); break;
        case 3: _t->disconnect(); break;
        case 4: _t->clientConnected(); break;
        case 5: _t->clientDisconnected(); break;
        case 6: _t->progressBarUpdate((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SimpleClient::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SimpleClient.data,
      qt_meta_data_SimpleClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SimpleClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleClient.stringdata))
        return static_cast<void*>(const_cast< SimpleClient*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SimpleClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
