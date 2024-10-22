#ifndef GEN_QSTORAGEINFO_H
#define GEN_QSTORAGEINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QDir;
class QStorageInfo;
#else
typedef struct QByteArray QByteArray;
typedef struct QDir QDir;
typedef struct QStorageInfo QStorageInfo;
#endif

QStorageInfo* QStorageInfo_new();
QStorageInfo* QStorageInfo_new2(struct miqt_string path);
QStorageInfo* QStorageInfo_new3(QDir* dir);
QStorageInfo* QStorageInfo_new4(QStorageInfo* other);
void QStorageInfo_OperatorAssign(QStorageInfo* self, QStorageInfo* other);
void QStorageInfo_Swap(QStorageInfo* self, QStorageInfo* other);
void QStorageInfo_SetPath(QStorageInfo* self, struct miqt_string path);
struct miqt_string QStorageInfo_RootPath(const QStorageInfo* self);
struct miqt_string QStorageInfo_Device(const QStorageInfo* self);
struct miqt_string QStorageInfo_Subvolume(const QStorageInfo* self);
struct miqt_string QStorageInfo_FileSystemType(const QStorageInfo* self);
struct miqt_string QStorageInfo_Name(const QStorageInfo* self);
struct miqt_string QStorageInfo_DisplayName(const QStorageInfo* self);
long long QStorageInfo_BytesTotal(const QStorageInfo* self);
long long QStorageInfo_BytesFree(const QStorageInfo* self);
long long QStorageInfo_BytesAvailable(const QStorageInfo* self);
int QStorageInfo_BlockSize(const QStorageInfo* self);
bool QStorageInfo_IsRoot(const QStorageInfo* self);
bool QStorageInfo_IsReadOnly(const QStorageInfo* self);
bool QStorageInfo_IsReady(const QStorageInfo* self);
bool QStorageInfo_IsValid(const QStorageInfo* self);
void QStorageInfo_Refresh(QStorageInfo* self);
struct miqt_array* QStorageInfo_MountedVolumes();
QStorageInfo* QStorageInfo_Root();
void QStorageInfo_Delete(QStorageInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif