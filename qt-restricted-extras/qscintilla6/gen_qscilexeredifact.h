#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXEREDIFACT_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCILEXEREDIFACT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QColor;
class QEvent;
class QFont;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSettings;
class QTimerEvent;
class QsciLexer;
class QsciLexerEDIFACT;
class QsciScintilla;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QTimerEvent QTimerEvent;
typedef struct QsciLexer QsciLexer;
typedef struct QsciLexerEDIFACT QsciLexerEDIFACT;
typedef struct QsciScintilla QsciScintilla;
#endif

QsciLexerEDIFACT* QsciLexerEDIFACT_new();
QsciLexerEDIFACT* QsciLexerEDIFACT_new2(QObject* parent);
void QsciLexerEDIFACT_virtbase(QsciLexerEDIFACT* src, QsciLexer** outptr_QsciLexer);
QMetaObject* QsciLexerEDIFACT_MetaObject(const QsciLexerEDIFACT* self);
void* QsciLexerEDIFACT_Metacast(QsciLexerEDIFACT* self, const char* param1);
struct miqt_string QsciLexerEDIFACT_Tr(const char* s);
const char* QsciLexerEDIFACT_Language(const QsciLexerEDIFACT* self);
const char* QsciLexerEDIFACT_Lexer(const QsciLexerEDIFACT* self);
QColor* QsciLexerEDIFACT_DefaultColor(const QsciLexerEDIFACT* self, int style);
struct miqt_string QsciLexerEDIFACT_Description(const QsciLexerEDIFACT* self, int style);
struct miqt_string QsciLexerEDIFACT_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerEDIFACT_Tr3(const char* s, const char* c, int n);
bool QsciLexerEDIFACT_override_virtual_Language(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_Language(const void* self);
bool QsciLexerEDIFACT_override_virtual_Lexer(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_Lexer(const void* self);
bool QsciLexerEDIFACT_override_virtual_LexerId(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_LexerId(const void* self);
bool QsciLexerEDIFACT_override_virtual_AutoCompletionFillups(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_AutoCompletionFillups(const void* self);
bool QsciLexerEDIFACT_override_virtual_AutoCompletionWordSeparators(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QsciLexerEDIFACT_virtualbase_AutoCompletionWordSeparators(const void* self);
bool QsciLexerEDIFACT_override_virtual_BlockEnd(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_BlockEnd(const void* self, int* style);
bool QsciLexerEDIFACT_override_virtual_BlockLookback(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_BlockLookback(const void* self);
bool QsciLexerEDIFACT_override_virtual_BlockStart(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_BlockStart(const void* self, int* style);
bool QsciLexerEDIFACT_override_virtual_BlockStartKeyword(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_BlockStartKeyword(const void* self, int* style);
bool QsciLexerEDIFACT_override_virtual_BraceStyle(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_BraceStyle(const void* self);
bool QsciLexerEDIFACT_override_virtual_CaseSensitive(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_CaseSensitive(const void* self);
bool QsciLexerEDIFACT_override_virtual_Color(void* self, intptr_t slot);
QColor* QsciLexerEDIFACT_virtualbase_Color(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_EolFill(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_EolFill(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_Font(void* self, intptr_t slot);
QFont* QsciLexerEDIFACT_virtualbase_Font(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_IndentationGuideView(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_IndentationGuideView(const void* self);
bool QsciLexerEDIFACT_override_virtual_Keywords(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_Keywords(const void* self, int set);
bool QsciLexerEDIFACT_override_virtual_DefaultStyle(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_DefaultStyle(const void* self);
bool QsciLexerEDIFACT_override_virtual_Description(void* self, intptr_t slot);
struct miqt_string QsciLexerEDIFACT_virtualbase_Description(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_Paper(void* self, intptr_t slot);
QColor* QsciLexerEDIFACT_virtualbase_Paper(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_DefaultColorWithStyle(void* self, intptr_t slot);
QColor* QsciLexerEDIFACT_virtualbase_DefaultColorWithStyle(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_DefaultEolFill(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_DefaultEolFill(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_DefaultFontWithStyle(void* self, intptr_t slot);
QFont* QsciLexerEDIFACT_virtualbase_DefaultFontWithStyle(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_DefaultPaperWithStyle(void* self, intptr_t slot);
QColor* QsciLexerEDIFACT_virtualbase_DefaultPaperWithStyle(const void* self, int style);
bool QsciLexerEDIFACT_override_virtual_SetEditor(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_SetEditor(void* self, QsciScintilla* editor);
bool QsciLexerEDIFACT_override_virtual_RefreshProperties(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_RefreshProperties(void* self);
bool QsciLexerEDIFACT_override_virtual_StyleBitsNeeded(void* self, intptr_t slot);
int QsciLexerEDIFACT_virtualbase_StyleBitsNeeded(const void* self);
bool QsciLexerEDIFACT_override_virtual_WordCharacters(void* self, intptr_t slot);
const char* QsciLexerEDIFACT_virtualbase_WordCharacters(const void* self);
bool QsciLexerEDIFACT_override_virtual_SetAutoIndentStyle(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_SetAutoIndentStyle(void* self, int autoindentstyle);
bool QsciLexerEDIFACT_override_virtual_SetColor(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_SetColor(void* self, QColor* c, int style);
bool QsciLexerEDIFACT_override_virtual_SetEolFill(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_SetEolFill(void* self, bool eoffill, int style);
bool QsciLexerEDIFACT_override_virtual_SetFont(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_SetFont(void* self, QFont* f, int style);
bool QsciLexerEDIFACT_override_virtual_SetPaper(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_SetPaper(void* self, QColor* c, int style);
bool QsciLexerEDIFACT_override_virtual_ReadProperties(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_ReadProperties(void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerEDIFACT_override_virtual_WriteProperties(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_WriteProperties(const void* self, QSettings* qs, struct miqt_string prefix);
bool QsciLexerEDIFACT_override_virtual_Event(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_Event(void* self, QEvent* event);
bool QsciLexerEDIFACT_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciLexerEDIFACT_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QsciLexerEDIFACT_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciLexerEDIFACT_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciLexerEDIFACT_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciLexerEDIFACT_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciLexerEDIFACT_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciLexerEDIFACT_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciLexerEDIFACT_Delete(QsciLexerEDIFACT* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
