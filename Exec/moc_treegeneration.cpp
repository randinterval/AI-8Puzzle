/****************************************************************************
** Meta object code from reading C++ file 'treegeneration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AI/treegeneration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'treegeneration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TreeGeneration_t {
    QByteArrayData data[5];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TreeGeneration_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TreeGeneration_t qt_meta_stringdata_TreeGeneration = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TreeGeneration"
QT_MOC_LITERAL(1, 15, 28), // "on_GenerateTreeDepth_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 27), // "on_GenerateTreeGoal_clicked"
QT_MOC_LITERAL(4, 73, 20) // "on_randomize_clicked"

    },
    "TreeGeneration\0on_GenerateTreeDepth_clicked\0"
    "\0on_GenerateTreeGoal_clicked\0"
    "on_randomize_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TreeGeneration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TreeGeneration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TreeGeneration *_t = static_cast<TreeGeneration *>(_o);
        switch (_id) {
        case 0: _t->on_GenerateTreeDepth_clicked(); break;
        case 1: _t->on_GenerateTreeGoal_clicked(); break;
        case 2: _t->on_randomize_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TreeGeneration::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TreeGeneration.data,
      qt_meta_data_TreeGeneration,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TreeGeneration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TreeGeneration::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TreeGeneration.stringdata))
        return static_cast<void*>(const_cast< TreeGeneration*>(this));
    return QDialog::qt_metacast(_clname);
}

int TreeGeneration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
