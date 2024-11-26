#pragma once
#ifndef MIQT_QT6_GEN_QWINDOW_H
#define MIQT_QT6_GEN_QWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibleInterface;
class QChildEvent;
class QCloseEvent;
class QCursor;
class QEvent;
class QExposeEvent;
class QFocusEvent;
class QHideEvent;
class QIcon;
class QKeyEvent;
class QMargins;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintEvent;
class QPoint;
class QPointF;
class QRect;
class QRegion;
class QResizeEvent;
class QScreen;
class QShowEvent;
class QSize;
class QSurface;
class QSurfaceFormat;
class QTabletEvent;
class QTimerEvent;
class QTouchEvent;
class QWheelEvent;
class QWindow;
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QExposeEvent QExposeEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSurface QSurface;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
#endif

void QWindow_new(QWindow** outptr_QWindow, QObject** outptr_QObject, QSurface** outptr_QSurface);
void QWindow_new2(QWindow* parent, QWindow** outptr_QWindow, QObject** outptr_QObject, QSurface** outptr_QSurface);
void QWindow_new3(QScreen* screen, QWindow** outptr_QWindow, QObject** outptr_QObject, QSurface** outptr_QSurface);
QMetaObject* QWindow_MetaObject(const QWindow* self);
void* QWindow_Metacast(QWindow* self, const char* param1);
struct miqt_string QWindow_Tr(const char* s);
void QWindow_SetSurfaceType(QWindow* self, int surfaceType);
int QWindow_SurfaceType(const QWindow* self);
bool QWindow_IsVisible(const QWindow* self);
int QWindow_Visibility(const QWindow* self);
void QWindow_SetVisibility(QWindow* self, int v);
void QWindow_Create(QWindow* self);
uintptr_t QWindow_WinId(const QWindow* self);
QWindow* QWindow_Parent(const QWindow* self);
void QWindow_SetParent(QWindow* self, QWindow* parent);
bool QWindow_IsTopLevel(const QWindow* self);
bool QWindow_IsModal(const QWindow* self);
int QWindow_Modality(const QWindow* self);
void QWindow_SetModality(QWindow* self, int modality);
void QWindow_SetFormat(QWindow* self, QSurfaceFormat* format);
QSurfaceFormat* QWindow_Format(const QWindow* self);
QSurfaceFormat* QWindow_RequestedFormat(const QWindow* self);
void QWindow_SetFlags(QWindow* self, int flags);
int QWindow_Flags(const QWindow* self);
void QWindow_SetFlag(QWindow* self, int param1);
int QWindow_Type(const QWindow* self);
struct miqt_string QWindow_Title(const QWindow* self);
void QWindow_SetOpacity(QWindow* self, double level);
double QWindow_Opacity(const QWindow* self);
void QWindow_SetMask(QWindow* self, QRegion* region);
QRegion* QWindow_Mask(const QWindow* self);
bool QWindow_IsActive(const QWindow* self);
void QWindow_ReportContentOrientationChange(QWindow* self, int orientation);
int QWindow_ContentOrientation(const QWindow* self);
double QWindow_DevicePixelRatio(const QWindow* self);
int QWindow_WindowState(const QWindow* self);
int QWindow_WindowStates(const QWindow* self);
void QWindow_SetWindowState(QWindow* self, int state);
void QWindow_SetWindowStates(QWindow* self, int states);
void QWindow_SetTransientParent(QWindow* self, QWindow* parent);
QWindow* QWindow_TransientParent(const QWindow* self);
bool QWindow_IsAncestorOf(const QWindow* self, QWindow* child);
bool QWindow_IsExposed(const QWindow* self);
int QWindow_MinimumWidth(const QWindow* self);
int QWindow_MinimumHeight(const QWindow* self);
int QWindow_MaximumWidth(const QWindow* self);
int QWindow_MaximumHeight(const QWindow* self);
QSize* QWindow_MinimumSize(const QWindow* self);
QSize* QWindow_MaximumSize(const QWindow* self);
QSize* QWindow_BaseSize(const QWindow* self);
QSize* QWindow_SizeIncrement(const QWindow* self);
void QWindow_SetMinimumSize(QWindow* self, QSize* size);
void QWindow_SetMaximumSize(QWindow* self, QSize* size);
void QWindow_SetBaseSize(QWindow* self, QSize* size);
void QWindow_SetSizeIncrement(QWindow* self, QSize* size);
QRect* QWindow_Geometry(const QWindow* self);
QMargins* QWindow_FrameMargins(const QWindow* self);
QRect* QWindow_FrameGeometry(const QWindow* self);
QPoint* QWindow_FramePosition(const QWindow* self);
void QWindow_SetFramePosition(QWindow* self, QPoint* point);
int QWindow_Width(const QWindow* self);
int QWindow_Height(const QWindow* self);
int QWindow_X(const QWindow* self);
int QWindow_Y(const QWindow* self);
QSize* QWindow_Size(const QWindow* self);
QPoint* QWindow_Position(const QWindow* self);
void QWindow_SetPosition(QWindow* self, QPoint* pt);
void QWindow_SetPosition2(QWindow* self, int posx, int posy);
void QWindow_Resize(QWindow* self, QSize* newSize);
void QWindow_Resize2(QWindow* self, int w, int h);
void QWindow_SetFilePath(QWindow* self, struct miqt_string filePath);
struct miqt_string QWindow_FilePath(const QWindow* self);
void QWindow_SetIcon(QWindow* self, QIcon* icon);
QIcon* QWindow_Icon(const QWindow* self);
void QWindow_Destroy(QWindow* self);
bool QWindow_SetKeyboardGrabEnabled(QWindow* self, bool grab);
bool QWindow_SetMouseGrabEnabled(QWindow* self, bool grab);
QScreen* QWindow_Screen(const QWindow* self);
void QWindow_SetScreen(QWindow* self, QScreen* screen);
QAccessibleInterface* QWindow_AccessibleRoot(const QWindow* self);
QObject* QWindow_FocusObject(const QWindow* self);
QPointF* QWindow_MapToGlobal(const QWindow* self, QPointF* pos);
QPointF* QWindow_MapFromGlobal(const QWindow* self, QPointF* pos);
QPoint* QWindow_MapToGlobalWithPos(const QWindow* self, QPoint* pos);
QPoint* QWindow_MapFromGlobalWithPos(const QWindow* self, QPoint* pos);
QCursor* QWindow_Cursor(const QWindow* self);
void QWindow_SetCursor(QWindow* self, QCursor* cursor);
void QWindow_UnsetCursor(QWindow* self);
QWindow* QWindow_FromWinId(uintptr_t id);
void QWindow_RequestActivate(QWindow* self);
void QWindow_SetVisible(QWindow* self, bool visible);
void QWindow_Show(QWindow* self);
void QWindow_Hide(QWindow* self);
void QWindow_ShowMinimized(QWindow* self);
void QWindow_ShowMaximized(QWindow* self);
void QWindow_ShowFullScreen(QWindow* self);
void QWindow_ShowNormal(QWindow* self);
bool QWindow_Close(QWindow* self);
void QWindow_Raise(QWindow* self);
void QWindow_Lower(QWindow* self);
bool QWindow_StartSystemResize(QWindow* self, int edges);
bool QWindow_StartSystemMove(QWindow* self);
void QWindow_SetTitle(QWindow* self, struct miqt_string title);
void QWindow_SetX(QWindow* self, int arg);
void QWindow_SetY(QWindow* self, int arg);
void QWindow_SetWidth(QWindow* self, int arg);
void QWindow_SetHeight(QWindow* self, int arg);
void QWindow_SetGeometry(QWindow* self, int posx, int posy, int w, int h);
void QWindow_SetGeometryWithRect(QWindow* self, QRect* rect);
void QWindow_SetMinimumWidth(QWindow* self, int w);
void QWindow_SetMinimumHeight(QWindow* self, int h);
void QWindow_SetMaximumWidth(QWindow* self, int w);
void QWindow_SetMaximumHeight(QWindow* self, int h);
void QWindow_Alert(QWindow* self, int msec);
void QWindow_RequestUpdate(QWindow* self);
void QWindow_ScreenChanged(QWindow* self, QScreen* screen);
void QWindow_connect_ScreenChanged(QWindow* self, intptr_t slot);
void QWindow_ModalityChanged(QWindow* self, int modality);
void QWindow_connect_ModalityChanged(QWindow* self, intptr_t slot);
void QWindow_WindowStateChanged(QWindow* self, int windowState);
void QWindow_connect_WindowStateChanged(QWindow* self, intptr_t slot);
void QWindow_WindowTitleChanged(QWindow* self, struct miqt_string title);
void QWindow_connect_WindowTitleChanged(QWindow* self, intptr_t slot);
void QWindow_XChanged(QWindow* self, int arg);
void QWindow_connect_XChanged(QWindow* self, intptr_t slot);
void QWindow_YChanged(QWindow* self, int arg);
void QWindow_connect_YChanged(QWindow* self, intptr_t slot);
void QWindow_WidthChanged(QWindow* self, int arg);
void QWindow_connect_WidthChanged(QWindow* self, intptr_t slot);
void QWindow_HeightChanged(QWindow* self, int arg);
void QWindow_connect_HeightChanged(QWindow* self, intptr_t slot);
void QWindow_MinimumWidthChanged(QWindow* self, int arg);
void QWindow_connect_MinimumWidthChanged(QWindow* self, intptr_t slot);
void QWindow_MinimumHeightChanged(QWindow* self, int arg);
void QWindow_connect_MinimumHeightChanged(QWindow* self, intptr_t slot);
void QWindow_MaximumWidthChanged(QWindow* self, int arg);
void QWindow_connect_MaximumWidthChanged(QWindow* self, intptr_t slot);
void QWindow_MaximumHeightChanged(QWindow* self, int arg);
void QWindow_connect_MaximumHeightChanged(QWindow* self, intptr_t slot);
void QWindow_VisibleChanged(QWindow* self, bool arg);
void QWindow_connect_VisibleChanged(QWindow* self, intptr_t slot);
void QWindow_VisibilityChanged(QWindow* self, int visibility);
void QWindow_connect_VisibilityChanged(QWindow* self, intptr_t slot);
void QWindow_ActiveChanged(QWindow* self);
void QWindow_connect_ActiveChanged(QWindow* self, intptr_t slot);
void QWindow_ContentOrientationChanged(QWindow* self, int orientation);
void QWindow_connect_ContentOrientationChanged(QWindow* self, intptr_t slot);
void QWindow_FocusObjectChanged(QWindow* self, QObject* object);
void QWindow_connect_FocusObjectChanged(QWindow* self, intptr_t slot);
void QWindow_OpacityChanged(QWindow* self, double opacity);
void QWindow_connect_OpacityChanged(QWindow* self, intptr_t slot);
void QWindow_TransientParentChanged(QWindow* self, QWindow* transientParent);
void QWindow_connect_TransientParentChanged(QWindow* self, intptr_t slot);
void QWindow_ExposeEvent(QWindow* self, QExposeEvent* param1);
void QWindow_ResizeEvent(QWindow* self, QResizeEvent* param1);
void QWindow_PaintEvent(QWindow* self, QPaintEvent* param1);
void QWindow_MoveEvent(QWindow* self, QMoveEvent* param1);
void QWindow_FocusInEvent(QWindow* self, QFocusEvent* param1);
void QWindow_FocusOutEvent(QWindow* self, QFocusEvent* param1);
void QWindow_ShowEvent(QWindow* self, QShowEvent* param1);
void QWindow_HideEvent(QWindow* self, QHideEvent* param1);
void QWindow_CloseEvent(QWindow* self, QCloseEvent* param1);
bool QWindow_Event(QWindow* self, QEvent* param1);
void QWindow_KeyPressEvent(QWindow* self, QKeyEvent* param1);
void QWindow_KeyReleaseEvent(QWindow* self, QKeyEvent* param1);
void QWindow_MousePressEvent(QWindow* self, QMouseEvent* param1);
void QWindow_MouseReleaseEvent(QWindow* self, QMouseEvent* param1);
void QWindow_MouseDoubleClickEvent(QWindow* self, QMouseEvent* param1);
void QWindow_MouseMoveEvent(QWindow* self, QMouseEvent* param1);
void QWindow_WheelEvent(QWindow* self, QWheelEvent* param1);
void QWindow_TouchEvent(QWindow* self, QTouchEvent* param1);
void QWindow_TabletEvent(QWindow* self, QTabletEvent* param1);
bool QWindow_NativeEvent(QWindow* self, struct miqt_string eventType, void* message, intptr_t* result);
struct miqt_string QWindow_Tr2(const char* s, const char* c);
struct miqt_string QWindow_Tr3(const char* s, const char* c, int n);
QWindow* QWindow_Parent1(const QWindow* self, int mode);
void QWindow_SetFlag2(QWindow* self, int param1, bool on);
bool QWindow_IsAncestorOf2(const QWindow* self, QWindow* child, int mode);
void QWindow_override_virtual_SurfaceType(void* self, intptr_t slot);
int QWindow_virtualbase_SurfaceType(const void* self);
void QWindow_override_virtual_Format(void* self, intptr_t slot);
QSurfaceFormat* QWindow_virtualbase_Format(const void* self);
void QWindow_override_virtual_Size(void* self, intptr_t slot);
QSize* QWindow_virtualbase_Size(const void* self);
void QWindow_override_virtual_AccessibleRoot(void* self, intptr_t slot);
QAccessibleInterface* QWindow_virtualbase_AccessibleRoot(const void* self);
void QWindow_override_virtual_FocusObject(void* self, intptr_t slot);
QObject* QWindow_virtualbase_FocusObject(const void* self);
void QWindow_override_virtual_ExposeEvent(void* self, intptr_t slot);
void QWindow_virtualbase_ExposeEvent(void* self, QExposeEvent* param1);
void QWindow_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QWindow_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QWindow_override_virtual_PaintEvent(void* self, intptr_t slot);
void QWindow_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QWindow_override_virtual_MoveEvent(void* self, intptr_t slot);
void QWindow_virtualbase_MoveEvent(void* self, QMoveEvent* param1);
void QWindow_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QWindow_virtualbase_FocusInEvent(void* self, QFocusEvent* param1);
void QWindow_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QWindow_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
void QWindow_override_virtual_ShowEvent(void* self, intptr_t slot);
void QWindow_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QWindow_override_virtual_HideEvent(void* self, intptr_t slot);
void QWindow_virtualbase_HideEvent(void* self, QHideEvent* param1);
void QWindow_override_virtual_CloseEvent(void* self, intptr_t slot);
void QWindow_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
void QWindow_override_virtual_Event(void* self, intptr_t slot);
bool QWindow_virtualbase_Event(void* self, QEvent* param1);
void QWindow_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QWindow_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QWindow_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QWindow_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1);
void QWindow_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QWindow_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QWindow_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QWindow_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QWindow_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QWindow_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
void QWindow_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QWindow_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QWindow_override_virtual_WheelEvent(void* self, intptr_t slot);
void QWindow_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
void QWindow_override_virtual_TouchEvent(void* self, intptr_t slot);
void QWindow_virtualbase_TouchEvent(void* self, QTouchEvent* param1);
void QWindow_override_virtual_TabletEvent(void* self, intptr_t slot);
void QWindow_virtualbase_TabletEvent(void* self, QTabletEvent* param1);
void QWindow_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QWindow_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
void QWindow_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWindow_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QWindow_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWindow_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QWindow_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWindow_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QWindow_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWindow_virtualbase_CustomEvent(void* self, QEvent* event);
void QWindow_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWindow_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QWindow_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWindow_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWindow_Delete(QWindow* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
