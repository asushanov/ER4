/****************************************************************************
** Meta object code from reading C++ file 'new_project_w.h'
**
** Created: Wed Mar 30 23:41:05 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ER4/new_project_w.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_project_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ProjectWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      24,   14,   14,   14, 0x08,
      30,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,
      55,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ProjectWindow[] = {
    "ProjectWindow\0\0browse()\0add()\0close()\0"
    "updateFileList()\0checkName()\0"
};

const QMetaObject ProjectWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProjectWindow,
      qt_meta_data_ProjectWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ProjectWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ProjectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ProjectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectWindow))
        return static_cast<void*>(const_cast< ProjectWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProjectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browse(); break;
        case 1: add(); break;
        case 2: close(); break;
        case 3: updateFileList(); break;
        case 4: checkName(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
