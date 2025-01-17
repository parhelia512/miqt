#pragma once
#ifndef MIQT_QT6_GEN_QABSTRACTPROXYMODEL_H
#define MIQT_QT6_GEN_QABSTRACTPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QAbstractProxyModel;
class QChildEvent;
class QEvent;
class QItemSelection;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QModelRoleDataSpan;
class QObject;
class QSize;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QAbstractProxyModel* QAbstractProxyModel_new();
QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent);
void QAbstractProxyModel_virtbase(QAbstractProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QAbstractProxyModel_MetaObject(const QAbstractProxyModel* self);
void* QAbstractProxyModel_Metacast(QAbstractProxyModel* self, const char* param1);
struct miqt_string QAbstractProxyModel_Tr(const char* s);
void QAbstractProxyModel_SetSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel);
QAbstractItemModel* QAbstractProxyModel_SourceModel(const QAbstractProxyModel* self);
QModelIndex* QAbstractProxyModel_MapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QAbstractProxyModel_MapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex);
QItemSelection* QAbstractProxyModel_MapSelectionToSource(const QAbstractProxyModel* self, QItemSelection* selection);
QItemSelection* QAbstractProxyModel_MapSelectionFromSource(const QAbstractProxyModel* self, QItemSelection* selection);
bool QAbstractProxyModel_Submit(QAbstractProxyModel* self);
void QAbstractProxyModel_Revert(QAbstractProxyModel* self);
QVariant* QAbstractProxyModel_Data(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role);
QVariant* QAbstractProxyModel_HeaderData(const QAbstractProxyModel* self, int section, int orientation, int role);
struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_ItemData(const QAbstractProxyModel* self, QModelIndex* index);
int QAbstractProxyModel_Flags(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_SetData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role);
bool QAbstractProxyModel_SetItemData(QAbstractProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QAbstractProxyModel_SetHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role);
bool QAbstractProxyModel_ClearItemData(QAbstractProxyModel* self, QModelIndex* index);
QModelIndex* QAbstractProxyModel_Buddy(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_CanFetchMore(const QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_FetchMore(QAbstractProxyModel* self, QModelIndex* parent);
void QAbstractProxyModel_Sort(QAbstractProxyModel* self, int column, int order);
QSize* QAbstractProxyModel_Span(const QAbstractProxyModel* self, QModelIndex* index);
bool QAbstractProxyModel_HasChildren(const QAbstractProxyModel* self, QModelIndex* parent);
QModelIndex* QAbstractProxyModel_Sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx);
QMimeData* QAbstractProxyModel_MimeData(const QAbstractProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QAbstractProxyModel_CanDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_DropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_MimeTypes(const QAbstractProxyModel* self);
int QAbstractProxyModel_SupportedDragActions(const QAbstractProxyModel* self);
int QAbstractProxyModel_SupportedDropActions(const QAbstractProxyModel* self);
struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_RoleNames(const QAbstractProxyModel* self);
struct miqt_string QAbstractProxyModel_Tr2(const char* s, const char* c);
struct miqt_string QAbstractProxyModel_Tr3(const char* s, const char* c, int n);
bool QAbstractProxyModel_override_virtual_SetSourceModel(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_SetSourceModel(void* self, QAbstractItemModel* sourceModel);
bool QAbstractProxyModel_override_virtual_MapToSource(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_MapToSource(const void* self, QModelIndex* proxyIndex);
bool QAbstractProxyModel_override_virtual_MapFromSource(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_MapFromSource(const void* self, QModelIndex* sourceIndex);
bool QAbstractProxyModel_override_virtual_MapSelectionToSource(void* self, intptr_t slot);
QItemSelection* QAbstractProxyModel_virtualbase_MapSelectionToSource(const void* self, QItemSelection* selection);
bool QAbstractProxyModel_override_virtual_MapSelectionFromSource(void* self, intptr_t slot);
QItemSelection* QAbstractProxyModel_virtualbase_MapSelectionFromSource(const void* self, QItemSelection* selection);
bool QAbstractProxyModel_override_virtual_Submit(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_Submit(void* self);
bool QAbstractProxyModel_override_virtual_Revert(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_Revert(void* self);
bool QAbstractProxyModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QAbstractProxyModel_virtualbase_Data(const void* self, QModelIndex* proxyIndex, int role);
bool QAbstractProxyModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QAbstractProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
bool QAbstractProxyModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_virtualbase_ItemData(const void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_Flags(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_Flags(const void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_SetData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
bool QAbstractProxyModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QAbstractProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QAbstractProxyModel_override_virtual_ClearItemData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_ClearItemData(void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_Sort(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_Sort(void* self, int column, int order);
bool QAbstractProxyModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QAbstractProxyModel_virtualbase_Span(const void* self, QModelIndex* index);
bool QAbstractProxyModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
bool QAbstractProxyModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QAbstractProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QAbstractProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_virtualbase_MimeTypes(const void* self);
bool QAbstractProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_SupportedDragActions(const void* self);
bool QAbstractProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_SupportedDropActions(const void* self);
bool QAbstractProxyModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_virtualbase_RoleNames(const void* self);
bool QAbstractProxyModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QAbstractProxyModel_virtualbase_Parent(const void* self, QModelIndex* child);
bool QAbstractProxyModel_override_virtual_RowCount(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QAbstractProxyModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
bool QAbstractProxyModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QAbstractProxyModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QAbstractProxyModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QAbstractProxyModel_override_virtual_MultiData(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_MultiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QAbstractProxyModel_override_virtual_ResetInternalData(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_ResetInternalData(void* self);
bool QAbstractProxyModel_override_virtual_Event(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_Event(void* self, QEvent* event);
bool QAbstractProxyModel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAbstractProxyModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractProxyModel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAbstractProxyModel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAbstractProxyModel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAbstractProxyModel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAbstractProxyModel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAbstractProxyModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAbstractProxyModel_Delete(QAbstractProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
