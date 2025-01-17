#include <QChildEvent>
#include <QEvent>
#include <QMediaObject>
#include <QMediaService>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QRadioData>
#include <QRadioTuner>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qradiotuner.h>
#include "gen_qradiotuner.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QRadioTuner_StateChanged(intptr_t, int);
void miqt_exec_callback_QRadioTuner_BandChanged(intptr_t, int);
void miqt_exec_callback_QRadioTuner_FrequencyChanged(intptr_t, int);
void miqt_exec_callback_QRadioTuner_StereoStatusChanged(intptr_t, bool);
void miqt_exec_callback_QRadioTuner_SearchingChanged(intptr_t, bool);
void miqt_exec_callback_QRadioTuner_SignalStrengthChanged(intptr_t, int);
void miqt_exec_callback_QRadioTuner_VolumeChanged(intptr_t, int);
void miqt_exec_callback_QRadioTuner_MutedChanged(intptr_t, bool);
void miqt_exec_callback_QRadioTuner_StationFound(intptr_t, int, struct miqt_string);
void miqt_exec_callback_QRadioTuner_AntennaConnectedChanged(intptr_t, bool);
void miqt_exec_callback_QRadioTuner_ErrorWithError(intptr_t, int);
int miqt_exec_callback_QRadioTuner_Availability(void*, intptr_t);
bool miqt_exec_callback_QRadioTuner_IsAvailable(void*, intptr_t);
QMediaService* miqt_exec_callback_QRadioTuner_Service(void*, intptr_t);
bool miqt_exec_callback_QRadioTuner_Bind(void*, intptr_t, QObject*);
void miqt_exec_callback_QRadioTuner_Unbind(void*, intptr_t, QObject*);
bool miqt_exec_callback_QRadioTuner_Event(void*, intptr_t, QEvent*);
bool miqt_exec_callback_QRadioTuner_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRadioTuner_TimerEvent(void*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRadioTuner_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRadioTuner_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QRadioTuner_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRadioTuner_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRadioTuner final : public QRadioTuner {
public:

	MiqtVirtualQRadioTuner(): QRadioTuner() {};
	MiqtVirtualQRadioTuner(QObject* parent): QRadioTuner(parent) {};

	virtual ~MiqtVirtualQRadioTuner() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Availability = 0;

	// Subclass to allow providing a Go implementation
	virtual QMultimedia::AvailabilityStatus availability() const override {
		if (handle__Availability == 0) {
			return QRadioTuner::availability();
		}
		

		int callback_return_value = miqt_exec_callback_QRadioTuner_Availability(const_cast<MiqtVirtualQRadioTuner*>(this), handle__Availability);

		return static_cast<QMultimedia::AvailabilityStatus>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Availability() const {

		QMultimedia::AvailabilityStatus _ret = QRadioTuner::availability();
		return static_cast<int>(_ret);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__IsAvailable = 0;

	// Subclass to allow providing a Go implementation
	virtual bool isAvailable() const override {
		if (handle__IsAvailable == 0) {
			return QRadioTuner::isAvailable();
		}
		

		bool callback_return_value = miqt_exec_callback_QRadioTuner_IsAvailable(const_cast<MiqtVirtualQRadioTuner*>(this), handle__IsAvailable);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_IsAvailable() const {

		return QRadioTuner::isAvailable();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Service = 0;

	// Subclass to allow providing a Go implementation
	virtual QMediaService* service() const override {
		if (handle__Service == 0) {
			return QRadioTuner::service();
		}
		

		QMediaService* callback_return_value = miqt_exec_callback_QRadioTuner_Service(const_cast<MiqtVirtualQRadioTuner*>(this), handle__Service);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QMediaService* virtualbase_Service() const {

		return QRadioTuner::service();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Bind = 0;

	// Subclass to allow providing a Go implementation
	virtual bool bind(QObject* param1) override {
		if (handle__Bind == 0) {
			return QRadioTuner::bind(param1);
		}
		
		QObject* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QRadioTuner_Bind(this, handle__Bind, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Bind(QObject* param1) {

		return QRadioTuner::bind(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Unbind = 0;

	// Subclass to allow providing a Go implementation
	virtual void unbind(QObject* param1) override {
		if (handle__Unbind == 0) {
			QRadioTuner::unbind(param1);
			return;
		}
		
		QObject* sigval1 = param1;

		miqt_exec_callback_QRadioTuner_Unbind(this, handle__Unbind, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Unbind(QObject* param1) {

		QRadioTuner::unbind(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__Event == 0) {
			return QRadioTuner::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QRadioTuner_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* event) {

		return QRadioTuner::event(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QRadioTuner::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QRadioTuner_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QRadioTuner::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QRadioTuner::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QRadioTuner_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QRadioTuner::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QRadioTuner::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QRadioTuner_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QRadioTuner::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QRadioTuner::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QRadioTuner_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QRadioTuner::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QRadioTuner::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioTuner_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QRadioTuner::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QRadioTuner::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QRadioTuner_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QRadioTuner::disconnectNotify(*signal);

	}

};

QRadioTuner* QRadioTuner_new() {
	return new MiqtVirtualQRadioTuner();
}

QRadioTuner* QRadioTuner_new2(QObject* parent) {
	return new MiqtVirtualQRadioTuner(parent);
}

void QRadioTuner_virtbase(QRadioTuner* src, QMediaObject** outptr_QMediaObject) {
	*outptr_QMediaObject = static_cast<QMediaObject*>(src);
}

QMetaObject* QRadioTuner_MetaObject(const QRadioTuner* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRadioTuner_Metacast(QRadioTuner* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRadioTuner_Tr(const char* s) {
	QString _ret = QRadioTuner::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTuner_TrUtf8(const char* s) {
	QString _ret = QRadioTuner::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QRadioTuner_Availability(const QRadioTuner* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

int QRadioTuner_State(const QRadioTuner* self) {
	QRadioTuner::State _ret = self->state();
	return static_cast<int>(_ret);
}

int QRadioTuner_Band(const QRadioTuner* self) {
	QRadioTuner::Band _ret = self->band();
	return static_cast<int>(_ret);
}

bool QRadioTuner_IsBandSupported(const QRadioTuner* self, int b) {
	return self->isBandSupported(static_cast<QRadioTuner::Band>(b));
}

int QRadioTuner_Frequency(const QRadioTuner* self) {
	return self->frequency();
}

int QRadioTuner_FrequencyStep(const QRadioTuner* self, int band) {
	return self->frequencyStep(static_cast<QRadioTuner::Band>(band));
}

struct miqt_map /* tuple of int and int */  QRadioTuner_FrequencyRange(const QRadioTuner* self, int band) {
	QPair<int, int> _ret = self->frequencyRange(static_cast<QRadioTuner::Band>(band));
	// Convert QPair<> from C++ memory to manually-managed C memory
	int* _first_arr = static_cast<int*>(malloc(sizeof(int)));
	int* _second_arr = static_cast<int*>(malloc(sizeof(int)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

bool QRadioTuner_IsStereo(const QRadioTuner* self) {
	return self->isStereo();
}

void QRadioTuner_SetStereoMode(QRadioTuner* self, int mode) {
	self->setStereoMode(static_cast<QRadioTuner::StereoMode>(mode));
}

int QRadioTuner_StereoMode(const QRadioTuner* self) {
	QRadioTuner::StereoMode _ret = self->stereoMode();
	return static_cast<int>(_ret);
}

int QRadioTuner_SignalStrength(const QRadioTuner* self) {
	return self->signalStrength();
}

int QRadioTuner_Volume(const QRadioTuner* self) {
	return self->volume();
}

bool QRadioTuner_IsMuted(const QRadioTuner* self) {
	return self->isMuted();
}

bool QRadioTuner_IsSearching(const QRadioTuner* self) {
	return self->isSearching();
}

bool QRadioTuner_IsAntennaConnected(const QRadioTuner* self) {
	return self->isAntennaConnected();
}

int QRadioTuner_Error(const QRadioTuner* self) {
	QRadioTuner::Error _ret = self->error();
	return static_cast<int>(_ret);
}

struct miqt_string QRadioTuner_ErrorString(const QRadioTuner* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRadioData* QRadioTuner_RadioData(const QRadioTuner* self) {
	return self->radioData();
}

void QRadioTuner_SearchForward(QRadioTuner* self) {
	self->searchForward();
}

void QRadioTuner_SearchBackward(QRadioTuner* self) {
	self->searchBackward();
}

void QRadioTuner_SearchAllStations(QRadioTuner* self) {
	self->searchAllStations();
}

void QRadioTuner_CancelSearch(QRadioTuner* self) {
	self->cancelSearch();
}

void QRadioTuner_SetBand(QRadioTuner* self, int band) {
	self->setBand(static_cast<QRadioTuner::Band>(band));
}

void QRadioTuner_SetFrequency(QRadioTuner* self, int frequency) {
	self->setFrequency(static_cast<int>(frequency));
}

void QRadioTuner_SetVolume(QRadioTuner* self, int volume) {
	self->setVolume(static_cast<int>(volume));
}

void QRadioTuner_SetMuted(QRadioTuner* self, bool muted) {
	self->setMuted(muted);
}

void QRadioTuner_Start(QRadioTuner* self) {
	self->start();
}

void QRadioTuner_Stop(QRadioTuner* self) {
	self->stop();
}

void QRadioTuner_StateChanged(QRadioTuner* self, int state) {
	self->stateChanged(static_cast<QRadioTuner::State>(state));
}

void QRadioTuner_connect_StateChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(QRadioTuner::State)>(&QRadioTuner::stateChanged), self, [=](QRadioTuner::State state) {
		QRadioTuner::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QRadioTuner_StateChanged(slot, sigval1);
	});
}

void QRadioTuner_BandChanged(QRadioTuner* self, int band) {
	self->bandChanged(static_cast<QRadioTuner::Band>(band));
}

void QRadioTuner_connect_BandChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(QRadioTuner::Band)>(&QRadioTuner::bandChanged), self, [=](QRadioTuner::Band band) {
		QRadioTuner::Band band_ret = band;
		int sigval1 = static_cast<int>(band_ret);
		miqt_exec_callback_QRadioTuner_BandChanged(slot, sigval1);
	});
}

void QRadioTuner_FrequencyChanged(QRadioTuner* self, int frequency) {
	self->frequencyChanged(static_cast<int>(frequency));
}

void QRadioTuner_connect_FrequencyChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(int)>(&QRadioTuner::frequencyChanged), self, [=](int frequency) {
		int sigval1 = frequency;
		miqt_exec_callback_QRadioTuner_FrequencyChanged(slot, sigval1);
	});
}

void QRadioTuner_StereoStatusChanged(QRadioTuner* self, bool stereo) {
	self->stereoStatusChanged(stereo);
}

void QRadioTuner_connect_StereoStatusChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(bool)>(&QRadioTuner::stereoStatusChanged), self, [=](bool stereo) {
		bool sigval1 = stereo;
		miqt_exec_callback_QRadioTuner_StereoStatusChanged(slot, sigval1);
	});
}

void QRadioTuner_SearchingChanged(QRadioTuner* self, bool searching) {
	self->searchingChanged(searching);
}

void QRadioTuner_connect_SearchingChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(bool)>(&QRadioTuner::searchingChanged), self, [=](bool searching) {
		bool sigval1 = searching;
		miqt_exec_callback_QRadioTuner_SearchingChanged(slot, sigval1);
	});
}

void QRadioTuner_SignalStrengthChanged(QRadioTuner* self, int signalStrength) {
	self->signalStrengthChanged(static_cast<int>(signalStrength));
}

void QRadioTuner_connect_SignalStrengthChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(int)>(&QRadioTuner::signalStrengthChanged), self, [=](int signalStrength) {
		int sigval1 = signalStrength;
		miqt_exec_callback_QRadioTuner_SignalStrengthChanged(slot, sigval1);
	});
}

void QRadioTuner_VolumeChanged(QRadioTuner* self, int volume) {
	self->volumeChanged(static_cast<int>(volume));
}

void QRadioTuner_connect_VolumeChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(int)>(&QRadioTuner::volumeChanged), self, [=](int volume) {
		int sigval1 = volume;
		miqt_exec_callback_QRadioTuner_VolumeChanged(slot, sigval1);
	});
}

void QRadioTuner_MutedChanged(QRadioTuner* self, bool muted) {
	self->mutedChanged(muted);
}

void QRadioTuner_connect_MutedChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(bool)>(&QRadioTuner::mutedChanged), self, [=](bool muted) {
		bool sigval1 = muted;
		miqt_exec_callback_QRadioTuner_MutedChanged(slot, sigval1);
	});
}

void QRadioTuner_StationFound(QRadioTuner* self, int frequency, struct miqt_string stationId) {
	QString stationId_QString = QString::fromUtf8(stationId.data, stationId.len);
	self->stationFound(static_cast<int>(frequency), stationId_QString);
}

void QRadioTuner_connect_StationFound(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(int, QString)>(&QRadioTuner::stationFound), self, [=](int frequency, QString stationId) {
		int sigval1 = frequency;
		QString stationId_ret = stationId;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray stationId_b = stationId_ret.toUtf8();
		struct miqt_string stationId_ms;
		stationId_ms.len = stationId_b.length();
		stationId_ms.data = static_cast<char*>(malloc(stationId_ms.len));
		memcpy(stationId_ms.data, stationId_b.data(), stationId_ms.len);
		struct miqt_string sigval2 = stationId_ms;
		miqt_exec_callback_QRadioTuner_StationFound(slot, sigval1, sigval2);
	});
}

void QRadioTuner_AntennaConnectedChanged(QRadioTuner* self, bool connectionStatus) {
	self->antennaConnectedChanged(connectionStatus);
}

void QRadioTuner_connect_AntennaConnectedChanged(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(bool)>(&QRadioTuner::antennaConnectedChanged), self, [=](bool connectionStatus) {
		bool sigval1 = connectionStatus;
		miqt_exec_callback_QRadioTuner_AntennaConnectedChanged(slot, sigval1);
	});
}

void QRadioTuner_ErrorWithError(QRadioTuner* self, int error) {
	self->error(static_cast<QRadioTuner::Error>(error));
}

void QRadioTuner_connect_ErrorWithError(QRadioTuner* self, intptr_t slot) {
	MiqtVirtualQRadioTuner::connect(self, static_cast<void (QRadioTuner::*)(QRadioTuner::Error)>(&QRadioTuner::error), self, [=](QRadioTuner::Error error) {
		QRadioTuner::Error error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QRadioTuner_ErrorWithError(slot, sigval1);
	});
}

struct miqt_string QRadioTuner_Tr2(const char* s, const char* c) {
	QString _ret = QRadioTuner::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTuner_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioTuner::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTuner_TrUtf82(const char* s, const char* c) {
	QString _ret = QRadioTuner::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRadioTuner_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QRadioTuner::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QRadioTuner_SearchAllStations1(QRadioTuner* self, int searchMode) {
	self->searchAllStations(static_cast<QRadioTuner::SearchMode>(searchMode));
}

bool QRadioTuner_override_virtual_Availability(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Availability = slot;
	return true;
}

int QRadioTuner_virtualbase_Availability(const void* self) {
	return ( (const MiqtVirtualQRadioTuner*)(self) )->virtualbase_Availability();
}

bool QRadioTuner_override_virtual_IsAvailable(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__IsAvailable = slot;
	return true;
}

bool QRadioTuner_virtualbase_IsAvailable(const void* self) {
	return ( (const MiqtVirtualQRadioTuner*)(self) )->virtualbase_IsAvailable();
}

bool QRadioTuner_override_virtual_Service(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Service = slot;
	return true;
}

QMediaService* QRadioTuner_virtualbase_Service(const void* self) {
	return ( (const MiqtVirtualQRadioTuner*)(self) )->virtualbase_Service();
}

bool QRadioTuner_override_virtual_Bind(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Bind = slot;
	return true;
}

bool QRadioTuner_virtualbase_Bind(void* self, QObject* param1) {
	return ( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_Bind(param1);
}

bool QRadioTuner_override_virtual_Unbind(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Unbind = slot;
	return true;
}

void QRadioTuner_virtualbase_Unbind(void* self, QObject* param1) {
	( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_Unbind(param1);
}

bool QRadioTuner_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QRadioTuner_virtualbase_Event(void* self, QEvent* event) {
	return ( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_Event(event);
}

bool QRadioTuner_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QRadioTuner_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QRadioTuner_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QRadioTuner_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_TimerEvent(event);
}

bool QRadioTuner_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QRadioTuner_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_ChildEvent(event);
}

bool QRadioTuner_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QRadioTuner_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_CustomEvent(event);
}

bool QRadioTuner_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QRadioTuner_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QRadioTuner_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQRadioTuner* self_cast = dynamic_cast<MiqtVirtualQRadioTuner*>( (QRadioTuner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QRadioTuner_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQRadioTuner*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QRadioTuner_Delete(QRadioTuner* self) {
	delete self;
}

