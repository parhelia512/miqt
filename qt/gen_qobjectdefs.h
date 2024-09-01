#ifndef GEN_QOBJECTDEFS_H
#define GEN_QOBJECTDEFS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QGenericArgument;
class QGenericReturnArgument;
class QMetaClassInfo;
class QMetaEnum;
class QMetaMethod;
class QMetaObject;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#else
class QMetaObject__Connection;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__SuperData)
typedef QMetaObject::SuperData QMetaObject__SuperData;
#else
class QMetaObject__SuperData;
#endif
class QMetaProperty;
class QObject;
#else
typedef struct QByteArray QByteArray;
typedef struct QGenericArgument QGenericArgument;
typedef struct QGenericReturnArgument QGenericReturnArgument;
typedef struct QMetaClassInfo QMetaClassInfo;
typedef struct QMetaEnum QMetaEnum;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMetaObject__SuperData QMetaObject__SuperData;
typedef struct QMetaProperty QMetaProperty;
typedef struct QObject QObject;
#endif

QGenericArgument* QGenericArgument_new();
QGenericArgument* QGenericArgument_new2(QGenericArgument* param1);
QGenericArgument* QGenericArgument_new3(const char* aName);
const char* QGenericArgument_Name(QGenericArgument* self);
void QGenericArgument_Delete(QGenericArgument* self);

QGenericReturnArgument* QGenericReturnArgument_new();
QGenericReturnArgument* QGenericReturnArgument_new2(QGenericReturnArgument* param1);
QGenericReturnArgument* QGenericReturnArgument_new3(const char* aName);
void QGenericReturnArgument_Delete(QGenericReturnArgument* self);

