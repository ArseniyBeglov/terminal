/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "bytesReceived",
    "",
    "asciiChosen",
    "binChosen",
    "hexChosen",
    "formatASCII",
    "formatBIN",
    "formatHEX",
    "on_pushButton_connect_clicked",
    "on_pushButton_disconnect_clicked",
    "on_send_ascii_clicked",
    "on_send_clicked",
    "on_clear_input_clicked",
    "on_clear_output_clicked",
    "populatePorts",
    "checkReceiving"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       1,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    2 /* Public */,
       3,    0,   99,    2, 0x06,    3 /* Public */,
       4,    0,  100,    2, 0x06,    4 /* Public */,
       5,    0,  101,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  102,    2, 0x0a,    6 /* Public */,
       7,    0,  103,    2, 0x0a,    7 /* Public */,
       8,    0,  104,    2, 0x0a,    8 /* Public */,
       9,    0,  105,    2, 0x08,    9 /* Private */,
      10,    0,  106,    2, 0x08,   10 /* Private */,
      11,    0,  107,    2, 0x08,   11 /* Private */,
      12,    0,  108,    2, 0x08,   12 /* Private */,
      13,    0,  109,    2, 0x08,   13 /* Private */,
      14,    0,  110,    2, 0x08,   14 /* Private */,
      15,    0,  111,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00015001, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // property 'checkReceiving'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'bytesReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'asciiChosen'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'binChosen'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'hexChosen'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'formatASCII'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'formatBIN'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'formatHEX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_disconnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_ascii_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_input_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clear_output_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'populatePorts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bytesReceived(); break;
        case 1: { bool _r = _t->asciiChosen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->binChosen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->hexChosen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->formatASCII(); break;
        case 5: _t->formatBIN(); break;
        case 6: _t->formatHEX(); break;
        case 7: _t->on_pushButton_connect_clicked(); break;
        case 8: _t->on_pushButton_disconnect_clicked(); break;
        case 9: _t->on_send_ascii_clicked(); break;
        case 10: _t->on_send_clicked(); break;
        case 11: _t->on_clear_input_clicked(); break;
        case 12: _t->on_clear_output_clicked(); break;
        case 13: _t->populatePorts(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::bytesReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = bool (MainWindow::*)();
            if (_t _q_method = &MainWindow::asciiChosen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = bool (MainWindow::*)();
            if (_t _q_method = &MainWindow::binChosen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = bool (MainWindow::*)();
            if (_t _q_method = &MainWindow::hexChosen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->checkReceiving(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::bytesReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
bool MainWindow::asciiChosen()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
bool MainWindow::binChosen()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
bool MainWindow::hexChosen()
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}
QT_WARNING_POP
