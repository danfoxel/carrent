/****************************************************************************
** Meta object code from reading C++ file 'carback.h'
**
** Created: Sun 24. Jun 00:44:58 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/carback.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'carback.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CarBack[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    9,    8,    8, 0x08,
      47,    8,    8,    8, 0x08,
      71,   60,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CarBack[] = {
    "CarBack\0\0arg1\0on_lineEdit_textChanged(QString)\0"
    "acceptData()\0row,column\0"
    "on_tableWidget_cellActivated(int,int)\0"
};

void CarBack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CarBack *_t = static_cast<CarBack *>(_o);
        switch (_id) {
        case 0: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->acceptData(); break;
        case 2: _t->on_tableWidget_cellActivated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CarBack::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CarBack::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CarBack,
      qt_meta_data_CarBack, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CarBack::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CarBack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CarBack::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CarBack))
        return static_cast<void*>(const_cast< CarBack*>(this));
    return QDialog::qt_metacast(_clname);
}

int CarBack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