QMetaObject* QMetaObject_new();
QMetaObject* QMetaObject_new2(QMetaObject* param1);
const char* QMetaObject_ClassName(QMetaObject* self);
QMetaObject* QMetaObject_SuperClass(QMetaObject* self);
bool QMetaObject_Inherits(QMetaObject* self, QMetaObject* metaObject);
QObject* QMetaObject_Cast(QMetaObject* self, QObject* obj);
QObject* QMetaObject_CastWithObj(QMetaObject* self, QObject* obj);
void QMetaObject_Tr(QMetaObject* self, const char* s, const char* c, char** _out, int* _out_Strlen);
int QMetaObject_MethodOffset(QMetaObject* self);
int QMetaObject_EnumeratorOffset(QMetaObject* self);
int QMetaObject_PropertyOffset(QMetaObject* self);
int QMetaObject_ClassInfoOffset(QMetaObject* self);
int QMetaObject_ConstructorCount(QMetaObject* self);
int QMetaObject_MethodCount(QMetaObject* self);
int QMetaObject_EnumeratorCount(QMetaObject* self);
int QMetaObject_PropertyCount(QMetaObject* self);
int QMetaObject_ClassInfoCount(QMetaObject* self);
int QMetaObject_IndexOfConstructor(QMetaObject* self, const char* constructor);
int QMetaObject_IndexOfMethod(QMetaObject* self, const char* method);
int QMetaObject_IndexOfSignal(QMetaObject* self, const char* signal);
int QMetaObject_IndexOfSlot(QMetaObject* self, const char* slot);
int QMetaObject_IndexOfEnumerator(QMetaObject* self, const char* name);
int QMetaObject_IndexOfProperty(QMetaObject* self, const char* name);
int QMetaObject_IndexOfClassInfo(QMetaObject* self, const char* name);
QMetaMethod* QMetaObject_Constructor(QMetaObject* self, int index);
QMetaMethod* QMetaObject_Method(QMetaObject* self, int index);
QMetaEnum* QMetaObject_Enumerator(QMetaObject* self, int index);
QMetaProperty* QMetaObject_Property(QMetaObject* self, int index);
QMetaClassInfo* QMetaObject_ClassInfo(QMetaObject* self, int index);
QMetaProperty* QMetaObject_UserProperty(QMetaObject* self);
bool QMetaObject_CheckConnectArgs(const char* signal, const char* method);
bool QMetaObject_CheckConnectArgs2(QMetaMethod* signal, QMetaMethod* method);
QByteArray* QMetaObject_NormalizedSignature(const char* method);
QByteArray* QMetaObject_NormalizedType(const char* typeVal);
QMetaObject__Connection* QMetaObject_Connect(QObject* sender, int signal_index, QObject* receiver, int method_index);
bool QMetaObject_Disconnect(QObject* sender, int signal_index, QObject* receiver, int method_index);
bool QMetaObject_DisconnectOne(QObject* sender, int signal_index, QObject* receiver, int method_index);
void QMetaObject_ConnectSlotsByName(QObject* o);
bool QMetaObject_InvokeMethod(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal);
bool QMetaObject_InvokeMethod2(QObject* obj, const char* member, QGenericReturnArgument* retVal);
bool QMetaObject_InvokeMethod3(QObject* obj, const char* member, uintptr_t typeVal);
bool QMetaObject_InvokeMethod4(QObject* obj, const char* member);
QObject* QMetaObject_NewInstance(QMetaObject* self);
void QMetaObject_Tr3(QMetaObject* self, const char* s, const char* c, int n, char** _out, int* _out_Strlen);
QMetaObject__Connection* QMetaObject_Connect5(QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal);
QMetaObject__Connection* QMetaObject_Connect6(QObject* sender, int signal_index, QObject* receiver, int method_index, int typeVal, int* types);
bool QMetaObject_InvokeMethod5(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0);
bool QMetaObject_InvokeMethod6(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod7(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod8(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod9(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod10(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod11(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod12(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod13(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod14(QObject* obj, const char* member, uintptr_t param3, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_InvokeMethod42(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0);
bool QMetaObject_InvokeMethod52(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod62(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod72(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod82(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod92(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod102(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod112(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod122(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod132(QObject* obj, const char* member, QGenericReturnArgument* retVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_InvokeMethod43(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0);
bool QMetaObject_InvokeMethod53(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod63(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod73(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod83(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod93(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod103(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod113(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod123(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod133(QObject* obj, const char* member, uintptr_t typeVal, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
bool QMetaObject_InvokeMethod32(QObject* obj, const char* member, QGenericArgument* val0);
bool QMetaObject_InvokeMethod44(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1);
bool QMetaObject_InvokeMethod54(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
bool QMetaObject_InvokeMethod64(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
bool QMetaObject_InvokeMethod74(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
bool QMetaObject_InvokeMethod84(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
bool QMetaObject_InvokeMethod94(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
bool QMetaObject_InvokeMethod104(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
bool QMetaObject_InvokeMethod114(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
bool QMetaObject_InvokeMethod124(QObject* obj, const char* member, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
QObject* QMetaObject_NewInstance1(QMetaObject* self, QGenericArgument* val0);
QObject* QMetaObject_NewInstance2(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1);
QObject* QMetaObject_NewInstance3(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2);
QObject* QMetaObject_NewInstance4(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3);
QObject* QMetaObject_NewInstance5(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4);
QObject* QMetaObject_NewInstance6(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5);
QObject* QMetaObject_NewInstance7(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6);
QObject* QMetaObject_NewInstance8(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7);
QObject* QMetaObject_NewInstance9(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8);
QObject* QMetaObject_NewInstance10(QMetaObject* self, QGenericArgument* val0, QGenericArgument* val1, QGenericArgument* val2, QGenericArgument* val3, QGenericArgument* val4, QGenericArgument* val5, QGenericArgument* val6, QGenericArgument* val7, QGenericArgument* val8, QGenericArgument* val9);
void QMetaObject_Delete(QMetaObject* self);

QMetaObject__Connection* QMetaObject__Connection_new();
QMetaObject__Connection* QMetaObject__Connection_new2(QMetaObject__Connection* other);
void QMetaObject__Connection_Delete(QMetaObject__Connection* self);

QMetaObject__SuperData* QMetaObject__SuperData_new();
QMetaObject__SuperData* QMetaObject__SuperData_new2(QMetaObject* mo);
QMetaObject__SuperData* QMetaObject__SuperData_new3(QMetaObject__SuperData* param1);
QMetaObject* QMetaObject__SuperData_OperatorMinusGreater(QMetaObject__SuperData* self);
void QMetaObject__SuperData_Delete(QMetaObject__SuperData* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif