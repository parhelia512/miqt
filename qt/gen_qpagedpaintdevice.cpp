#include <QMarginsF>
#include <QPageLayout>
#include <QPageSize>
#include <QPagedPaintDevice>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPagedPaintDevice__Margins
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPoint>
#include <QSizeF>
#include <qpagedpaintdevice.h>
#include "gen_qpagedpaintdevice.h"

#ifdef __cplusplus
extern "C" {
#endif

bool miqt_exec_callback_QPagedPaintDevice_NewPage(void*, intptr_t);
void miqt_exec_callback_QPagedPaintDevice_SetPageSizeWithSize(void*, intptr_t, int);
void miqt_exec_callback_QPagedPaintDevice_SetPageSizeMM(void*, intptr_t, QSizeF*);
void miqt_exec_callback_QPagedPaintDevice_SetMargins(void*, intptr_t, QPagedPaintDevice__Margins*);
int miqt_exec_callback_QPagedPaintDevice_DevType(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QPagedPaintDevice_PaintEngine(void*, intptr_t);
int miqt_exec_callback_QPagedPaintDevice_Metric(void*, intptr_t, int);
void miqt_exec_callback_QPagedPaintDevice_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPagedPaintDevice_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPagedPaintDevice_SharedPainter(void*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPagedPaintDevice final : public QPagedPaintDevice {
public:

	MiqtVirtualQPagedPaintDevice(): QPagedPaintDevice() {};

	virtual ~MiqtVirtualQPagedPaintDevice() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NewPage = 0;

	// Subclass to allow providing a Go implementation
	virtual bool newPage() override {
		if (handle__NewPage == 0) {
			return false; // Pure virtual, there is no base we can call
		}
		

		bool callback_return_value = miqt_exec_callback_QPagedPaintDevice_NewPage(this, handle__NewPage);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageSizeWithSize = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSize(QPagedPaintDevice::PageSize size) override {
		if (handle__SetPageSizeWithSize == 0) {
			QPagedPaintDevice::setPageSize(size);
			return;
		}
		
		QPagedPaintDevice::PageSize size_ret = size;
		int sigval1 = static_cast<int>(size_ret);

		miqt_exec_callback_QPagedPaintDevice_SetPageSizeWithSize(this, handle__SetPageSizeWithSize, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPageSizeWithSize(int size) {

		QPagedPaintDevice::setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetPageSizeMM = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPageSizeMM(const QSizeF& size) override {
		if (handle__SetPageSizeMM == 0) {
			QPagedPaintDevice::setPageSizeMM(size);
			return;
		}
		
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);

		miqt_exec_callback_QPagedPaintDevice_SetPageSizeMM(this, handle__SetPageSizeMM, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetPageSizeMM(QSizeF* size) {

		QPagedPaintDevice::setPageSizeMM(*size);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetMargins = 0;

	// Subclass to allow providing a Go implementation
	virtual void setMargins(const QPagedPaintDevice::Margins& margins) override {
		if (handle__SetMargins == 0) {
			QPagedPaintDevice::setMargins(margins);
			return;
		}
		
		const QPagedPaintDevice::Margins& margins_ret = margins;
		// Cast returned reference into pointer
		QPagedPaintDevice__Margins* sigval1 = const_cast<QPagedPaintDevice::Margins*>(&margins_ret);

		miqt_exec_callback_QPagedPaintDevice_SetMargins(this, handle__SetMargins, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetMargins(QPagedPaintDevice__Margins* margins) {

		QPagedPaintDevice::setMargins(*margins);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QPagedPaintDevice::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QPagedPaintDevice_DevType(const_cast<MiqtVirtualQPagedPaintDevice*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QPagedPaintDevice::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QPagedPaintDevice_PaintEngine(const_cast<MiqtVirtualQPagedPaintDevice*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (handle__Metric == 0) {
			return QPagedPaintDevice::metric(metric);
		}
		
		QPaintDevice::PaintDeviceMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);

		int callback_return_value = miqt_exec_callback_QPagedPaintDevice_Metric(const_cast<MiqtVirtualQPagedPaintDevice*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int metric) const {

		return QPagedPaintDevice::metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QPagedPaintDevice::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QPagedPaintDevice_InitPainter(const_cast<MiqtVirtualQPagedPaintDevice*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QPagedPaintDevice::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QPagedPaintDevice::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QPagedPaintDevice_Redirected(const_cast<MiqtVirtualQPagedPaintDevice*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QPagedPaintDevice::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QPagedPaintDevice::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QPagedPaintDevice_SharedPainter(const_cast<MiqtVirtualQPagedPaintDevice*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QPagedPaintDevice::sharedPainter();

	}

};

QPagedPaintDevice* QPagedPaintDevice_new() {
	return new MiqtVirtualQPagedPaintDevice();
}

void QPagedPaintDevice_virtbase(QPagedPaintDevice* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

bool QPagedPaintDevice_NewPage(QPagedPaintDevice* self) {
	return self->newPage();
}

bool QPagedPaintDevice_SetPageLayout(QPagedPaintDevice* self, QPageLayout* pageLayout) {
	return self->setPageLayout(*pageLayout);
}

bool QPagedPaintDevice_SetPageSize(QPagedPaintDevice* self, QPageSize* pageSize) {
	return self->setPageSize(*pageSize);
}

bool QPagedPaintDevice_SetPageOrientation(QPagedPaintDevice* self, int orientation) {
	return self->setPageOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

bool QPagedPaintDevice_SetPageMargins(QPagedPaintDevice* self, QMarginsF* margins) {
	return self->setPageMargins(*margins);
}

bool QPagedPaintDevice_SetPageMargins2(QPagedPaintDevice* self, QMarginsF* margins, int units) {
	return self->setPageMargins(*margins, static_cast<QPageLayout::Unit>(units));
}

QPageLayout* QPagedPaintDevice_PageLayout(const QPagedPaintDevice* self) {
	return new QPageLayout(self->pageLayout());
}

void QPagedPaintDevice_SetPageSizeWithSize(QPagedPaintDevice* self, int size) {
	self->setPageSize(static_cast<QPagedPaintDevice::PageSize>(size));
}

int QPagedPaintDevice_PageSize(const QPagedPaintDevice* self) {
	QPagedPaintDevice::PageSize _ret = self->pageSize();
	return static_cast<int>(_ret);
}

void QPagedPaintDevice_SetPageSizeMM(QPagedPaintDevice* self, QSizeF* size) {
	self->setPageSizeMM(*size);
}

QSizeF* QPagedPaintDevice_PageSizeMM(const QPagedPaintDevice* self) {
	return new QSizeF(self->pageSizeMM());
}

void QPagedPaintDevice_SetMargins(QPagedPaintDevice* self, QPagedPaintDevice__Margins* margins) {
	self->setMargins(*margins);
}

QPagedPaintDevice__Margins* QPagedPaintDevice_Margins(const QPagedPaintDevice* self) {
	return new QPagedPaintDevice::Margins(self->margins());
}

bool QPagedPaintDevice_override_virtual_NewPage(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NewPage = slot;
	return true;
}

bool QPagedPaintDevice_override_virtual_SetPageSizeWithSize(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageSizeWithSize = slot;
	return true;
}

void QPagedPaintDevice_virtualbase_SetPageSizeWithSize(void* self, int size) {
	( (MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_SetPageSizeWithSize(size);
}

bool QPagedPaintDevice_override_virtual_SetPageSizeMM(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetPageSizeMM = slot;
	return true;
}

void QPagedPaintDevice_virtualbase_SetPageSizeMM(void* self, QSizeF* size) {
	( (MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_SetPageSizeMM(size);
}

bool QPagedPaintDevice_override_virtual_SetMargins(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetMargins = slot;
	return true;
}

void QPagedPaintDevice_virtualbase_SetMargins(void* self, QPagedPaintDevice__Margins* margins) {
	( (MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_SetMargins(margins);
}

bool QPagedPaintDevice_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QPagedPaintDevice_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_DevType();
}

bool QPagedPaintDevice_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

bool QPagedPaintDevice_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QPagedPaintDevice_virtualbase_Metric(const void* self, int metric) {
	return ( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_Metric(metric);
}

bool QPagedPaintDevice_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QPagedPaintDevice_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_InitPainter(painter);
}

bool QPagedPaintDevice_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QPagedPaintDevice_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_Redirected(offset);
}

bool QPagedPaintDevice_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQPagedPaintDevice* self_cast = dynamic_cast<MiqtVirtualQPagedPaintDevice*>( (QPagedPaintDevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QPagedPaintDevice_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQPagedPaintDevice*)(self) )->virtualbase_SharedPainter();
}

void QPagedPaintDevice_Delete(QPagedPaintDevice* self) {
	delete self;
}

void QPagedPaintDevice__Margins_Delete(QPagedPaintDevice__Margins* self) {
	delete self;
}

