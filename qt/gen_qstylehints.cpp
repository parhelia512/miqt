#include <QChar>
#include <QMetaObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleHints>
#include "qstylehints.h"

#include "gen_qstylehints.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QStyleHints_MetaObject(QStyleHints* self) {
	return (QMetaObject*) const_cast<const QStyleHints*>(self)->metaObject();
}

void QStyleHints_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_SetMouseDoubleClickInterval(QStyleHints* self, int mouseDoubleClickInterval) {
	self->setMouseDoubleClickInterval(static_cast<int>(mouseDoubleClickInterval));
}

int QStyleHints_MouseDoubleClickInterval(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->mouseDoubleClickInterval();
}

int QStyleHints_MouseDoubleClickDistance(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->mouseDoubleClickDistance();
}

int QStyleHints_TouchDoubleTapDistance(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->touchDoubleTapDistance();
}

void QStyleHints_SetMousePressAndHoldInterval(QStyleHints* self, int mousePressAndHoldInterval) {
	self->setMousePressAndHoldInterval(static_cast<int>(mousePressAndHoldInterval));
}

int QStyleHints_MousePressAndHoldInterval(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->mousePressAndHoldInterval();
}

void QStyleHints_SetStartDragDistance(QStyleHints* self, int startDragDistance) {
	self->setStartDragDistance(static_cast<int>(startDragDistance));
}

int QStyleHints_StartDragDistance(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->startDragDistance();
}

void QStyleHints_SetStartDragTime(QStyleHints* self, int startDragTime) {
	self->setStartDragTime(static_cast<int>(startDragTime));
}

int QStyleHints_StartDragTime(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->startDragTime();
}

int QStyleHints_StartDragVelocity(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->startDragVelocity();
}

void QStyleHints_SetKeyboardInputInterval(QStyleHints* self, int keyboardInputInterval) {
	self->setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QStyleHints_KeyboardInputInterval(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->keyboardInputInterval();
}

int QStyleHints_KeyboardAutoRepeatRate(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->keyboardAutoRepeatRate();
}

void QStyleHints_SetCursorFlashTime(QStyleHints* self, int cursorFlashTime) {
	self->setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QStyleHints_CursorFlashTime(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->cursorFlashTime();
}

bool QStyleHints_ShowIsFullScreen(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->showIsFullScreen();
}

bool QStyleHints_ShowIsMaximized(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->showIsMaximized();
}

bool QStyleHints_ShowShortcutsInContextMenus(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->showShortcutsInContextMenus();
}

void QStyleHints_SetShowShortcutsInContextMenus(QStyleHints* self, bool showShortcutsInContextMenus) {
	self->setShowShortcutsInContextMenus(showShortcutsInContextMenus);
}

int QStyleHints_PasswordMaskDelay(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->passwordMaskDelay();
}

QChar* QStyleHints_PasswordMaskCharacter(QStyleHints* self) {
	QChar ret = const_cast<const QStyleHints*>(self)->passwordMaskCharacter();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

double QStyleHints_FontSmoothingGamma(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->fontSmoothingGamma();
}

bool QStyleHints_UseRtlExtensions(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->useRtlExtensions();
}

bool QStyleHints_SetFocusOnTouchRelease(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->setFocusOnTouchRelease();
}

uintptr_t QStyleHints_TabFocusBehavior(QStyleHints* self) {
	Qt::TabFocusBehavior ret = const_cast<const QStyleHints*>(self)->tabFocusBehavior();
	return static_cast<uintptr_t>(ret);
}

void QStyleHints_SetTabFocusBehavior(QStyleHints* self, uintptr_t tabFocusBehavior) {
	self->setTabFocusBehavior(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

bool QStyleHints_SingleClickActivation(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->singleClickActivation();
}

bool QStyleHints_UseHoverEffects(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->useHoverEffects();
}

void QStyleHints_SetUseHoverEffects(QStyleHints* self, bool useHoverEffects) {
	self->setUseHoverEffects(useHoverEffects);
}

int QStyleHints_WheelScrollLines(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->wheelScrollLines();
}

void QStyleHints_SetWheelScrollLines(QStyleHints* self, int scrollLines) {
	self->setWheelScrollLines(static_cast<int>(scrollLines));
}

void QStyleHints_SetMouseQuickSelectionThreshold(QStyleHints* self, int threshold) {
	self->setMouseQuickSelectionThreshold(static_cast<int>(threshold));
}

int QStyleHints_MouseQuickSelectionThreshold(QStyleHints* self) {
	return const_cast<const QStyleHints*>(self)->mouseQuickSelectionThreshold();
}

void QStyleHints_CursorFlashTimeChanged(QStyleHints* self, int cursorFlashTime) {
	self->cursorFlashTimeChanged(static_cast<int>(cursorFlashTime));
}

void QStyleHints_connect_CursorFlashTimeChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::cursorFlashTimeChanged), self, [=](int cursorFlashTime) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_KeyboardInputIntervalChanged(QStyleHints* self, int keyboardInputInterval) {
	self->keyboardInputIntervalChanged(static_cast<int>(keyboardInputInterval));
}

void QStyleHints_connect_KeyboardInputIntervalChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::keyboardInputIntervalChanged), self, [=](int keyboardInputInterval) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_MouseDoubleClickIntervalChanged(QStyleHints* self, int mouseDoubleClickInterval) {
	self->mouseDoubleClickIntervalChanged(static_cast<int>(mouseDoubleClickInterval));
}

void QStyleHints_connect_MouseDoubleClickIntervalChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseDoubleClickIntervalChanged), self, [=](int mouseDoubleClickInterval) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_MousePressAndHoldIntervalChanged(QStyleHints* self, int mousePressAndHoldInterval) {
	self->mousePressAndHoldIntervalChanged(static_cast<int>(mousePressAndHoldInterval));
}

void QStyleHints_connect_MousePressAndHoldIntervalChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mousePressAndHoldIntervalChanged), self, [=](int mousePressAndHoldInterval) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_StartDragDistanceChanged(QStyleHints* self, int startDragDistance) {
	self->startDragDistanceChanged(static_cast<int>(startDragDistance));
}

void QStyleHints_connect_StartDragDistanceChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragDistanceChanged), self, [=](int startDragDistance) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_StartDragTimeChanged(QStyleHints* self, int startDragTime) {
	self->startDragTimeChanged(static_cast<int>(startDragTime));
}

