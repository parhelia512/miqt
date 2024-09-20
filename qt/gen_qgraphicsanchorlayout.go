package qt

/*

#include "gen_qgraphicsanchorlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGraphicsAnchor struct {
	h *C.QGraphicsAnchor
	*QObject
}

func (this *QGraphicsAnchor) cPointer() *C.QGraphicsAnchor {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsAnchor(h *C.QGraphicsAnchor) *QGraphicsAnchor {
	if h == nil {
		return nil
	}
	return &QGraphicsAnchor{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQGraphicsAnchor_U(h unsafe.Pointer) *QGraphicsAnchor {
	return newQGraphicsAnchor((*C.QGraphicsAnchor)(h))
}

func (this *QGraphicsAnchor) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QGraphicsAnchor_MetaObject(this.h)))
}

func QGraphicsAnchor_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsAnchor_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsAnchor_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsAnchor_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGraphicsAnchor) SetSpacing(spacing float64) {
	C.QGraphicsAnchor_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchor) UnsetSpacing() {
	C.QGraphicsAnchor_UnsetSpacing(this.h)
}

func (this *QGraphicsAnchor) Spacing() float64 {
	return (float64)(C.QGraphicsAnchor_Spacing(this.h))
}

func (this *QGraphicsAnchor) SetSizePolicy(policy QSizePolicy__Policy) {
	C.QGraphicsAnchor_SetSizePolicy(this.h, (C.int)(policy))
}

func (this *QGraphicsAnchor) SizePolicy() QSizePolicy__Policy {
	return (QSizePolicy__Policy)(C.QGraphicsAnchor_SizePolicy(this.h))
}

func QGraphicsAnchor_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsAnchor_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsAnchor_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsAnchor_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsAnchor_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsAnchor_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGraphicsAnchor_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGraphicsAnchor_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsAnchor) Delete() {
	C.QGraphicsAnchor_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsAnchor) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsAnchor) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsAnchorLayout struct {
	h *C.QGraphicsAnchorLayout
	*QGraphicsLayout
}

func (this *QGraphicsAnchorLayout) cPointer() *C.QGraphicsAnchorLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsAnchorLayout(h *C.QGraphicsAnchorLayout) *QGraphicsAnchorLayout {
	if h == nil {
		return nil
	}
	return &QGraphicsAnchorLayout{h: h, QGraphicsLayout: newQGraphicsLayout_U(unsafe.Pointer(h))}
}

func newQGraphicsAnchorLayout_U(h unsafe.Pointer) *QGraphicsAnchorLayout {
	return newQGraphicsAnchorLayout((*C.QGraphicsAnchorLayout)(h))
}

// NewQGraphicsAnchorLayout constructs a new QGraphicsAnchorLayout object.
func NewQGraphicsAnchorLayout() *QGraphicsAnchorLayout {
	ret := C.QGraphicsAnchorLayout_new()
	return newQGraphicsAnchorLayout(ret)
}

// NewQGraphicsAnchorLayout2 constructs a new QGraphicsAnchorLayout object.
func NewQGraphicsAnchorLayout2(parent *QGraphicsLayoutItem) *QGraphicsAnchorLayout {
	ret := C.QGraphicsAnchorLayout_new2(parent.cPointer())
	return newQGraphicsAnchorLayout(ret)
}

func (this *QGraphicsAnchorLayout) AddAnchor(firstItem *QGraphicsLayoutItem, firstEdge AnchorPoint, secondItem *QGraphicsLayoutItem, secondEdge AnchorPoint) *QGraphicsAnchor {
	return newQGraphicsAnchor_U(unsafe.Pointer(C.QGraphicsAnchorLayout_AddAnchor(this.h, firstItem.cPointer(), (C.int)(firstEdge), secondItem.cPointer(), (C.int)(secondEdge))))
}

func (this *QGraphicsAnchorLayout) Anchor(firstItem *QGraphicsLayoutItem, firstEdge AnchorPoint, secondItem *QGraphicsLayoutItem, secondEdge AnchorPoint) *QGraphicsAnchor {
	return newQGraphicsAnchor_U(unsafe.Pointer(C.QGraphicsAnchorLayout_Anchor(this.h, firstItem.cPointer(), (C.int)(firstEdge), secondItem.cPointer(), (C.int)(secondEdge))))
}

func (this *QGraphicsAnchorLayout) AddCornerAnchors(firstItem *QGraphicsLayoutItem, firstCorner Corner, secondItem *QGraphicsLayoutItem, secondCorner Corner) {
	C.QGraphicsAnchorLayout_AddCornerAnchors(this.h, firstItem.cPointer(), (C.int)(firstCorner), secondItem.cPointer(), (C.int)(secondCorner))
}

func (this *QGraphicsAnchorLayout) AddAnchors(firstItem *QGraphicsLayoutItem, secondItem *QGraphicsLayoutItem) {
	C.QGraphicsAnchorLayout_AddAnchors(this.h, firstItem.cPointer(), secondItem.cPointer())
}

func (this *QGraphicsAnchorLayout) SetHorizontalSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetHorizontalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) SetVerticalSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetVerticalSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) SetSpacing(spacing float64) {
	C.QGraphicsAnchorLayout_SetSpacing(this.h, (C.double)(spacing))
}

func (this *QGraphicsAnchorLayout) HorizontalSpacing() float64 {
	return (float64)(C.QGraphicsAnchorLayout_HorizontalSpacing(this.h))
}

func (this *QGraphicsAnchorLayout) VerticalSpacing() float64 {
	return (float64)(C.QGraphicsAnchorLayout_VerticalSpacing(this.h))
}

func (this *QGraphicsAnchorLayout) RemoveAt(index int) {
	C.QGraphicsAnchorLayout_RemoveAt(this.h, (C.int)(index))
}

func (this *QGraphicsAnchorLayout) SetGeometry(rect *QRectF) {
	C.QGraphicsAnchorLayout_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsAnchorLayout) Count() int {
	return (int)(C.QGraphicsAnchorLayout_Count(this.h))
}

func (this *QGraphicsAnchorLayout) ItemAt(index int) *QGraphicsLayoutItem {
	return newQGraphicsLayoutItem_U(unsafe.Pointer(C.QGraphicsAnchorLayout_ItemAt(this.h, (C.int)(index))))
}

func (this *QGraphicsAnchorLayout) Invalidate() {
	C.QGraphicsAnchorLayout_Invalidate(this.h)
}

func (this *QGraphicsAnchorLayout) AddAnchors3(firstItem *QGraphicsLayoutItem, secondItem *QGraphicsLayoutItem, orientations Orientation) {
	C.QGraphicsAnchorLayout_AddAnchors3(this.h, firstItem.cPointer(), secondItem.cPointer(), (C.int)(orientations))
}

// Delete this object from C++ memory.
func (this *QGraphicsAnchorLayout) Delete() {
	C.QGraphicsAnchorLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsAnchorLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsAnchorLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
