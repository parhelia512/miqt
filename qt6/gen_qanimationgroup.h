#pragma once
#ifndef MIQT_QT6_GEN_QANIMATIONGROUP_H
#define MIQT_QT6_GEN_QANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QAnimationGroup;
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QAnimationGroup* QAnimationGroup_new();
QAnimationGroup* QAnimationGroup_new2(QObject* parent);
void QAnimationGroup_virtbase(QAnimationGroup* src, QAbstractAnimation** outptr_QAbstractAnimation);
QMetaObject* QAnimationGroup_MetaObject(const QAnimationGroup* self);
void* QAnimationGroup_Metacast(QAnimationGroup* self, const char* param1);
struct miqt_string QAnimationGroup_Tr(const char* s);
QAbstractAnimation* QAnimationGroup_AnimationAt(const QAnimationGroup* self, int index);
int QAnimationGroup_AnimationCount(const QAnimationGroup* self);
int QAnimationGroup_IndexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation);
void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index);
void QAnimationGroup_Clear(QAnimationGroup* self);
bool QAnimationGroup_Event(QAnimationGroup* self, QEvent* event);
struct miqt_string QAnimationGroup_Tr2(const char* s, const char* c);
struct miqt_string QAnimationGroup_Tr3(const char* s, const char* c, int n);
bool QAnimationGroup_override_virtual_Event(void* self, intptr_t slot);
bool QAnimationGroup_virtualbase_Event(void* self, QEvent* event);
bool QAnimationGroup_override_virtual_Duration(void* self, intptr_t slot);
int QAnimationGroup_virtualbase_Duration(const void* self);
bool QAnimationGroup_override_virtual_UpdateCurrentTime(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_UpdateCurrentTime(void* self, int currentTime);
bool QAnimationGroup_override_virtual_UpdateState(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_UpdateState(void* self, int newState, int oldState);
bool QAnimationGroup_override_virtual_UpdateDirection(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_UpdateDirection(void* self, int direction);
bool QAnimationGroup_override_virtual_EventFilter(void* self, intptr_t slot);
bool QAnimationGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QAnimationGroup_override_virtual_TimerEvent(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QAnimationGroup_override_virtual_ChildEvent(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QAnimationGroup_override_virtual_CustomEvent(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_CustomEvent(void* self, QEvent* event);
bool QAnimationGroup_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QAnimationGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QAnimationGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QAnimationGroup_Delete(QAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
