/****************************************************************************
** Meta object code from reading C++ file 'pamietnik.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PamietnikQT/pamietnik.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pamietnik.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Pamietnik_t {
    uint offsetsAndSizes[12];
    char stringdata0[10];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[34];
    char stringdata4[31];
    char stringdata5[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Pamietnik_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Pamietnik_t qt_meta_stringdata_Pamietnik = {
    {
        QT_MOC_LITERAL(0, 9),  // "Pamietnik"
        QT_MOC_LITERAL(10, 24),  // "on_addWpisButton_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 33),  // "on_previousWpisPushButton_cli..."
        QT_MOC_LITERAL(70, 30),  // "on_nextWpispPushButton_clicked"
        QT_MOC_LITERAL(101, 31)   // "on_removeWpisPushButton_clicked"
    },
    "Pamietnik",
    "on_addWpisButton_clicked",
    "",
    "on_previousWpisPushButton_clicked",
    "on_nextWpispPushButton_clicked",
    "on_removeWpisPushButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Pamietnik[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Pamietnik::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Pamietnik.offsetsAndSizes,
    qt_meta_data_Pamietnik,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Pamietnik_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Pamietnik, std::true_type>,
        // method 'on_addWpisButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_previousWpisPushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_nextWpispPushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeWpisPushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Pamietnik::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pamietnik *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addWpisButton_clicked(); break;
        case 1: _t->on_previousWpisPushButton_clicked(); break;
        case 2: _t->on_nextWpispPushButton_clicked(); break;
        case 3: _t->on_removeWpisPushButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Pamietnik::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pamietnik::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pamietnik.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Pamietnik::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
