#ifndef GEN_QFONTDIALOG_H
#define GEN_QFONTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFont;
class QFontDialog;
class QMetaObject;
class QWidget;
#else
typedef struct QFont QFont;
typedef struct QFontDialog QFontDialog;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QFontDialog* QFontDialog_new();
QFontDialog* QFontDialog_new2(QFont* initial);
QFontDialog* QFontDialog_new3(QWidget* parent);
QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent);
QMetaObject* QFontDialog_MetaObject(QFontDialog* self);
void QFontDialog_Tr(const char* s, char** _out, int* _out_Strlen);
void QFontDialog_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font);
QFont* QFontDialog_CurrentFont(QFontDialog* self);
QFont* QFontDialog_SelectedFont(QFontDialog* self);
void QFontDialog_SetOption(QFontDialog* self, uintptr_t option);
bool QFontDialog_TestOption(QFontDialog* self, uintptr_t option);
void QFontDialog_SetOptions(QFontDialog* self, int options);
int QFontDialog_Options(QFontDialog* self);
void QFontDialog_SetVisible(QFontDialog* self, bool visible);
QFont* QFontDialog_GetFont(bool* ok);
QFont* QFontDialog_GetFont2(bool* ok, QFont* initial);
void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font);
void QFontDialog_connect_CurrentFontChanged(QFontDialog* self, void* slot);
void QFontDialog_FontSelected(QFontDialog* self, QFont* font);
void QFontDialog_connect_FontSelected(QFontDialog* self, void* slot);
void QFontDialog_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFontDialog_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFontDialog_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QFontDialog_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QFontDialog_SetOption2(QFontDialog* self, uintptr_t option, bool on);
QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent);
QFont* QFontDialog_GetFont3(bool* ok, QFont* initial, QWidget* parent);
QFont* QFontDialog_GetFont4(bool* ok, QFont* initial, QWidget* parent, const char* title, size_t title_Strlen);
QFont* QFontDialog_GetFont5(bool* ok, QFont* initial, QWidget* parent, const char* title, size_t title_Strlen, int options);
void QFontDialog_Delete(QFontDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif