#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSVIEW_H
#define MIQT_QT_GEN_QGRAPHICSVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QActionEvent;
class QBrush;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QGraphicsItem;
class QGraphicsScene;
class QGraphicsView;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMatrix;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPainterPath;
class QPoint;
class QPointF;
class QRect;
class QRectF;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QTransform;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsScene QGraphicsScene;
typedef struct QGraphicsView QGraphicsView;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMatrix QMatrix;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPainterPath QPainterPath;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QGraphicsView* QGraphicsView_new(QWidget* parent);
QGraphicsView* QGraphicsView_new2();
QGraphicsView* QGraphicsView_new3(QGraphicsScene* scene);
QGraphicsView* QGraphicsView_new4(QGraphicsScene* scene, QWidget* parent);
void QGraphicsView_virtbase(QGraphicsView* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QGraphicsView_MetaObject(const QGraphicsView* self);
void* QGraphicsView_Metacast(QGraphicsView* self, const char* param1);
struct miqt_string QGraphicsView_Tr(const char* s);
struct miqt_string QGraphicsView_TrUtf8(const char* s);
QSize* QGraphicsView_SizeHint(const QGraphicsView* self);
int QGraphicsView_RenderHints(const QGraphicsView* self);
void QGraphicsView_SetRenderHint(QGraphicsView* self, int hint);
void QGraphicsView_SetRenderHints(QGraphicsView* self, int hints);
int QGraphicsView_Alignment(const QGraphicsView* self);
void QGraphicsView_SetAlignment(QGraphicsView* self, int alignment);
int QGraphicsView_TransformationAnchor(const QGraphicsView* self);
void QGraphicsView_SetTransformationAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_ResizeAnchor(const QGraphicsView* self);
void QGraphicsView_SetResizeAnchor(QGraphicsView* self, int anchor);
int QGraphicsView_ViewportUpdateMode(const QGraphicsView* self);
void QGraphicsView_SetViewportUpdateMode(QGraphicsView* self, int mode);
int QGraphicsView_OptimizationFlags(const QGraphicsView* self);
void QGraphicsView_SetOptimizationFlag(QGraphicsView* self, int flag);
void QGraphicsView_SetOptimizationFlags(QGraphicsView* self, int flags);
int QGraphicsView_DragMode(const QGraphicsView* self);
void QGraphicsView_SetDragMode(QGraphicsView* self, int mode);
int QGraphicsView_RubberBandSelectionMode(const QGraphicsView* self);
void QGraphicsView_SetRubberBandSelectionMode(QGraphicsView* self, int mode);
QRect* QGraphicsView_RubberBandRect(const QGraphicsView* self);
int QGraphicsView_CacheMode(const QGraphicsView* self);
void QGraphicsView_SetCacheMode(QGraphicsView* self, int mode);
void QGraphicsView_ResetCachedContent(QGraphicsView* self);
bool QGraphicsView_IsInteractive(const QGraphicsView* self);
void QGraphicsView_SetInteractive(QGraphicsView* self, bool allowed);
QGraphicsScene* QGraphicsView_Scene(const QGraphicsView* self);
void QGraphicsView_SetScene(QGraphicsView* self, QGraphicsScene* scene);
QRectF* QGraphicsView_SceneRect(const QGraphicsView* self);
void QGraphicsView_SetSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_SetSceneRect2(QGraphicsView* self, double x, double y, double w, double h);
QMatrix* QGraphicsView_Matrix(const QGraphicsView* self);
void QGraphicsView_SetMatrix(QGraphicsView* self, QMatrix* matrix);
void QGraphicsView_ResetMatrix(QGraphicsView* self);
QTransform* QGraphicsView_Transform(const QGraphicsView* self);
QTransform* QGraphicsView_ViewportTransform(const QGraphicsView* self);
bool QGraphicsView_IsTransformed(const QGraphicsView* self);
void QGraphicsView_SetTransform(QGraphicsView* self, QTransform* matrix);
void QGraphicsView_ResetTransform(QGraphicsView* self);
void QGraphicsView_Rotate(QGraphicsView* self, double angle);
void QGraphicsView_Scale(QGraphicsView* self, double sx, double sy);
void QGraphicsView_Shear(QGraphicsView* self, double sh, double sv);
void QGraphicsView_Translate(QGraphicsView* self, double dx, double dy);
void QGraphicsView_CenterOn(QGraphicsView* self, QPointF* pos);
void QGraphicsView_CenterOn2(QGraphicsView* self, double x, double y);
void QGraphicsView_CenterOnWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_EnsureVisible(QGraphicsView* self, QRectF* rect);
void QGraphicsView_EnsureVisible2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_EnsureVisibleWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_FitInView(QGraphicsView* self, QRectF* rect);
void QGraphicsView_FitInView2(QGraphicsView* self, double x, double y, double w, double h);
void QGraphicsView_FitInViewWithItem(QGraphicsView* self, QGraphicsItem* item);
void QGraphicsView_Render(QGraphicsView* self, QPainter* painter);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items(const QGraphicsView* self);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithPos(const QGraphicsView* self, QPoint* pos);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items2(const QGraphicsView* self, int x, int y);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithRect(const QGraphicsView* self, QRect* rect);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items3(const QGraphicsView* self, int x, int y, int w, int h);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_ItemsWithPath(const QGraphicsView* self, QPainterPath* path);
QGraphicsItem* QGraphicsView_ItemAt(const QGraphicsView* self, QPoint* pos);
QGraphicsItem* QGraphicsView_ItemAt2(const QGraphicsView* self, int x, int y);
QPointF* QGraphicsView_MapToScene(const QGraphicsView* self, QPoint* point);
QPainterPath* QGraphicsView_MapToSceneWithPath(const QGraphicsView* self, QPainterPath* path);
QPoint* QGraphicsView_MapFromScene(const QGraphicsView* self, QPointF* point);
QPainterPath* QGraphicsView_MapFromSceneWithPath(const QGraphicsView* self, QPainterPath* path);
QPointF* QGraphicsView_MapToScene2(const QGraphicsView* self, int x, int y);
QPoint* QGraphicsView_MapFromScene2(const QGraphicsView* self, double x, double y);
QVariant* QGraphicsView_InputMethodQuery(const QGraphicsView* self, int query);
QBrush* QGraphicsView_BackgroundBrush(const QGraphicsView* self);
void QGraphicsView_SetBackgroundBrush(QGraphicsView* self, QBrush* brush);
QBrush* QGraphicsView_ForegroundBrush(const QGraphicsView* self);
void QGraphicsView_SetForegroundBrush(QGraphicsView* self, QBrush* brush);
void QGraphicsView_UpdateScene(QGraphicsView* self, struct miqt_array /* of QRectF* */  rects);
void QGraphicsView_InvalidateScene(QGraphicsView* self);
void QGraphicsView_UpdateSceneRect(QGraphicsView* self, QRectF* rect);
void QGraphicsView_RubberBandChanged(QGraphicsView* self, QRect* viewportRect, QPointF* fromScenePoint, QPointF* toScenePoint);
void QGraphicsView_connect_RubberBandChanged(QGraphicsView* self, intptr_t slot);
void QGraphicsView_SetupViewport(QGraphicsView* self, QWidget* widget);
bool QGraphicsView_Event(QGraphicsView* self, QEvent* event);
bool QGraphicsView_ViewportEvent(QGraphicsView* self, QEvent* event);
void QGraphicsView_ContextMenuEvent(QGraphicsView* self, QContextMenuEvent* event);
void QGraphicsView_DragEnterEvent(QGraphicsView* self, QDragEnterEvent* event);
void QGraphicsView_DragLeaveEvent(QGraphicsView* self, QDragLeaveEvent* event);
void QGraphicsView_DragMoveEvent(QGraphicsView* self, QDragMoveEvent* event);
void QGraphicsView_DropEvent(QGraphicsView* self, QDropEvent* event);
void QGraphicsView_FocusInEvent(QGraphicsView* self, QFocusEvent* event);
bool QGraphicsView_FocusNextPrevChild(QGraphicsView* self, bool next);
void QGraphicsView_FocusOutEvent(QGraphicsView* self, QFocusEvent* event);
void QGraphicsView_KeyPressEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_KeyReleaseEvent(QGraphicsView* self, QKeyEvent* event);
void QGraphicsView_MouseDoubleClickEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MousePressEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MouseMoveEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_MouseReleaseEvent(QGraphicsView* self, QMouseEvent* event);
void QGraphicsView_WheelEvent(QGraphicsView* self, QWheelEvent* event);
void QGraphicsView_PaintEvent(QGraphicsView* self, QPaintEvent* event);
void QGraphicsView_ResizeEvent(QGraphicsView* self, QResizeEvent* event);
void QGraphicsView_ScrollContentsBy(QGraphicsView* self, int dx, int dy);
void QGraphicsView_ShowEvent(QGraphicsView* self, QShowEvent* event);
void QGraphicsView_InputMethodEvent(QGraphicsView* self, QInputMethodEvent* event);
void QGraphicsView_DrawBackground(QGraphicsView* self, QPainter* painter, QRectF* rect);
void QGraphicsView_DrawForeground(QGraphicsView* self, QPainter* painter, QRectF* rect);
struct miqt_string QGraphicsView_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsView_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsView_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsView_TrUtf83(const char* s, const char* c, int n);
void QGraphicsView_SetRenderHint2(QGraphicsView* self, int hint, bool enabled);
void QGraphicsView_SetOptimizationFlag2(QGraphicsView* self, int flag, bool enabled);
void QGraphicsView_SetMatrix2(QGraphicsView* self, QMatrix* matrix, bool combine);
void QGraphicsView_SetTransform2(QGraphicsView* self, QTransform* matrix, bool combine);
void QGraphicsView_EnsureVisible22(QGraphicsView* self, QRectF* rect, int xmargin);
void QGraphicsView_EnsureVisible3(QGraphicsView* self, QRectF* rect, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible5(QGraphicsView* self, double x, double y, double w, double h, int xmargin);
void QGraphicsView_EnsureVisible6(QGraphicsView* self, double x, double y, double w, double h, int xmargin, int ymargin);
void QGraphicsView_EnsureVisible23(QGraphicsView* self, QGraphicsItem* item, int xmargin);
void QGraphicsView_EnsureVisible32(QGraphicsView* self, QGraphicsItem* item, int xmargin, int ymargin);
void QGraphicsView_FitInView22(QGraphicsView* self, QRectF* rect, int aspectRadioMode);
void QGraphicsView_FitInView5(QGraphicsView* self, double x, double y, double w, double h, int aspectRadioMode);
void QGraphicsView_FitInView23(QGraphicsView* self, QGraphicsItem* item, int aspectRadioMode);
void QGraphicsView_Render2(QGraphicsView* self, QPainter* painter, QRectF* target);
void QGraphicsView_Render3(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source);
void QGraphicsView_Render4(QGraphicsView* self, QPainter* painter, QRectF* target, QRect* source, int aspectRatioMode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items22(const QGraphicsView* self, QRect* rect, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items5(const QGraphicsView* self, int x, int y, int w, int h, int mode);
struct miqt_array /* of QGraphicsItem* */  QGraphicsView_Items24(const QGraphicsView* self, QPainterPath* path, int mode);
void QGraphicsView_InvalidateScene1(QGraphicsView* self, QRectF* rect);
void QGraphicsView_InvalidateScene2(QGraphicsView* self, QRectF* rect, int layers);
bool QGraphicsView_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QGraphicsView_virtualbase_SizeHint(const void* self);
bool QGraphicsView_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QGraphicsView_virtualbase_InputMethodQuery(const void* self, int query);
bool QGraphicsView_override_virtual_SetupViewport(void* self, intptr_t slot);
void QGraphicsView_virtualbase_SetupViewport(void* self, QWidget* widget);
bool QGraphicsView_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_Event(void* self, QEvent* event);
bool QGraphicsView_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_ViewportEvent(void* self, QEvent* event);
bool QGraphicsView_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
bool QGraphicsView_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QGraphicsView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QGraphicsView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QGraphicsView_override_virtual_DropEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QGraphicsView_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
bool QGraphicsView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QGraphicsView_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
bool QGraphicsView_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
bool QGraphicsView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QGraphicsView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QGraphicsView_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
bool QGraphicsView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
bool QGraphicsView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
bool QGraphicsView_override_virtual_WheelEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QGraphicsView_override_virtual_PaintEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_PaintEvent(void* self, QPaintEvent* event);
bool QGraphicsView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QGraphicsView_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QGraphicsView_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
bool QGraphicsView_override_virtual_ShowEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QGraphicsView_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
bool QGraphicsView_override_virtual_DrawBackground(void* self, intptr_t slot);
void QGraphicsView_virtualbase_DrawBackground(void* self, QPainter* painter, QRectF* rect);
bool QGraphicsView_override_virtual_DrawForeground(void* self, intptr_t slot);
void QGraphicsView_virtualbase_DrawForeground(void* self, QPainter* painter, QRectF* rect);
bool QGraphicsView_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QGraphicsView_virtualbase_MinimumSizeHint(const void* self);
bool QGraphicsView_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QGraphicsView_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QGraphicsView_virtualbase_ViewportSizeHint(const void* self);
bool QGraphicsView_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QGraphicsView_override_virtual_DevType(void* self, intptr_t slot);
int QGraphicsView_virtualbase_DevType(const void* self);
bool QGraphicsView_override_virtual_SetVisible(void* self, intptr_t slot);
void QGraphicsView_virtualbase_SetVisible(void* self, bool visible);
bool QGraphicsView_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QGraphicsView_virtualbase_HeightForWidth(const void* self, int param1);
bool QGraphicsView_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_HasHeightForWidth(const void* self);
bool QGraphicsView_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QGraphicsView_virtualbase_PaintEngine(const void* self);
bool QGraphicsView_override_virtual_EnterEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_EnterEvent(void* self, QEvent* event);
bool QGraphicsView_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QGraphicsView_override_virtual_MoveEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QGraphicsView_override_virtual_CloseEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QGraphicsView_override_virtual_TabletEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QGraphicsView_override_virtual_ActionEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QGraphicsView_override_virtual_HideEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QGraphicsView_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QGraphicsView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QGraphicsView_override_virtual_Metric(void* self, intptr_t slot);
int QGraphicsView_virtualbase_Metric(const void* self, int param1);
bool QGraphicsView_override_virtual_InitPainter(void* self, intptr_t slot);
void QGraphicsView_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QGraphicsView_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QGraphicsView_virtualbase_Redirected(const void* self, QPoint* offset);
bool QGraphicsView_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QGraphicsView_virtualbase_SharedPainter(const void* self);
bool QGraphicsView_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QGraphicsView_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QGraphicsView_override_virtual_CustomEvent(void* self, intptr_t slot);
void QGraphicsView_virtualbase_CustomEvent(void* self, QEvent* event);
bool QGraphicsView_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QGraphicsView_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QGraphicsView_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QGraphicsView_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QGraphicsView_Delete(QGraphicsView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
