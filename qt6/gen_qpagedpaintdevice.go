package qt6

/*

#include "gen_qpagedpaintdevice.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPagedPaintDevice__PdfVersion int

const (
	QPagedPaintDevice__PdfVersion_1_4 QPagedPaintDevice__PdfVersion = 0
	QPagedPaintDevice__PdfVersion_A1b QPagedPaintDevice__PdfVersion = 1
	QPagedPaintDevice__PdfVersion_1_6 QPagedPaintDevice__PdfVersion = 2
)

type QPagedPaintDevice struct {
	h *C.QPagedPaintDevice
	*QPaintDevice
}

func (this *QPagedPaintDevice) cPointer() *C.QPagedPaintDevice {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPagedPaintDevice) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPagedPaintDevice(h *C.QPagedPaintDevice) *QPagedPaintDevice {
	if h == nil {
		return nil
	}
	return &QPagedPaintDevice{h: h, QPaintDevice: UnsafeNewQPaintDevice(unsafe.Pointer(h))}
}

func UnsafeNewQPagedPaintDevice(h unsafe.Pointer) *QPagedPaintDevice {
	return newQPagedPaintDevice((*C.QPagedPaintDevice)(h))
}

func (this *QPagedPaintDevice) NewPage() bool {
	return (bool)(C.QPagedPaintDevice_NewPage(this.h))
}

func (this *QPagedPaintDevice) SetPageLayout(pageLayout *QPageLayout) bool {
	return (bool)(C.QPagedPaintDevice_SetPageLayout(this.h, pageLayout.cPointer()))
}

func (this *QPagedPaintDevice) SetPageSize(pageSize *QPageSize) bool {
	return (bool)(C.QPagedPaintDevice_SetPageSize(this.h, pageSize.cPointer()))
}

func (this *QPagedPaintDevice) SetPageOrientation(orientation QPageLayout__Orientation) bool {
	return (bool)(C.QPagedPaintDevice_SetPageOrientation(this.h, (C.int)(orientation)))
}

func (this *QPagedPaintDevice) SetPageMargins(margins *QMarginsF) bool {
	return (bool)(C.QPagedPaintDevice_SetPageMargins(this.h, margins.cPointer()))
}

func (this *QPagedPaintDevice) PageLayout() *QPageLayout {
	_ret := C.QPagedPaintDevice_PageLayout(this.h)
	_goptr := newQPageLayout(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPagedPaintDevice) SetPageRanges(ranges *QPageRanges) {
	C.QPagedPaintDevice_SetPageRanges(this.h, ranges.cPointer())
}

func (this *QPagedPaintDevice) PageRanges() *QPageRanges {
	_ret := C.QPagedPaintDevice_PageRanges(this.h)
	_goptr := newQPageRanges(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPagedPaintDevice) SetPageMargins2(margins *QMarginsF, units QPageLayout__Unit) bool {
	return (bool)(C.QPagedPaintDevice_SetPageMargins2(this.h, margins.cPointer(), (C.int)(units)))
}

// Delete this object from C++ memory.
func (this *QPagedPaintDevice) Delete() {
	C.QPagedPaintDevice_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPagedPaintDevice) GoGC() {
	runtime.SetFinalizer(this, func(this *QPagedPaintDevice) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}