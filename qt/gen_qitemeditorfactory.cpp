#include <QByteArray>
#include <QItemEditorCreatorBase>
#include <QItemEditorFactory>
#include <QWidget>
#include "qitemeditorfactory.h"

#include "gen_qitemeditorfactory.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QWidget* QItemEditorCreatorBase_CreateWidget(QItemEditorCreatorBase* self, QWidget* parent) {
	return const_cast<const QItemEditorCreatorBase*>(self)->createWidget(parent);
}

QByteArray* QItemEditorCreatorBase_ValuePropertyName(QItemEditorCreatorBase* self) {
	QByteArray ret = const_cast<const QItemEditorCreatorBase*>(self)->valuePropertyName();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QItemEditorCreatorBase_OperatorAssign(QItemEditorCreatorBase* self, QItemEditorCreatorBase* param1) {
	self->operator=(*param1);
}

void QItemEditorCreatorBase_Delete(QItemEditorCreatorBase* self) {
	delete self;
}

QItemEditorFactory* QItemEditorFactory_new() {
	return new QItemEditorFactory();
}

QItemEditorFactory* QItemEditorFactory_new2(QItemEditorFactory* param1) {
	return new QItemEditorFactory(*param1);
}

QWidget* QItemEditorFactory_CreateEditor(QItemEditorFactory* self, int userType, QWidget* parent) {
	return const_cast<const QItemEditorFactory*>(self)->createEditor(static_cast<int>(userType), parent);
}

QByteArray* QItemEditorFactory_ValuePropertyName(QItemEditorFactory* self, int userType) {
	QByteArray ret = const_cast<const QItemEditorFactory*>(self)->valuePropertyName(static_cast<int>(userType));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

void QItemEditorFactory_RegisterEditor(QItemEditorFactory* self, int userType, QItemEditorCreatorBase* creator) {
	self->registerEditor(static_cast<int>(userType), creator);
}

QItemEditorFactory* QItemEditorFactory_DefaultFactory() {
	return (QItemEditorFactory*) QItemEditorFactory::defaultFactory();
}

void QItemEditorFactory_SetDefaultFactory(QItemEditorFactory* factory) {
	QItemEditorFactory::setDefaultFactory(factory);
}

void QItemEditorFactory_Delete(QItemEditorFactory* self) {
	delete self;
}
