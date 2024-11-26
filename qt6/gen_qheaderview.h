#pragma once
#ifndef MIQT_QT6_GEN_QHEADERVIEW_H
#define MIQT_QT6_GEN_QHEADERVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QAbstractItemView;
class QAbstractScrollArea;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHeaderView;
class QInputMethodEvent;
class QItemSelection;
class QItemSelectionModel;
class QKeyEvent;
class QMetaObject;
class QModelIndex;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPainter;
class QPoint;
class QRect;
class QRegion;
class QResizeEvent;
class QSize;
class QStyleOptionHeader;
class QStyleOptionViewItem;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHeaderView QHeaderView;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionHeader QStyleOptionHeader;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

void QHeaderView_new(int orientation, QHeaderView** outptr_QHeaderView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QHeaderView_new2(int orientation, QWidget* parent, QHeaderView** outptr_QHeaderView, QAbstractItemView** outptr_QAbstractItemView, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QHeaderView_MetaObject(const QHeaderView* self);
void* QHeaderView_Metacast(QHeaderView* self, const char* param1);
struct miqt_string QHeaderView_Tr(const char* s);
void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model);
int QHeaderView_Orientation(const QHeaderView* self);
int QHeaderView_Offset(const QHeaderView* self);
int QHeaderView_Length(const QHeaderView* self);
QSize* QHeaderView_SizeHint(const QHeaderView* self);
void QHeaderView_SetVisible(QHeaderView* self, bool v);
int QHeaderView_SectionSizeHint(const QHeaderView* self, int logicalIndex);
int QHeaderView_VisualIndexAt(const QHeaderView* self, int position);
int QHeaderView_LogicalIndexAt(const QHeaderView* self, int position);
int QHeaderView_LogicalIndexAt2(const QHeaderView* self, int x, int y);
int QHeaderView_LogicalIndexAtWithPos(const QHeaderView* self, QPoint* pos);
int QHeaderView_SectionSize(const QHeaderView* self, int logicalIndex);
int QHeaderView_SectionPosition(const QHeaderView* self, int logicalIndex);
int QHeaderView_SectionViewportPosition(const QHeaderView* self, int logicalIndex);
void QHeaderView_MoveSection(QHeaderView* self, int from, int to);
void QHeaderView_SwapSections(QHeaderView* self, int first, int second);
void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size);
void QHeaderView_ResizeSections(QHeaderView* self, int mode);
bool QHeaderView_IsSectionHidden(const QHeaderView* self, int logicalIndex);
void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide);
int QHeaderView_HiddenSectionCount(const QHeaderView* self);
void QHeaderView_HideSection(QHeaderView* self, int logicalIndex);
void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex);
int QHeaderView_Count(const QHeaderView* self);
int QHeaderView_VisualIndex(const QHeaderView* self, int logicalIndex);
int QHeaderView_LogicalIndex(const QHeaderView* self, int visualIndex);
void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable);
bool QHeaderView_SectionsMovable(const QHeaderView* self);
void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable);
bool QHeaderView_IsFirstSectionMovable(const QHeaderView* self);
void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable);
bool QHeaderView_SectionsClickable(const QHeaderView* self);
void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight);
bool QHeaderView_HighlightSections(const QHeaderView* self);
int QHeaderView_SectionResizeMode(const QHeaderView* self, int logicalIndex);
void QHeaderView_SetSectionResizeMode(QHeaderView* self, int mode);
void QHeaderView_SetSectionResizeMode2(QHeaderView* self, int logicalIndex, int mode);
void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision);
int QHeaderView_ResizeContentsPrecision(const QHeaderView* self);
int QHeaderView_StretchSectionCount(const QHeaderView* self);
void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show);
bool QHeaderView_IsSortIndicatorShown(const QHeaderView* self);
void QHeaderView_SetSortIndicator(QHeaderView* self, int logicalIndex, int order);
int QHeaderView_SortIndicatorSection(const QHeaderView* self);
int QHeaderView_SortIndicatorOrder(const QHeaderView* self);
void QHeaderView_SetSortIndicatorClearable(QHeaderView* self, bool clearable);
bool QHeaderView_IsSortIndicatorClearable(const QHeaderView* self);
bool QHeaderView_StretchLastSection(const QHeaderView* self);
void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch);
bool QHeaderView_CascadingSectionResizes(const QHeaderView* self);
void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable);
int QHeaderView_DefaultSectionSize(const QHeaderView* self);
void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size);
void QHeaderView_ResetDefaultSectionSize(QHeaderView* self);
int QHeaderView_MinimumSectionSize(const QHeaderView* self);
void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size);
int QHeaderView_MaximumSectionSize(const QHeaderView* self);
void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size);
int QHeaderView_DefaultAlignment(const QHeaderView* self);
void QHeaderView_SetDefaultAlignment(QHeaderView* self, int alignment);
void QHeaderView_DoItemsLayout(QHeaderView* self);
bool QHeaderView_SectionsMoved(const QHeaderView* self);
bool QHeaderView_SectionsHidden(const QHeaderView* self);
struct miqt_string QHeaderView_SaveState(const QHeaderView* self);
bool QHeaderView_RestoreState(QHeaderView* self, struct miqt_string state);
void QHeaderView_Reset(QHeaderView* self);
void QHeaderView_SetOffset(QHeaderView* self, int offset);
void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex);
void QHeaderView_SetOffsetToLastSection(QHeaderView* self);
void QHeaderView_HeaderDataChanged(QHeaderView* self, int orientation, int logicalFirst, int logicalLast);
void QHeaderView_SectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex);
void QHeaderView_connect_SectionMoved(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize);
void QHeaderView_connect_SectionResized(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionPressed(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionPressed(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionClicked(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionEntered(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionDoubleClicked(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount);
void QHeaderView_connect_SectionCountChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_SectionHandleDoubleClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionHandleDoubleClicked(QHeaderView* self, intptr_t slot);
void QHeaderView_GeometriesChanged(QHeaderView* self);
void QHeaderView_connect_GeometriesChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_SortIndicatorChanged(QHeaderView* self, int logicalIndex, int order);
void QHeaderView_connect_SortIndicatorChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_SortIndicatorClearableChanged(QHeaderView* self, bool clearable);
void QHeaderView_connect_SortIndicatorClearableChanged(QHeaderView* self, intptr_t slot);
void QHeaderView_CurrentChanged(QHeaderView* self, QModelIndex* current, QModelIndex* old);
bool QHeaderView_Event(QHeaderView* self, QEvent* e);
void QHeaderView_PaintEvent(QHeaderView* self, QPaintEvent* e);
void QHeaderView_MousePressEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_MouseMoveEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_MouseReleaseEvent(QHeaderView* self, QMouseEvent* e);
void QHeaderView_MouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e);
bool QHeaderView_ViewportEvent(QHeaderView* self, QEvent* e);
void QHeaderView_PaintSection(const QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex);
QSize* QHeaderView_SectionSizeFromContents(const QHeaderView* self, int logicalIndex);
int QHeaderView_HorizontalOffset(const QHeaderView* self);
int QHeaderView_VerticalOffset(const QHeaderView* self);
void QHeaderView_UpdateGeometries(QHeaderView* self);
void QHeaderView_ScrollContentsBy(QHeaderView* self, int dx, int dy);
void QHeaderView_DataChanged(QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QHeaderView_RowsInserted(QHeaderView* self, QModelIndex* parent, int start, int end);
QRect* QHeaderView_VisualRect(const QHeaderView* self, QModelIndex* index);
void QHeaderView_ScrollTo(QHeaderView* self, QModelIndex* index, int hint);
QModelIndex* QHeaderView_IndexAt(const QHeaderView* self, QPoint* p);
bool QHeaderView_IsIndexHidden(const QHeaderView* self, QModelIndex* index);
QModelIndex* QHeaderView_MoveCursor(QHeaderView* self, int param1, int param2);
void QHeaderView_SetSelection(QHeaderView* self, QRect* rect, int flags);
QRegion* QHeaderView_VisualRegionForSelection(const QHeaderView* self, QItemSelection* selection);
void QHeaderView_InitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex);
void QHeaderView_InitStyleOption(const QHeaderView* self, QStyleOptionHeader* option);
struct miqt_string QHeaderView_Tr2(const char* s, const char* c);
struct miqt_string QHeaderView_Tr3(const char* s, const char* c, int n);
void QHeaderView_override_virtual_SetModel(void* self, intptr_t slot);
void QHeaderView_virtualbase_SetModel(void* self, QAbstractItemModel* model);
void QHeaderView_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QHeaderView_virtualbase_SizeHint(const void* self);
void QHeaderView_override_virtual_SetVisible(void* self, intptr_t slot);
void QHeaderView_virtualbase_SetVisible(void* self, bool v);
void QHeaderView_override_virtual_DoItemsLayout(void* self, intptr_t slot);
void QHeaderView_virtualbase_DoItemsLayout(void* self);
void QHeaderView_override_virtual_Reset(void* self, intptr_t slot);
void QHeaderView_virtualbase_Reset(void* self);
void QHeaderView_override_virtual_CurrentChanged(void* self, intptr_t slot);
void QHeaderView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* old);
void QHeaderView_override_virtual_Event(void* self, intptr_t slot);
bool QHeaderView_virtualbase_Event(void* self, QEvent* e);
void QHeaderView_override_virtual_PaintEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_PaintEvent(void* self, QPaintEvent* e);
void QHeaderView_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
void QHeaderView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
void QHeaderView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
void QHeaderView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e);
void QHeaderView_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QHeaderView_virtualbase_ViewportEvent(void* self, QEvent* e);
void QHeaderView_override_virtual_PaintSection(void* self, intptr_t slot);
void QHeaderView_virtualbase_PaintSection(const void* self, QPainter* painter, QRect* rect, int logicalIndex);
void QHeaderView_override_virtual_SectionSizeFromContents(void* self, intptr_t slot);
QSize* QHeaderView_virtualbase_SectionSizeFromContents(const void* self, int logicalIndex);
void QHeaderView_override_virtual_HorizontalOffset(void* self, intptr_t slot);
int QHeaderView_virtualbase_HorizontalOffset(const void* self);
void QHeaderView_override_virtual_VerticalOffset(void* self, intptr_t slot);
int QHeaderView_virtualbase_VerticalOffset(const void* self);
void QHeaderView_override_virtual_UpdateGeometries(void* self, intptr_t slot);
void QHeaderView_virtualbase_UpdateGeometries(void* self);
void QHeaderView_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QHeaderView_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QHeaderView_override_virtual_DataChanged(void* self, intptr_t slot);
void QHeaderView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QHeaderView_override_virtual_RowsInserted(void* self, intptr_t slot);
void QHeaderView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end);
void QHeaderView_override_virtual_VisualRect(void* self, intptr_t slot);
QRect* QHeaderView_virtualbase_VisualRect(const void* self, QModelIndex* index);
void QHeaderView_override_virtual_ScrollTo(void* self, intptr_t slot);
void QHeaderView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint);
void QHeaderView_override_virtual_IndexAt(void* self, intptr_t slot);
QModelIndex* QHeaderView_virtualbase_IndexAt(const void* self, QPoint* p);
void QHeaderView_override_virtual_IsIndexHidden(void* self, intptr_t slot);
bool QHeaderView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index);
void QHeaderView_override_virtual_MoveCursor(void* self, intptr_t slot);
QModelIndex* QHeaderView_virtualbase_MoveCursor(void* self, int param1, int param2);
void QHeaderView_override_virtual_SetSelection(void* self, intptr_t slot);
void QHeaderView_virtualbase_SetSelection(void* self, QRect* rect, int flags);
void QHeaderView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot);
QRegion* QHeaderView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection);
void QHeaderView_override_virtual_InitStyleOptionForIndex(void* self, intptr_t slot);
void QHeaderView_virtualbase_InitStyleOptionForIndex(const void* self, QStyleOptionHeader* option, int logicalIndex);
void QHeaderView_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QHeaderView_virtualbase_InitStyleOption(const void* self, QStyleOptionHeader* option);
void QHeaderView_override_virtual_SetSelectionModel(void* self, intptr_t slot);
void QHeaderView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel);
void QHeaderView_override_virtual_KeyboardSearch(void* self, intptr_t slot);
void QHeaderView_virtualbase_KeyboardSearch(void* self, struct miqt_string search);
void QHeaderView_override_virtual_SizeHintForRow(void* self, intptr_t slot);
int QHeaderView_virtualbase_SizeHintForRow(const void* self, int row);
void QHeaderView_override_virtual_SizeHintForColumn(void* self, intptr_t slot);
int QHeaderView_virtualbase_SizeHintForColumn(const void* self, int column);
void QHeaderView_override_virtual_ItemDelegateForIndex(void* self, intptr_t slot);
QAbstractItemDelegate* QHeaderView_virtualbase_ItemDelegateForIndex(const void* self, QModelIndex* index);
void QHeaderView_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QHeaderView_virtualbase_InputMethodQuery(const void* self, int query);
void QHeaderView_override_virtual_SetRootIndex(void* self, intptr_t slot);
void QHeaderView_virtualbase_SetRootIndex(void* self, QModelIndex* index);
void QHeaderView_override_virtual_SelectAll(void* self, intptr_t slot);
void QHeaderView_virtualbase_SelectAll(void* self);
void QHeaderView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot);
void QHeaderView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
void QHeaderView_override_virtual_SelectionChanged(void* self, intptr_t slot);
void QHeaderView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
void QHeaderView_override_virtual_UpdateEditorData(void* self, intptr_t slot);
void QHeaderView_virtualbase_UpdateEditorData(void* self);
void QHeaderView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot);
void QHeaderView_virtualbase_UpdateEditorGeometries(void* self);
void QHeaderView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot);
void QHeaderView_virtualbase_VerticalScrollbarAction(void* self, int action);
void QHeaderView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot);
void QHeaderView_virtualbase_HorizontalScrollbarAction(void* self, int action);
void QHeaderView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot);
void QHeaderView_virtualbase_VerticalScrollbarValueChanged(void* self, int value);
void QHeaderView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot);
void QHeaderView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value);
void QHeaderView_override_virtual_CloseEditor(void* self, intptr_t slot);
void QHeaderView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint);
void QHeaderView_override_virtual_CommitData(void* self, intptr_t slot);
void QHeaderView_virtualbase_CommitData(void* self, QWidget* editor);
void QHeaderView_override_virtual_EditorDestroyed(void* self, intptr_t slot);
void QHeaderView_virtualbase_EditorDestroyed(void* self, QObject* editor);
void QHeaderView_override_virtual_SelectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QHeaderView_virtualbase_SelectedIndexes(const void* self);
void QHeaderView_override_virtual_Edit2(void* self, intptr_t slot);
bool QHeaderView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event);
void QHeaderView_override_virtual_SelectionCommand(void* self, intptr_t slot);
int QHeaderView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event);
void QHeaderView_override_virtual_StartDrag(void* self, intptr_t slot);
void QHeaderView_virtualbase_StartDrag(void* self, int supportedActions);
void QHeaderView_override_virtual_InitViewItemOption(void* self, intptr_t slot);
void QHeaderView_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option);
void QHeaderView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QHeaderView_virtualbase_FocusNextPrevChild(void* self, bool next);
void QHeaderView_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QHeaderView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QHeaderView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QHeaderView_override_virtual_DropEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_DropEvent(void* self, QDropEvent* event);
void QHeaderView_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QHeaderView_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QHeaderView_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QHeaderView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QHeaderView_override_virtual_TimerEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QHeaderView_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QHeaderView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
void QHeaderView_override_virtual_EventFilter(void* self, intptr_t slot);
bool QHeaderView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
void QHeaderView_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QHeaderView_virtualbase_ViewportSizeHint(const void* self);
void QHeaderView_Delete(QHeaderView* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
