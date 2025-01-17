#pragma once
#ifndef MIQT_QT6_GEN_QTRANSPOSEPROXYMODEL_H
#define MIQT_QT6_GEN_QTRANSPOSEPROXYMODEL_H

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
class QTransposeProxyModel;
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
typedef struct QTransposeProxyModel QTransposeProxyModel;
typedef struct QVariant QVariant;
#endif

QTransposeProxyModel* QTransposeProxyModel_new();
QTransposeProxyModel* QTransposeProxyModel_new2(QObject* parent);
void QTransposeProxyModel_virtbase(QTransposeProxyModel* src, QAbstractProxyModel** outptr_QAbstractProxyModel);
QMetaObject* QTransposeProxyModel_MetaObject(const QTransposeProxyModel* self);
void* QTransposeProxyModel_Metacast(QTransposeProxyModel* self, const char* param1);
struct miqt_string QTransposeProxyModel_Tr(const char* s);
void QTransposeProxyModel_SetSourceModel(QTransposeProxyModel* self, QAbstractItemModel* newSourceModel);
int QTransposeProxyModel_RowCount(const QTransposeProxyModel* self, QModelIndex* parent);
int QTransposeProxyModel_ColumnCount(const QTransposeProxyModel* self, QModelIndex* parent);
QVariant* QTransposeProxyModel_HeaderData(const QTransposeProxyModel* self, int section, int orientation, int role);
bool QTransposeProxyModel_SetHeaderData(QTransposeProxyModel* self, int section, int orientation, QVariant* value, int role);
bool QTransposeProxyModel_SetItemData(QTransposeProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
QSize* QTransposeProxyModel_Span(const QTransposeProxyModel* self, QModelIndex* index);
struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_ItemData(const QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_MapFromSource(const QTransposeProxyModel* self, QModelIndex* sourceIndex);
QModelIndex* QTransposeProxyModel_MapToSource(const QTransposeProxyModel* self, QModelIndex* proxyIndex);
QModelIndex* QTransposeProxyModel_Parent(const QTransposeProxyModel* self, QModelIndex* index);
QModelIndex* QTransposeProxyModel_Index(const QTransposeProxyModel* self, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_InsertRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_RemoveRows(QTransposeProxyModel* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_MoveRows(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_InsertColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_RemoveColumns(QTransposeProxyModel* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_MoveColumns(QTransposeProxyModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QTransposeProxyModel_Sort(QTransposeProxyModel* self, int column, int order);
struct miqt_string QTransposeProxyModel_Tr2(const char* s, const char* c);
struct miqt_string QTransposeProxyModel_Tr3(const char* s, const char* c, int n);
bool QTransposeProxyModel_override_virtual_SetSourceModel(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_SetSourceModel(void* self, QAbstractItemModel* newSourceModel);
bool QTransposeProxyModel_override_virtual_RowCount(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_RowCount(const void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_ColumnCount(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_ColumnCount(const void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_HeaderData(void* self, intptr_t slot);
QVariant* QTransposeProxyModel_virtualbase_HeaderData(const void* self, int section, int orientation, int role);
bool QTransposeProxyModel_override_virtual_SetHeaderData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_SetHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QTransposeProxyModel_override_virtual_SetItemData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_SetItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QTransposeProxyModel_override_virtual_Span(void* self, intptr_t slot);
QSize* QTransposeProxyModel_virtualbase_Span(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_ItemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QTransposeProxyModel_virtualbase_ItemData(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_MapFromSource(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_MapFromSource(const void* self, QModelIndex* sourceIndex);
bool QTransposeProxyModel_override_virtual_MapToSource(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_MapToSource(const void* self, QModelIndex* proxyIndex);
bool QTransposeProxyModel_override_virtual_Parent(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_Parent(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_Index(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_Index(const void* self, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_InsertRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_InsertRows(void* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_RemoveRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_RemoveRows(void* self, int row, int count, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_MoveRows(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_MoveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_override_virtual_InsertColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_InsertColumns(void* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_RemoveColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_RemoveColumns(void* self, int column, int count, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_MoveColumns(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_MoveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QTransposeProxyModel_override_virtual_Sort(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_Sort(void* self, int column, int order);
bool QTransposeProxyModel_override_virtual_MapSelectionToSource(void* self, intptr_t slot);
QItemSelection* QTransposeProxyModel_virtualbase_MapSelectionToSource(const void* self, QItemSelection* selection);
bool QTransposeProxyModel_override_virtual_MapSelectionFromSource(void* self, intptr_t slot);
QItemSelection* QTransposeProxyModel_virtualbase_MapSelectionFromSource(const void* self, QItemSelection* selection);
bool QTransposeProxyModel_override_virtual_Submit(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_Submit(void* self);
bool QTransposeProxyModel_override_virtual_Revert(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_Revert(void* self);
bool QTransposeProxyModel_override_virtual_Data(void* self, intptr_t slot);
QVariant* QTransposeProxyModel_virtualbase_Data(const void* self, QModelIndex* proxyIndex, int role);
bool QTransposeProxyModel_override_virtual_Flags(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_Flags(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_SetData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_SetData(void* self, QModelIndex* index, QVariant* value, int role);
bool QTransposeProxyModel_override_virtual_ClearItemData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_ClearItemData(void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_Buddy(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_Buddy(const void* self, QModelIndex* index);
bool QTransposeProxyModel_override_virtual_CanFetchMore(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_CanFetchMore(const void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_FetchMore(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_FetchMore(void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_HasChildren(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_HasChildren(const void* self, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_Sibling(void* self, intptr_t slot);
QModelIndex* QTransposeProxyModel_virtualbase_Sibling(const void* self, int row, int column, QModelIndex* idx);
bool QTransposeProxyModel_override_virtual_MimeData(void* self, intptr_t slot);
QMimeData* QTransposeProxyModel_virtualbase_MimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QTransposeProxyModel_override_virtual_CanDropMimeData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_CanDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_DropMimeData(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_DropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QTransposeProxyModel_override_virtual_MimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QTransposeProxyModel_virtualbase_MimeTypes(const void* self);
bool QTransposeProxyModel_override_virtual_SupportedDragActions(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_SupportedDragActions(const void* self);
bool QTransposeProxyModel_override_virtual_SupportedDropActions(void* self, intptr_t slot);
int QTransposeProxyModel_virtualbase_SupportedDropActions(const void* self);
bool QTransposeProxyModel_override_virtual_RoleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QTransposeProxyModel_virtualbase_RoleNames(const void* self);
bool QTransposeProxyModel_override_virtual_Match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QTransposeProxyModel_virtualbase_Match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QTransposeProxyModel_override_virtual_MultiData(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_MultiData(const void* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QTransposeProxyModel_override_virtual_ResetInternalData(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_ResetInternalData(void* self);
bool QTransposeProxyModel_override_virtual_Event(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_Event(void* self, QEvent* event);
bool QTransposeProxyModel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QTransposeProxyModel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QTransposeProxyModel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QTransposeProxyModel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QTransposeProxyModel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QTransposeProxyModel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QTransposeProxyModel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QTransposeProxyModel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QTransposeProxyModel_Delete(QTransposeProxyModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
