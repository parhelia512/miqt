#ifndef GEN_QABSTRACTITEMVIEW_H
#define GEN_QABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QAbstractItemView;
class QItemSelectionModel;
class QMetaObject;
class QModelIndex;
class QPoint;
class QRect;
class QSize;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QMetaObject* QAbstractItemView_MetaObject(QAbstractItemView* self);
void QAbstractItemView_Tr(const char* s, char** _out, int* _out_Strlen);
void QAbstractItemView_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QAbstractItemView_SetModel(QAbstractItemView* self, QAbstractItemModel* model);
QAbstractItemModel* QAbstractItemView_Model(QAbstractItemView* self);
void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel);
QItemSelectionModel* QAbstractItemView_SelectionModel(QAbstractItemView* self);
void QAbstractItemView_SetItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_ItemDelegate(QAbstractItemView* self);
void QAbstractItemView_SetSelectionMode(QAbstractItemView* self, uintptr_t mode);
uintptr_t QAbstractItemView_SelectionMode(QAbstractItemView* self);
void QAbstractItemView_SetSelectionBehavior(QAbstractItemView* self, uintptr_t behavior);
uintptr_t QAbstractItemView_SelectionBehavior(QAbstractItemView* self);
QModelIndex* QAbstractItemView_CurrentIndex(QAbstractItemView* self);
QModelIndex* QAbstractItemView_RootIndex(QAbstractItemView* self);
void QAbstractItemView_SetEditTriggers(QAbstractItemView* self, int triggers);
int QAbstractItemView_EditTriggers(QAbstractItemView* self);
void QAbstractItemView_SetVerticalScrollMode(QAbstractItemView* self, uintptr_t mode);
uintptr_t QAbstractItemView_VerticalScrollMode(QAbstractItemView* self);
void QAbstractItemView_ResetVerticalScrollMode(QAbstractItemView* self);
void QAbstractItemView_SetHorizontalScrollMode(QAbstractItemView* self, uintptr_t mode);
uintptr_t QAbstractItemView_HorizontalScrollMode(QAbstractItemView* self);
void QAbstractItemView_ResetHorizontalScrollMode(QAbstractItemView* self);
void QAbstractItemView_SetAutoScroll(QAbstractItemView* self, bool enable);
bool QAbstractItemView_HasAutoScroll(QAbstractItemView* self);
void QAbstractItemView_SetAutoScrollMargin(QAbstractItemView* self, int margin);
int QAbstractItemView_AutoScrollMargin(QAbstractItemView* self);
void QAbstractItemView_SetTabKeyNavigation(QAbstractItemView* self, bool enable);
bool QAbstractItemView_TabKeyNavigation(QAbstractItemView* self);
void QAbstractItemView_SetDropIndicatorShown(QAbstractItemView* self, bool enable);
bool QAbstractItemView_ShowDropIndicator(QAbstractItemView* self);
void QAbstractItemView_SetDragEnabled(QAbstractItemView* self, bool enable);
bool QAbstractItemView_DragEnabled(QAbstractItemView* self);
void QAbstractItemView_SetDragDropOverwriteMode(QAbstractItemView* self, bool overwrite);
bool QAbstractItemView_DragDropOverwriteMode(QAbstractItemView* self);
void QAbstractItemView_SetDragDropMode(QAbstractItemView* self, uintptr_t behavior);
uintptr_t QAbstractItemView_DragDropMode(QAbstractItemView* self);
void QAbstractItemView_SetDefaultDropAction(QAbstractItemView* self, uintptr_t dropAction);
uintptr_t QAbstractItemView_DefaultDropAction(QAbstractItemView* self);
void QAbstractItemView_SetAlternatingRowColors(QAbstractItemView* self, bool enable);
bool QAbstractItemView_AlternatingRowColors(QAbstractItemView* self);
void QAbstractItemView_SetIconSize(QAbstractItemView* self, QSize* size);
QSize* QAbstractItemView_IconSize(QAbstractItemView* self);
void QAbstractItemView_SetTextElideMode(QAbstractItemView* self, uintptr_t mode);
uintptr_t QAbstractItemView_TextElideMode(QAbstractItemView* self);
void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, const char* search, size_t search_Strlen);
QRect* QAbstractItemView_VisualRect(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ScrollTo(QAbstractItemView* self, QModelIndex* index);
QModelIndex* QAbstractItemView_IndexAt(QAbstractItemView* self, QPoint* point);
QSize* QAbstractItemView_SizeHintForIndex(QAbstractItemView* self, QModelIndex* index);
int QAbstractItemView_SizeHintForRow(QAbstractItemView* self, int row);
int QAbstractItemView_SizeHintForColumn(QAbstractItemView* self, int column);
void QAbstractItemView_OpenPersistentEditor(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ClosePersistentEditor(QAbstractItemView* self, QModelIndex* index);
bool QAbstractItemView_IsPersistentEditorOpen(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_SetIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget);
QWidget* QAbstractItemView_IndexWidget(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_SetItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_ItemDelegateForRow(QAbstractItemView* self, int row);
void QAbstractItemView_SetItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QAbstractItemView_ItemDelegateForColumn(QAbstractItemView* self, int column);
QAbstractItemDelegate* QAbstractItemView_ItemDelegateWithIndex(QAbstractItemView* self, QModelIndex* index);
QVariant* QAbstractItemView_InputMethodQuery(QAbstractItemView* self, uintptr_t query);
void QAbstractItemView_Reset(QAbstractItemView* self);
void QAbstractItemView_SetRootIndex(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_DoItemsLayout(QAbstractItemView* self);
void QAbstractItemView_SelectAll(QAbstractItemView* self);
void QAbstractItemView_Edit(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ClearSelection(QAbstractItemView* self);
void QAbstractItemView_SetCurrentIndex(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_ScrollToTop(QAbstractItemView* self);
void QAbstractItemView_ScrollToBottom(QAbstractItemView* self);
void QAbstractItemView_Update(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_Pressed(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_Pressed(QAbstractItemView* self, void* slot);
void QAbstractItemView_Clicked(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_Clicked(QAbstractItemView* self, void* slot);
void QAbstractItemView_DoubleClicked(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_DoubleClicked(QAbstractItemView* self, void* slot);
void QAbstractItemView_Activated(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_Activated(QAbstractItemView* self, void* slot);
void QAbstractItemView_Entered(QAbstractItemView* self, QModelIndex* index);
void QAbstractItemView_connect_Entered(QAbstractItemView* self, void* slot);
void QAbstractItemView_ViewportEntered(QAbstractItemView* self);
void QAbstractItemView_connect_ViewportEntered(QAbstractItemView* self, void* slot);
void QAbstractItemView_IconSizeChanged(QAbstractItemView* self, QSize* size);
void QAbstractItemView_connect_IconSizeChanged(QAbstractItemView* self, void* slot);
void QAbstractItemView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractItemView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractItemView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAbstractItemView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAbstractItemView_ScrollTo2(QAbstractItemView* self, QModelIndex* index, uintptr_t hint);
void QAbstractItemView_Delete(QAbstractItemView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif