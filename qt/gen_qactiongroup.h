#ifndef GEN_QACTIONGROUP_H
#define GEN_QACTIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionGroup;
class QIcon;
class QMetaObject;
class QObject;
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QIcon QIcon;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QActionGroup* QActionGroup_new(QObject* parent);
QMetaObject* QActionGroup_MetaObject(QActionGroup* self);
void QActionGroup_Tr(const char* s, char** _out, int* _out_Strlen);
void QActionGroup_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a);
QAction* QActionGroup_AddActionWithText(QActionGroup* self, const char* text, size_t text_Strlen);
QAction* QActionGroup_AddAction2(QActionGroup* self, QIcon* icon, const char* text, size_t text_Strlen);
void QActionGroup_RemoveAction(QActionGroup* self, QAction* a);
void QActionGroup_Actions(QActionGroup* self, QAction*** _out, size_t* _out_len);
QAction* QActionGroup_CheckedAction(QActionGroup* self);
bool QActionGroup_IsExclusive(QActionGroup* self);
bool QActionGroup_IsEnabled(QActionGroup* self);
bool QActionGroup_IsVisible(QActionGroup* self);
uintptr_t QActionGroup_ExclusionPolicy(QActionGroup* self);
void QActionGroup_SetEnabled(QActionGroup* self, bool enabled);
void QActionGroup_SetDisabled(QActionGroup* self, bool b);
void QActionGroup_SetVisible(QActionGroup* self, bool visible);
void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive);
void QActionGroup_SetExclusionPolicy(QActionGroup* self, uintptr_t policy);
void QActionGroup_Triggered(QActionGroup* self, QAction* param1);
void QActionGroup_connect_Triggered(QActionGroup* self, void* slot);
void QActionGroup_Hovered(QActionGroup* self, QAction* param1);
void QActionGroup_connect_Hovered(QActionGroup* self, void* slot);
void QActionGroup_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QActionGroup_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QActionGroup_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QActionGroup_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QActionGroup_Delete(QActionGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif