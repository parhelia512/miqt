#pragma once
#ifndef MIQT_QT_GEN_QMOUSEEVENTTRANSITION_H
#define MIQT_QT_GEN_QMOUSEEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractTransition;
class QChildEvent;
class QEvent;
class QEventTransition;
class QMetaMethod;
class QMetaObject;
class QMouseEventTransition;
class QObject;
class QPainterPath;
class QState;
class QTimerEvent;
#else
typedef struct QAbstractTransition QAbstractTransition;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QEventTransition QEventTransition;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEventTransition QMouseEventTransition;
typedef struct QObject QObject;
typedef struct QPainterPath QPainterPath;
typedef struct QState QState;
typedef struct QTimerEvent QTimerEvent;
#endif

QMouseEventTransition* QMouseEventTransition_new();
QMouseEventTransition* QMouseEventTransition_new2(QObject* object, int typeVal, int button);
QMouseEventTransition* QMouseEventTransition_new3(QState* sourceState);
QMouseEventTransition* QMouseEventTransition_new4(QObject* object, int typeVal, int button, QState* sourceState);
void QMouseEventTransition_virtbase(QMouseEventTransition* src, QEventTransition** outptr_QEventTransition);
QMetaObject* QMouseEventTransition_MetaObject(const QMouseEventTransition* self);
void* QMouseEventTransition_Metacast(QMouseEventTransition* self, const char* param1);
struct miqt_string QMouseEventTransition_Tr(const char* s);
struct miqt_string QMouseEventTransition_TrUtf8(const char* s);
int QMouseEventTransition_Button(const QMouseEventTransition* self);
void QMouseEventTransition_SetButton(QMouseEventTransition* self, int button);
int QMouseEventTransition_ModifierMask(const QMouseEventTransition* self);
void QMouseEventTransition_SetModifierMask(QMouseEventTransition* self, int modifiers);
QPainterPath* QMouseEventTransition_HitTestPath(const QMouseEventTransition* self);
void QMouseEventTransition_SetHitTestPath(QMouseEventTransition* self, QPainterPath* path);
void QMouseEventTransition_OnTransition(QMouseEventTransition* self, QEvent* event);
bool QMouseEventTransition_EventTest(QMouseEventTransition* self, QEvent* event);
struct miqt_string QMouseEventTransition_Tr2(const char* s, const char* c);
struct miqt_string QMouseEventTransition_Tr3(const char* s, const char* c, int n);
struct miqt_string QMouseEventTransition_TrUtf82(const char* s, const char* c);
struct miqt_string QMouseEventTransition_TrUtf83(const char* s, const char* c, int n);
bool QMouseEventTransition_override_virtual_OnTransition(void* self, intptr_t slot);
void QMouseEventTransition_virtualbase_OnTransition(void* self, QEvent* event);
bool QMouseEventTransition_override_virtual_EventTest(void* self, intptr_t slot);
bool QMouseEventTransition_virtualbase_EventTest(void* self, QEvent* event);
bool QMouseEventTransition_override_virtual_Event(void* self, intptr_t slot);
bool QMouseEventTransition_virtualbase_Event(void* self, QEvent* e);
bool QMouseEventTransition_override_virtual_EventFilter(void* self, intptr_t slot);
bool QMouseEventTransition_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QMouseEventTransition_override_virtual_TimerEvent(void* self, intptr_t slot);
void QMouseEventTransition_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QMouseEventTransition_override_virtual_ChildEvent(void* self, intptr_t slot);
void QMouseEventTransition_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QMouseEventTransition_override_virtual_CustomEvent(void* self, intptr_t slot);
void QMouseEventTransition_virtualbase_CustomEvent(void* self, QEvent* event);
bool QMouseEventTransition_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QMouseEventTransition_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QMouseEventTransition_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QMouseEventTransition_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QMouseEventTransition_Delete(QMouseEventTransition* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
