#ifndef GEN_QSTYLEHINTS_H
#define GEN_QSTYLEHINTS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QMetaObject;
class QStyleHints;
#else
typedef struct QChar QChar;
typedef struct QMetaObject QMetaObject;
typedef struct QStyleHints QStyleHints;
#endif

QMetaObject* QStyleHints_MetaObject(QStyleHints* self);
void QStyleHints_Tr(const char* s, char** _out, int* _out_Strlen);
void QStyleHints_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QStyleHints_SetMouseDoubleClickInterval(QStyleHints* self, int mouseDoubleClickInterval);
int QStyleHints_MouseDoubleClickInterval(QStyleHints* self);
int QStyleHints_MouseDoubleClickDistance(QStyleHints* self);
int QStyleHints_TouchDoubleTapDistance(QStyleHints* self);
void QStyleHints_SetMousePressAndHoldInterval(QStyleHints* self, int mousePressAndHoldInterval);
int QStyleHints_MousePressAndHoldInterval(QStyleHints* self);
void QStyleHints_SetStartDragDistance(QStyleHints* self, int startDragDistance);
int QStyleHints_StartDragDistance(QStyleHints* self);
void QStyleHints_SetStartDragTime(QStyleHints* self, int startDragTime);
int QStyleHints_StartDragTime(QStyleHints* self);
int QStyleHints_StartDragVelocity(QStyleHints* self);
void QStyleHints_SetKeyboardInputInterval(QStyleHints* self, int keyboardInputInterval);
int QStyleHints_KeyboardInputInterval(QStyleHints* self);
int QStyleHints_KeyboardAutoRepeatRate(QStyleHints* self);
void QStyleHints_SetCursorFlashTime(QStyleHints* self, int cursorFlashTime);
int QStyleHints_CursorFlashTime(QStyleHints* self);
bool QStyleHints_ShowIsFullScreen(QStyleHints* self);
bool QStyleHints_ShowIsMaximized(QStyleHints* self);
bool QStyleHints_ShowShortcutsInContextMenus(QStyleHints* self);
void QStyleHints_SetShowShortcutsInContextMenus(QStyleHints* self, bool showShortcutsInContextMenus);
int QStyleHints_PasswordMaskDelay(QStyleHints* self);
QChar* QStyleHints_PasswordMaskCharacter(QStyleHints* self);
double QStyleHints_FontSmoothingGamma(QStyleHints* self);
bool QStyleHints_UseRtlExtensions(QStyleHints* self);
bool QStyleHints_SetFocusOnTouchRelease(QStyleHints* self);
uintptr_t QStyleHints_TabFocusBehavior(QStyleHints* self);
void QStyleHints_SetTabFocusBehavior(QStyleHints* self, uintptr_t tabFocusBehavior);
bool QStyleHints_SingleClickActivation(QStyleHints* self);
bool QStyleHints_UseHoverEffects(QStyleHints* self);
void QStyleHints_SetUseHoverEffects(QStyleHints* self, bool useHoverEffects);
int QStyleHints_WheelScrollLines(QStyleHints* self);
void QStyleHints_SetWheelScrollLines(QStyleHints* self, int scrollLines);
void QStyleHints_SetMouseQuickSelectionThreshold(QStyleHints* self, int threshold);
int QStyleHints_MouseQuickSelectionThreshold(QStyleHints* self);
void QStyleHints_CursorFlashTimeChanged(QStyleHints* self, int cursorFlashTime);
void QStyleHints_connect_CursorFlashTimeChanged(QStyleHints* self, void* slot);
void QStyleHints_KeyboardInputIntervalChanged(QStyleHints* self, int keyboardInputInterval);
void QStyleHints_connect_KeyboardInputIntervalChanged(QStyleHints* self, void* slot);
void QStyleHints_MouseDoubleClickIntervalChanged(QStyleHints* self, int mouseDoubleClickInterval);
void QStyleHints_connect_MouseDoubleClickIntervalChanged(QStyleHints* self, void* slot);
void QStyleHints_MousePressAndHoldIntervalChanged(QStyleHints* self, int mousePressAndHoldInterval);
void QStyleHints_connect_MousePressAndHoldIntervalChanged(QStyleHints* self, void* slot);
void QStyleHints_StartDragDistanceChanged(QStyleHints* self, int startDragDistance);
void QStyleHints_connect_StartDragDistanceChanged(QStyleHints* self, void* slot);
void QStyleHints_StartDragTimeChanged(QStyleHints* self, int startDragTime);
void QStyleHints_connect_StartDragTimeChanged(QStyleHints* self, void* slot);
void QStyleHints_TabFocusBehaviorChanged(QStyleHints* self, uintptr_t tabFocusBehavior);
void QStyleHints_connect_TabFocusBehaviorChanged(QStyleHints* self, void* slot);
void QStyleHints_UseHoverEffectsChanged(QStyleHints* self, bool useHoverEffects);
void QStyleHints_connect_UseHoverEffectsChanged(QStyleHints* self, void* slot);
void QStyleHints_ShowShortcutsInContextMenusChanged(QStyleHints* self, bool param1);
void QStyleHints_connect_ShowShortcutsInContextMenusChanged(QStyleHints* self, void* slot);
void QStyleHints_WheelScrollLinesChanged(QStyleHints* self, int scrollLines);
void QStyleHints_connect_WheelScrollLinesChanged(QStyleHints* self, void* slot);
void QStyleHints_MouseQuickSelectionThresholdChanged(QStyleHints* self, int threshold);
void QStyleHints_connect_MouseQuickSelectionThresholdChanged(QStyleHints* self, void* slot);
void QStyleHints_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStyleHints_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStyleHints_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QStyleHints_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QStyleHints_Delete(QStyleHints* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif