/****************************************************************************
** Meta object code from reading C++ file 'add_project_window.h'
**
** Created: Thu Mar 17 19:31:36 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ER4/add_project_window.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_project_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddProjectWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      27,   17,   17,   17, 0x08,
      45,   34,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddProjectWindow[] = {
    "AddProjectWindow\0\0browse()\0find()\0"
    "row,column\0openFileOfItem(int,int)\0"
};

const QMetaObject AddProjectWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddProjectWindow,
      qt_meta_data_AddProjectWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddProjectWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddProjectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddProjectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddProjectWindow))
        return static_cast<void*>(const_cast< AddProjectWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddProjectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browse(); break;
        case 1: find(); break;
        case 2: openFileOfItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
