#include <QAbstractButton>
#include <QCommandLinkButton>
#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEvent>
#include <QPoint>
#include <QPushButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qcommandlinkbutton.h>
#include "gen_qcommandlinkbutton.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQCommandLinkButton : public virtual QCommandLinkButton {
public:

	MiqtVirtualQCommandLinkButton(QWidget* parent): QCommandLinkButton(parent) {};
	MiqtVirtualQCommandLinkButton(): QCommandLinkButton() {};
	MiqtVirtualQCommandLinkButton(const QString& text): QCommandLinkButton(text) {};
	MiqtVirtualQCommandLinkButton(const QString& text, const QString& description): QCommandLinkButton(text, description) {};
	MiqtVirtualQCommandLinkButton(const QString& text, QWidget* parent): QCommandLinkButton(text, parent) {};
	MiqtVirtualQCommandLinkButton(const QString& text, const QString& description, QWidget* parent): QCommandLinkButton(text, description, parent) {};

	virtual ~MiqtVirtualQCommandLinkButton() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QCommandLinkButton::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCommandLinkButton_SizeHint(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QCommandLinkButton::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QCommandLinkButton::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QCommandLinkButton_HeightForWidth(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QCommandLinkButton::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QCommandLinkButton::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QCommandLinkButton_MinimumSizeHint(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QCommandLinkButton::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (handle__Event == 0) {
			return QCommandLinkButton::event(e);
		}
		
		QEvent* sigval1 = e;

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* e) {

		return QCommandLinkButton::event(e);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (handle__PaintEvent == 0) {
			QCommandLinkButton::paintEvent(param1);
			return;
		}
		
		QPaintEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* param1) {

		QCommandLinkButton::paintEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QCommandLinkButton::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QCommandLinkButton::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (handle__FocusInEvent == 0) {
			QCommandLinkButton::focusInEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* param1) {

		QCommandLinkButton::focusInEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (handle__FocusOutEvent == 0) {
			QCommandLinkButton::focusOutEvent(param1);
			return;
		}
		
		QFocusEvent* sigval1 = param1;

		miqt_exec_callback_QCommandLinkButton_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* param1) {

		QCommandLinkButton::focusOutEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HitButton = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (handle__HitButton == 0) {
			return QCommandLinkButton::hitButton(pos);
		}
		
		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);

		bool callback_return_value = miqt_exec_callback_QCommandLinkButton_HitButton(const_cast<MiqtVirtualQCommandLinkButton*>(this), handle__HitButton, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HitButton(QPoint* pos) const {

		return QCommandLinkButton::hitButton(*pos);

	}

};

QCommandLinkButton* QCommandLinkButton_new(QWidget* parent) {
	return new MiqtVirtualQCommandLinkButton(parent);
}

QCommandLinkButton* QCommandLinkButton_new2() {
	return new MiqtVirtualQCommandLinkButton();
}

QCommandLinkButton* QCommandLinkButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCommandLinkButton(text_QString);
}

QCommandLinkButton* QCommandLinkButton_new4(struct miqt_string text, struct miqt_string description) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, description_QString);
}

QCommandLinkButton* QCommandLinkButton_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, parent);
}

QCommandLinkButton* QCommandLinkButton_new6(struct miqt_string text, struct miqt_string description, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new MiqtVirtualQCommandLinkButton(text_QString, description_QString, parent);
}

void QCommandLinkButton_virtbase(QCommandLinkButton* src, QPushButton** outptr_QPushButton) {
	*outptr_QPushButton = static_cast<QPushButton*>(src);
}

QMetaObject* QCommandLinkButton_MetaObject(const QCommandLinkButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCommandLinkButton_Metacast(QCommandLinkButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCommandLinkButton_Tr(const char* s) {
	QString _ret = QCommandLinkButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_TrUtf8(const char* s) {
	QString _ret = QCommandLinkButton::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_Description(const QCommandLinkButton* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLinkButton_SetDescription(QCommandLinkButton* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

struct miqt_string QCommandLinkButton_Tr2(const char* s, const char* c) {
	QString _ret = QCommandLinkButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCommandLinkButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_TrUtf82(const char* s, const char* c) {
	QString _ret = QCommandLinkButton::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommandLinkButton_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCommandLinkButton::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommandLinkButton_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__SizeHint = slot;
}

QSize* QCommandLinkButton_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_SizeHint();
}

void QCommandLinkButton_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__HeightForWidth = slot;
}

int QCommandLinkButton_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_HeightForWidth(param1);
}

void QCommandLinkButton_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__MinimumSizeHint = slot;
}

QSize* QCommandLinkButton_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_MinimumSizeHint();
}

void QCommandLinkButton_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__Event = slot;
}

bool QCommandLinkButton_virtualbase_Event(void* self, QEvent* e) {
	return ( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_Event(e);
}

void QCommandLinkButton_override_virtual_PaintEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__PaintEvent = slot;
}

void QCommandLinkButton_virtualbase_PaintEvent(void* self, QPaintEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_PaintEvent(param1);
}

void QCommandLinkButton_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__KeyPressEvent = slot;
}

void QCommandLinkButton_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_KeyPressEvent(param1);
}

void QCommandLinkButton_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__FocusInEvent = slot;
}

void QCommandLinkButton_virtualbase_FocusInEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_FocusInEvent(param1);
}

void QCommandLinkButton_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__FocusOutEvent = slot;
}

void QCommandLinkButton_virtualbase_FocusOutEvent(void* self, QFocusEvent* param1) {
	( (MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_FocusOutEvent(param1);
}

void QCommandLinkButton_override_virtual_HitButton(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCommandLinkButton*>( (QCommandLinkButton*)(self) )->handle__HitButton = slot;
}

bool QCommandLinkButton_virtualbase_HitButton(const void* self, QPoint* pos) {
	return ( (const MiqtVirtualQCommandLinkButton*)(self) )->virtualbase_HitButton(pos);
}

void QCommandLinkButton_Delete(QCommandLinkButton* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQCommandLinkButton*>( self );
	} else {
		delete self;
	}
}

