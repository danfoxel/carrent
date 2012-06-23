/****************************************************************************
** Meta object code from reading C++ file 'newclient.h'
**
** Created: Sun 24. Jun 00:44:56 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/newclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      21,   10,   10,   10, 0x08,
      42,   31,   10,   10, 0x08,
      68,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newClient[] = {
    "newClient\0\0nextTab()\0addData()\0"
    "row,column\0doubleClickOnCar(int,int)\0"
    "acceptData()\0"
};

void newClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        newClient *_t = static_cast<newClient *>(_o);
        switch (_id) {
        case 0: _t->nextTab(); break;
        case 1: _t->addData(); break;
        case 2: _t->doubleClickOnCar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->acceptData(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData newClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject newClient::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_newClient,
      qt_meta_data_newClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newClient))
        return static_cast<void*>(const_cast< newClient*>(this));
    return QDialog::qt_metacast(_clname);
}

int newClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