void QStyleHints_connect_StartDragTimeChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::startDragTimeChanged), self, [=](int startDragTime) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_TabFocusBehaviorChanged(QStyleHints* self, uintptr_t tabFocusBehavior) {
	self->tabFocusBehaviorChanged(static_cast<Qt::TabFocusBehavior>(tabFocusBehavior));
}

void QStyleHints_connect_TabFocusBehaviorChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(Qt::TabFocusBehavior)>(&QStyleHints::tabFocusBehaviorChanged), self, [=](Qt::TabFocusBehavior tabFocusBehavior) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_UseHoverEffectsChanged(QStyleHints* self, bool useHoverEffects) {
	self->useHoverEffectsChanged(useHoverEffects);
}

void QStyleHints_connect_UseHoverEffectsChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::useHoverEffectsChanged), self, [=](bool useHoverEffects) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_ShowShortcutsInContextMenusChanged(QStyleHints* self, bool param1) {
	self->showShortcutsInContextMenusChanged(param1);
}

void QStyleHints_connect_ShowShortcutsInContextMenusChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(bool)>(&QStyleHints::showShortcutsInContextMenusChanged), self, [=](bool param1) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_WheelScrollLinesChanged(QStyleHints* self, int scrollLines) {
	self->wheelScrollLinesChanged(static_cast<int>(scrollLines));
}

void QStyleHints_connect_WheelScrollLinesChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::wheelScrollLinesChanged), self, [=](int scrollLines) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_MouseQuickSelectionThresholdChanged(QStyleHints* self, int threshold) {
	self->mouseQuickSelectionThresholdChanged(static_cast<int>(threshold));
}

void QStyleHints_connect_MouseQuickSelectionThresholdChanged(QStyleHints* self, void* slot) {
	QStyleHints::connect(self, static_cast<void (QStyleHints::*)(int)>(&QStyleHints::mouseQuickSelectionThresholdChanged), self, [=](int threshold) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QStyleHints_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QStyleHints::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QStyleHints_Delete(QStyleHints* self) {
	delete self;
}
