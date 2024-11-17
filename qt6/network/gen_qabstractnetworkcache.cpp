#include <QAbstractNetworkCache>
#include <QDateTime>
#include <QIODevice>
#include <QList>
#include <QMap>
#include <QMetaObject>
#include <QNetworkCacheMetaData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include "gen_qabstractnetworkcache.h"
#include "_cgo_export.h"

QNetworkCacheMetaData* QNetworkCacheMetaData_new() {
	return new QNetworkCacheMetaData();
}

QNetworkCacheMetaData* QNetworkCacheMetaData_new2(QNetworkCacheMetaData* other) {
	return new QNetworkCacheMetaData(*other);
}

void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	self->operator=(*other);
}

void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	self->swap(*other);
}

bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	return self->operator==(*other);
}

bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
	return self->operator!=(*other);
}

bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self) {
	return self->isValid();
}

QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self) {
	return new QUrl(self->url());
}

void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, QUrl* url) {
	self->setUrl(*url);
}

struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  QNetworkCacheMetaData_RawHeaders(const QNetworkCacheMetaData* self) {
	QNetworkCacheMetaData::RawHeaderList _ret = self->rawHeaders();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ * _arr = static_cast<struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ *>(malloc(sizeof(struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<QByteArray, QByteArray> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		struct miqt_string* _lv_first_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		struct miqt_string* _lv_second_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
		QByteArray _lv_first_qb = _lv_ret.first;
		struct miqt_string _lv_first_ms;
		_lv_first_ms.len = _lv_first_qb.length();
		_lv_first_ms.data = static_cast<char*>(malloc(_lv_first_ms.len));
		memcpy(_lv_first_ms.data, _lv_first_qb.data(), _lv_first_ms.len);
		_lv_first_arr[0] = _lv_first_ms;
		QByteArray _lv_second_qb = _lv_ret.second;
		struct miqt_string _lv_second_ms;
		_lv_second_ms.len = _lv_second_qb.length();
		_lv_second_ms.data = static_cast<char*>(malloc(_lv_second_ms.len));
		memcpy(_lv_second_ms.data, _lv_second_qb.data(), _lv_second_ms.len);
		_lv_second_arr[0] = _lv_second_ms;
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QNetworkCacheMetaData_SetRawHeaders(QNetworkCacheMetaData* self, struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and struct miqt_string   */  headers) {
	QNetworkCacheMetaData::RawHeaderList headers_QList;
	headers_QList.reserve(headers.len);
	struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ * headers_arr = static_cast<struct miqt_map /* tuple of struct miqt_string and struct miqt_string */ *>(headers.data);
	for(size_t i = 0; i < headers.len; ++i) {
		QPair<QByteArray, QByteArray> headers_arr_i_QPair;
		struct miqt_string* headers_arr_i_first_arr = static_cast<struct miqt_string*>(headers_arr[i].keys);
		struct miqt_string* headers_arr_i_second_arr = static_cast<struct miqt_string*>(headers_arr[i].values);
			QByteArray headers_arr_i_first_arr_0_QByteArray(headers_arr_i_first_arr[0].data, headers_arr_i_first_arr[0].len);
			QByteArray headers_arr_i_second_arr_0_QByteArray(headers_arr_i_second_arr[0].data, headers_arr_i_second_arr[0].len);
		headers_arr_i_QPair.first = headers_arr_i_first_arr_0_QByteArray;
		headers_arr_i_QPair.second = headers_arr_i_second_arr_0_QByteArray;
		headers_QList.push_back(headers_arr_i_QPair);
	}
	self->setRawHeaders(headers_QList);
}

QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self) {
	return new QDateTime(self->lastModified());
}

void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, QDateTime* dateTime) {
	self->setLastModified(*dateTime);
}

QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self) {
	return new QDateTime(self->expirationDate());
}

void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, QDateTime* dateTime) {
	self->setExpirationDate(*dateTime);
}

bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self) {
	return self->saveToDisk();
}

void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow) {
	self->setSaveToDisk(allow);
}

struct miqt_map /* of int to QVariant* */  QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self) {
	QNetworkCacheMetaData::AttributesMap _ret = self->attributes();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		QNetworkRequest::Attribute _hashkey_ret = _itr->first;
		_karr[_ctr] = static_cast<int>(_hashkey_ret);
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, struct miqt_map /* of int to QVariant* */  attributes) {
	QNetworkCacheMetaData::AttributesMap attributes_QMap;
	attributes_QMap.reserve(attributes.len);
	int* attributes_karr = static_cast<int*>(attributes.keys);
	QVariant** attributes_varr = static_cast<QVariant**>(attributes.values);
	for(size_t i = 0; i < attributes.len; ++i) {
		attributes_QMap[static_cast<QNetworkRequest::Attribute>(attributes_karr[i])] = *(attributes_varr[i]);
	}
	self->setAttributes(attributes_QMap);
}

void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self) {
	delete self;
}

QMetaObject* QAbstractNetworkCache_MetaObject(const QAbstractNetworkCache* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractNetworkCache_Metacast(QAbstractNetworkCache* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractNetworkCache_Tr(const char* s) {
	QString _ret = QAbstractNetworkCache::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, QUrl* url) {
	return new QNetworkCacheMetaData(self->metaData(*url));
}

void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData) {
	self->updateMetaData(*metaData);
}

QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, QUrl* url) {
	return self->data(*url);
}

bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, QUrl* url) {
	return self->remove(*url);
}

long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self) {
	qint64 _ret = self->cacheSize();
	return static_cast<long long>(_ret);
}

QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData) {
	return self->prepare(*metaData);
}

void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device) {
	self->insert(device);
}

void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self) {
	self->clear();
}

struct miqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractNetworkCache::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractNetworkCache::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self) {
	delete self;
}
