#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBINSPECTOR_H
#define MIQT_QT_WEBKIT_GEN_QWEBINSPECTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWebInspector;
class QWebPage;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWebInspector QWebInspector;
typedef struct QWebPage QWebPage;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QWebInspector* QWebInspector_new(QWidget* parent);
QWebInspector* QWebInspector_new2();
void QWebInspector_virtbase(QWebInspector* src, QWidget** outptr_QWidget);
QMetaObject* QWebInspector_MetaObject(const QWebInspector* self);
void* QWebInspector_Metacast(QWebInspector* self, const char* param1);
struct miqt_string QWebInspector_Tr(const char* s);
struct miqt_string QWebInspector_TrUtf8(const char* s);
void QWebInspector_SetPage(QWebInspector* self, QWebPage* page);
QWebPage* QWebInspector_Page(const QWebInspector* self);
QSize* QWebInspector_SizeHint(const QWebInspector* self);
bool QWebInspector_Event(QWebInspector* self, QEvent* param1);
void QWebInspector_ResizeEvent(QWebInspector* self, QResizeEvent* event);
void QWebInspector_ShowEvent(QWebInspector* self, QShowEvent* event);
void QWebInspector_HideEvent(QWebInspector* self, QHideEvent* event);
void QWebInspector_CloseEvent(QWebInspector* self, QCloseEvent* event);
struct miqt_string QWebInspector_Tr2(const char* s, const char* c);
struct miqt_string QWebInspector_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebInspector_TrUtf82(const char* s, const char* c);
struct miqt_string QWebInspector_TrUtf83(const char* s, const char* c, int n);
bool QWebInspector_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QWebInspector_virtualbase_SizeHint(const void* self);
bool QWebInspector_override_virtual_Event(void* self, intptr_t slot);
bool QWebInspector_virtualbase_Event(void* self, QEvent* param1);
bool QWebInspector_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QWebInspector_override_virtual_ShowEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QWebInspector_override_virtual_HideEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QWebInspector_override_virtual_CloseEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QWebInspector_override_virtual_DevType(void* self, intptr_t slot);
int QWebInspector_virtualbase_DevType(const void* self);
bool QWebInspector_override_virtual_SetVisible(void* self, intptr_t slot);
void QWebInspector_virtualbase_SetVisible(void* self, bool visible);
bool QWebInspector_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QWebInspector_virtualbase_MinimumSizeHint(const void* self);
bool QWebInspector_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QWebInspector_virtualbase_HeightForWidth(const void* self, int param1);
bool QWebInspector_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QWebInspector_virtualbase_HasHeightForWidth(const void* self);
bool QWebInspector_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QWebInspector_virtualbase_PaintEngine(const void* self);
bool QWebInspector_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QWebInspector_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QWebInspector_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QWebInspector_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QWebInspector_override_virtual_WheelEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QWebInspector_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QWebInspector_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QWebInspector_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QWebInspector_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QWebInspector_override_virtual_EnterEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_EnterEvent(void* self, QEvent* event);
bool QWebInspector_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QWebInspector_override_virtual_PaintEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QWebInspector_override_virtual_MoveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QWebInspector_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QWebInspector_override_virtual_TabletEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QWebInspector_override_virtual_ActionEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QWebInspector_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QWebInspector_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QWebInspector_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QWebInspector_override_virtual_DropEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QWebInspector_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QWebInspector_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QWebInspector_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QWebInspector_override_virtual_Metric(void* self, intptr_t slot);
int QWebInspector_virtualbase_Metric(const void* self, int param1);
bool QWebInspector_override_virtual_InitPainter(void* self, intptr_t slot);
void QWebInspector_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QWebInspector_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QWebInspector_virtualbase_Redirected(const void* self, QPoint* offset);
bool QWebInspector_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QWebInspector_virtualbase_SharedPainter(const void* self);
bool QWebInspector_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QWebInspector_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QWebInspector_virtualbase_InputMethodQuery(const void* self, int param1);
bool QWebInspector_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QWebInspector_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QWebInspector_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebInspector_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QWebInspector_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QWebInspector_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QWebInspector_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebInspector_virtualbase_CustomEvent(void* self, QEvent* event);
bool QWebInspector_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebInspector_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QWebInspector_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebInspector_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebInspector_Delete(QWebInspector* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
