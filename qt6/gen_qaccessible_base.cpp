#include <QAccessible>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__ActivationObserver
#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleEvent>
#include <QAccessibleInterface>
#include <QObject>
#include <qaccessible_base.h>
#include "gen_qaccessible_base.h"
#include "_cgo_export.h"

void QAccessible_InstallActivationObserver(QAccessible__ActivationObserver* param1) {
	QAccessible::installActivationObserver(param1);
}

void QAccessible_RemoveActivationObserver(QAccessible__ActivationObserver* param1) {
	QAccessible::removeActivationObserver(param1);
}

QAccessibleInterface* QAccessible_QueryAccessibleInterface(QObject* param1) {
	return QAccessible::queryAccessibleInterface(param1);
}

unsigned int QAccessible_UniqueId(QAccessibleInterface* iface) {
	QAccessible::Id _ret = QAccessible::uniqueId(iface);
	return static_cast<unsigned int>(_ret);
}

QAccessibleInterface* QAccessible_AccessibleInterface(unsigned int uniqueId) {
	return QAccessible::accessibleInterface(static_cast<QAccessible::Id>(uniqueId));
}

unsigned int QAccessible_RegisterAccessibleInterface(QAccessibleInterface* iface) {
	QAccessible::Id _ret = QAccessible::registerAccessibleInterface(iface);
	return static_cast<unsigned int>(_ret);
}

void QAccessible_DeleteAccessibleInterface(unsigned int uniqueId) {
	QAccessible::deleteAccessibleInterface(static_cast<QAccessible::Id>(uniqueId));
}

void QAccessible_UpdateAccessibility(QAccessibleEvent* event) {
	QAccessible::updateAccessibility(event);
}

bool QAccessible_IsActive() {
	return QAccessible::isActive();
}

void QAccessible_SetActive(bool active) {
	QAccessible::setActive(active);
}

void QAccessible_SetRootObject(QObject* object) {
	QAccessible::setRootObject(object);
}

void QAccessible_Cleanup() {
	QAccessible::cleanup();
}

void QAccessible_Delete(QAccessible* self) {
	delete self;
}

QAccessible__State* QAccessible__State_new() {
	return new QAccessible::State();
}

void QAccessible__State_Delete(QAccessible__State* self) {
	delete self;
}

void QAccessible__ActivationObserver_AccessibilityActiveChanged(QAccessible__ActivationObserver* self, bool active) {
	self->accessibilityActiveChanged(active);
}

void QAccessible__ActivationObserver_OperatorAssign(QAccessible__ActivationObserver* self, QAccessible__ActivationObserver* param1) {
	self->operator=(*param1);
}

void QAccessible__ActivationObserver_Delete(QAccessible__ActivationObserver* self) {
	delete self;
}
