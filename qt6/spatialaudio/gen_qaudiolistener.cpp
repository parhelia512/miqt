#include <QAudioEngine>
#include <QAudioListener>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QQuaternion>
#include <QTimerEvent>
#include <QVector3D>
#include <qaudiolistener.h>
#include "gen_qaudiolistener.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QAudioListener_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioListener_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioListener_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioListener_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioListener_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioListener_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioListener_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioListener final : public QAudioListener {
public:

	MiqtVirtualQAudioListener(QAudioEngine* engine): QAudioListener(engine) {};

	virtual ~MiqtVirtualQAudioListener() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QAudioListener::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QAudioListener_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QAudioListener::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QAudioListener::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QAudioListener_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QAudioListener::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QAudioListener::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QAudioListener_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QAudioListener::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QAudioListener::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QAudioListener_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QAudioListener::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QAudioListener::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QAudioListener_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QAudioListener::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QAudioListener::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioListener_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QAudioListener::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QAudioListener::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QAudioListener_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QAudioListener::disconnectNotify(*signal);

	}

};

QAudioListener* QAudioListener_new(QAudioEngine* engine) {
	return new MiqtVirtualQAudioListener(engine);
}

void QAudioListener_virtbase(QAudioListener* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

void QAudioListener_SetPosition(QAudioListener* self, QVector3D* pos) {
	self->setPosition(*pos);
}

QVector3D* QAudioListener_Position(const QAudioListener* self) {
	return new QVector3D(self->position());
}

void QAudioListener_SetRotation(QAudioListener* self, QQuaternion* q) {
	self->setRotation(*q);
}

QQuaternion* QAudioListener_Rotation(const QAudioListener* self) {
	return new QQuaternion(self->rotation());
}

QAudioEngine* QAudioListener_Engine(const QAudioListener* self) {
	return self->engine();
}

bool QAudioListener_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QAudioListener_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQAudioListener*)(self) )->virtualbase_Event(event);
}

bool QAudioListener_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QAudioListener_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQAudioListener*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QAudioListener_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QAudioListener_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_TimerEvent(event);
}

bool QAudioListener_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QAudioListener_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_ChildEvent(event);
}

bool QAudioListener_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QAudioListener_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_CustomEvent(event);
}

bool QAudioListener_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QAudioListener_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QAudioListener_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQAudioListener* self_cast = dynamic_cast<MiqtVirtualQAudioListener*>( (QAudioListener*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QAudioListener_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQAudioListener*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QAudioListener_Delete(QAudioListener* self) {
	delete self;
}

