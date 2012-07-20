/****************************************************************************
** Meta object code from reading C++ file 'peac.h'
**
** Created: Wed Jun 27 14:42:11 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PEAC/peac.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peac.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PEAC[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      30,    5,    5,    5, 0x08,
      47,    5,    5,    5, 0x08,
      57,    5,    5,    5, 0x08,
      83,    5,    5,    5, 0x08,
      93,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PEAC[] = {
    "PEAC\0\0on_pushButton_clicked()\0"
    "openanswerfile()\0preload()\0"
    "on_pushButton_2_clicked()\0checkNA()\0"
    "on_pushButton_3_clicked()\0"
};

void PEAC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PEAC *_t = static_cast<PEAC *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->openanswerfile(); break;
        case 2: _t->preload(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->checkNA(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PEAC::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PEAC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PEAC,
      qt_meta_data_PEAC, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PEAC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PEAC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PEAC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PEAC))
        return static_cast<void*>(const_cast< PEAC*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PEAC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
