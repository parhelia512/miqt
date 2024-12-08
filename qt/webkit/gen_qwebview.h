#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBVIEW_H
#define MIQT_QT_WEBKIT_GEN_QWEBVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QNetworkRequest;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QPrinter;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QUrl;
class QVariant;
class QWebHistory;
class QWebPage;
class QWebSettings;
class QWebView;
class QWheelEvent;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QPrinter QPrinter;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebHistory QWebHistory;
typedef struct QWebPage QWebPage;
typedef struct QWebSettings QWebSettings;
typedef struct QWebView QWebView;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QWebView* QWebView_new(QWidget* parent);
QWebView* QWebView_new2();
void QWebView_virtbase(QWebView* src, QWidget** outptr_QWidget);
QMetaObject* QWebView_MetaObject(const QWebView* self);
void* QWebView_Metacast(QWebView* self, const char* param1);
struct miqt_string QWebView_Tr(const char* s);
struct miqt_string QWebView_TrUtf8(const char* s);
QWebPage* QWebView_Page(const QWebView* self);
void QWebView_SetPage(QWebView* self, QWebPage* page);
void QWebView_Load(QWebView* self, QUrl* url);
void QWebView_LoadWithRequest(QWebView* self, QNetworkRequest* request);
void QWebView_SetHtml(QWebView* self, struct miqt_string html);
void QWebView_SetContent(QWebView* self, struct miqt_string data);
QWebHistory* QWebView_History(const QWebView* self);
QWebSettings* QWebView_Settings(const QWebView* self);
struct miqt_string QWebView_Title(const QWebView* self);
void QWebView_SetUrl(QWebView* self, QUrl* url);
QUrl* QWebView_Url(const QWebView* self);
QIcon* QWebView_Icon(const QWebView* self);
bool QWebView_HasSelection(const QWebView* self);
struct miqt_string QWebView_SelectedText(const QWebView* self);
struct miqt_string QWebView_SelectedHtml(const QWebView* self);
QAction* QWebView_PageAction(const QWebView* self, int action);
void QWebView_TriggerPageAction(QWebView* self, int action);
bool QWebView_IsModified(const QWebView* self);
QVariant* QWebView_InputMethodQuery(const QWebView* self, int property);
QSize* QWebView_SizeHint(const QWebView* self);
double QWebView_ZoomFactor(const QWebView* self);
void QWebView_SetZoomFactor(QWebView* self, double factor);
void QWebView_SetTextSizeMultiplier(QWebView* self, double factor);
double QWebView_TextSizeMultiplier(const QWebView* self);
int QWebView_RenderHints(const QWebView* self);
void QWebView_SetRenderHints(QWebView* self, int hints);
void QWebView_SetRenderHint(QWebView* self, int hint);
bool QWebView_FindText(QWebView* self, struct miqt_string subString);
bool QWebView_Event(QWebView* self, QEvent* param1);
void QWebView_Stop(QWebView* self);
void QWebView_Back(QWebView* self);
void QWebView_Forward(QWebView* self);
void QWebView_Reload(QWebView* self);
void QWebView_Print(const QWebView* self, QPrinter* param1);
void QWebView_LoadStarted(QWebView* self);
void QWebView_connect_LoadStarted(QWebView* self, intptr_t slot);
void QWebView_LoadProgress(QWebView* self, int progress);
void QWebView_connect_LoadProgress(QWebView* self, intptr_t slot);
void QWebView_LoadFinished(QWebView* self, bool param1);
void QWebView_connect_LoadFinished(QWebView* self, intptr_t slot);
void QWebView_TitleChanged(QWebView* self, struct miqt_string title);
void QWebView_connect_TitleChanged(QWebView* self, intptr_t slot);
void QWebView_StatusBarMessage(QWebView* self, struct miqt_string text);
void QWebView_connect_StatusBarMessage(QWebView* self, intptr_t slot);
void QWebView_LinkClicked(QWebView* self, QUrl* param1);
void QWebView_connect_LinkClicked(QWebView* self, intptr_t slot);
void QWebView_SelectionChanged(QWebView* self);
void QWebView_connect_SelectionChanged(QWebView* self, intptr_t slot);
void QWebView_IconChanged(QWebView* self);
void QWebView_connect_IconChanged(QWebView* self, intptr_t slot);
void QWebView_UrlChanged(QWebView* self, QUrl* param1);
void QWebView_connect_UrlChanged(QWebView* self, intptr_t slot);
void QWebView_ResizeEvent(QWebView* self, QResizeEvent* param1);
void QWebView_PaintEvent(QWebView* self, QPaintEvent* param1);
QWebView* QWebView_CreateWindow(QWebView* self, int typeVal);
void QWebView_ChangeEvent(QWebView* self, QEvent* param1);
void QWebView_MouseMoveEvent(QWebView* self, QMouseEvent* param1);
void QWebView_MousePressEvent(QWebView* self, QMouseEvent* param1);
void QWebView_MouseDoubleClickEvent(QWebView* self, QMouseEvent* param1);
void QWebView_MouseReleaseEvent(QWebView* self, QMouseEvent* param1);
void QWebView_ContextMenuEvent(QWebView* self, QContextMenuEvent* param1);
void QWebView_WheelEvent(QWebView* self, QWheelEvent* param1);
void QWebView_KeyPressEvent(QWebView* self, QKeyEvent* param1);
void QWebView_KeyReleaseEvent(QWebView* self, QKeyEvent* param1);
void QWebView_DragEnterEvent(QWebView* self, QDragEnterEvent* param1);
void QWebView_DragLeaveEvent(QWebView* self, QDragLeaveEvent* param1);
void QWebView_DragMoveEvent(QWebView* self, QDragMoveEvent* param1);
void QWebView_DropEvent(QWebView* self, QDropEvent* param1);
void QWebView_FocusInEvent(QWebView* self, QFocusEvent* param1);
void QWebView_FocusOutEvent(QWebView* self, QFocusEvent* param1);
void QWebView_InputMethodEvent(QWebView* self, QInputMethodEvent* param1);
bool QWebView_FocusNextPrevChild(QWebView* self, bool next);
struct miqt_string QWebView_Tr2(const char* s, const char* c);
struct miqt_string QWebView_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebView_TrUtf82(const char* s, const char* c);
struct miqt_string QWebView_TrUtf83(const char* s, const char* c, int n);
void QWebView_Load2(QWebView* self, QNetworkRequest* request, int operation);
void QWebView_Load3(QWebView* self, QNetworkRequest* request, int operation, struct miqt_string body);
void QWebView_SetHtml2(QWebView* self, struct miqt_string html, QUrl* baseUrl);
void QWebView_SetContent2(QWebView* self, struct miqt_string data, struct miqt_string mimeType);
void QWebView_SetContent3(QWebView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl);
void QWebView_TriggerPageAction2(QWebView* self, int action, bool checked);
void QWebView_SetRenderHint2(QWebView* self, int hint, bool enabled);
bool QWebView_FindText2(QWebView* self, struct miqt_string subString, int options);
void QWebView_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QWebView_virtualbase_InputMethodQuery(const void* self, int property);
void QWebView_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QWebView_virtualbase_SizeHint(const void* self);
void QWebView_override_virtual_Event(void* self, intptr_t slot);
bool QWebView_virtualbase_Event(void* self, QEvent* param1);
void QWebView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QWebView_virtualbase_ResizeEvent(void* self, QResizeEvent* param1);
void QWebView_override_virtual_PaintEvent(void* self, intptr_t slot);
void QWebView_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
void QWebView_override_virtual_CreateWindow(void* self, intptr_t slot);
QWebView* QWebView_virtualbase_CreateWindow(void* self, int typeVal);
void QWebView_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QWebView_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QWebView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QWebView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* param1);
void QWebView_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QWebView_virtualbase_MousePressEvent(void* self, QMouseEvent* param1);
void QWebView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QWebView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* param1);
void QWebView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QWebView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* param1);
void QWebView_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QWebView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QWebView_override_virtual_WheelEvent(void* self, intptr_t slot);
void QWebView_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
void QWebView_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QWebView_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1);
void QWebView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QWebView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1);
void QWebView_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QWebView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* param1);
void QWebView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QWebView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* param1);
void QWebView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QWebView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* param1);
void QWebView_override_virtual_DropEvent(void* self, intptr_t slot);
void QWebView_virtualbase_DropEvent(void* self, QDropEvent* param1);
void QWebView_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QWebView_virtualbase_FocusInEvent(void* self, QFocusEvent* param1);
void QWebView_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QWebView_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1);
void QWebView_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QWebView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QWebView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QWebView_virtualbase_FocusNextPrevChild(void* self, bool next);
void QWebView_override_virtual_DevType(void* self, intptr_t slot);
int QWebView_virtualbase_DevType(const void* self);
void QWebView_override_virtual_SetVisible(void* self, intptr_t slot);
void QWebView_virtualbase_SetVisible(void* self, bool visible);
void QWebView_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QWebView_virtualbase_MinimumSizeHint(const void* self);
void QWebView_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QWebView_virtualbase_HeightForWidth(const void* self, int param1);
void QWebView_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QWebView_virtualbase_HasHeightForWidth(const void* self);
void QWebView_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QWebView_virtualbase_PaintEngine(const void* self);
void QWebView_override_virtual_EnterEvent(void* self, intptr_t slot);
void QWebView_virtualbase_EnterEvent(void* self, QEvent* event);
void QWebView_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QWebView_virtualbase_LeaveEvent(void* self, QEvent* event);
void QWebView_override_virtual_MoveEvent(void* self, intptr_t slot);
void QWebView_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QWebView_override_virtual_CloseEvent(void* self, intptr_t slot);
void QWebView_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QWebView_override_virtual_TabletEvent(void* self, intptr_t slot);
void QWebView_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QWebView_override_virtual_ActionEvent(void* self, intptr_t slot);
void QWebView_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QWebView_override_virtual_ShowEvent(void* self, intptr_t slot);
void QWebView_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QWebView_override_virtual_HideEvent(void* self, intptr_t slot);
void QWebView_virtualbase_HideEvent(void* self, QHideEvent* event);
void QWebView_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QWebView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QWebView_override_virtual_Metric(void* self, intptr_t slot);
int QWebView_virtualbase_Metric(const void* self, int param1);
void QWebView_override_virtual_InitPainter(void* self, intptr_t slot);
void QWebView_virtualbase_InitPainter(const void* self, QPainter* painter);
void QWebView_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QWebView_virtualbase_Redirected(const void* self, QPoint* offset);
void QWebView_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QWebView_virtualbase_SharedPainter(const void* self);
void QWebView_Delete(QWebView* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif