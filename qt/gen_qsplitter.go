package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsplitter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSplitter struct {
	h *C.QSplitter
	*QFrame
}

func (this *QSplitter) cPointer() *C.QSplitter {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSplitter(h *C.QSplitter) *QSplitter {
	if h == nil {
		return nil
	}
	return &QSplitter{h: h, QFrame: newQFrame_U(unsafe.Pointer(h))}
}

func newQSplitter_U(h unsafe.Pointer) *QSplitter {
	return newQSplitter((*C.QSplitter)(h))
}

// NewQSplitter constructs a new QSplitter object.
func NewQSplitter() *QSplitter {
	ret := C.QSplitter_new()
	return newQSplitter(ret)
}

// NewQSplitter2 constructs a new QSplitter object.
func NewQSplitter2(param1 uintptr) *QSplitter {
	ret := C.QSplitter_new2((C.uintptr_t)(param1))
	return newQSplitter(ret)
}

// NewQSplitter3 constructs a new QSplitter object.
func NewQSplitter3(parent *QWidget) *QSplitter {
	ret := C.QSplitter_new3(parent.cPointer())
	return newQSplitter(ret)
}

// NewQSplitter4 constructs a new QSplitter object.
func NewQSplitter4(param1 uintptr, parent *QWidget) *QSplitter {
	ret := C.QSplitter_new4((C.uintptr_t)(param1), parent.cPointer())
	return newQSplitter(ret)
}

func (this *QSplitter) MetaObject() *QMetaObject {
	ret := C.QSplitter_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSplitter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitter_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplitter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitter_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSplitter) AddWidget(widget *QWidget) {
	C.QSplitter_AddWidget(this.h, widget.cPointer())
}

func (this *QSplitter) InsertWidget(index int, widget *QWidget) {
	C.QSplitter_InsertWidget(this.h, (C.int)(index), widget.cPointer())
}

func (this *QSplitter) ReplaceWidget(index int, widget *QWidget) *QWidget {
	ret := C.QSplitter_ReplaceWidget(this.h, (C.int)(index), widget.cPointer())
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QSplitter) SetOrientation(orientation uintptr) {
	C.QSplitter_SetOrientation(this.h, (C.uintptr_t)(orientation))
}

func (this *QSplitter) Orientation() uintptr {
	ret := C.QSplitter_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QSplitter) SetChildrenCollapsible(childrenCollapsible bool) {
	C.QSplitter_SetChildrenCollapsible(this.h, (C.bool)(childrenCollapsible))
}

func (this *QSplitter) ChildrenCollapsible() bool {
	ret := C.QSplitter_ChildrenCollapsible(this.h)
	return (bool)(ret)
}

func (this *QSplitter) SetCollapsible(index int, param2 bool) {
	C.QSplitter_SetCollapsible(this.h, (C.int)(index), (C.bool)(param2))
}

func (this *QSplitter) IsCollapsible(index int) bool {
	ret := C.QSplitter_IsCollapsible(this.h, (C.int)(index))
	return (bool)(ret)
}

func (this *QSplitter) SetOpaqueResize() {
	C.QSplitter_SetOpaqueResize(this.h)
}

func (this *QSplitter) OpaqueResize() bool {
	ret := C.QSplitter_OpaqueResize(this.h)
	return (bool)(ret)
}

func (this *QSplitter) Refresh() {
	C.QSplitter_Refresh(this.h)
}

func (this *QSplitter) SizeHint() *QSize {
	ret := C.QSplitter_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSplitter) MinimumSizeHint() *QSize {
	ret := C.QSplitter_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSplitter) Sizes() []int {
	var _out *C.int = nil
	var _out_len C.size_t = 0
	C.QSplitter_Sizes(this.h, &_out, &_out_len)
	ret := make([]int, int(_out_len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSplitter) SetSizes(list []int) {
	// For the C ABI, malloc a C array of raw pointers
	list_CArray := (*[0xffff]C.int)(C.malloc(C.ulong(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (C.int)(list[i])
	}
	C.QSplitter_SetSizes(this.h, &list_CArray[0], C.ulong(len(list)))
}

func (this *QSplitter) SaveState() *QByteArray {
	ret := C.QSplitter_SaveState(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSplitter) RestoreState(state *QByteArray) bool {
	ret := C.QSplitter_RestoreState(this.h, state.cPointer())
	return (bool)(ret)
}

func (this *QSplitter) HandleWidth() int {
	ret := C.QSplitter_HandleWidth(this.h)
	return (int)(ret)
}

func (this *QSplitter) SetHandleWidth(handleWidth int) {
	C.QSplitter_SetHandleWidth(this.h, (C.int)(handleWidth))
}

func (this *QSplitter) IndexOf(w *QWidget) int {
	ret := C.QSplitter_IndexOf(this.h, w.cPointer())
	return (int)(ret)
}

func (this *QSplitter) Widget(index int) *QWidget {
	ret := C.QSplitter_Widget(this.h, (C.int)(index))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QSplitter) Count() int {
	ret := C.QSplitter_Count(this.h)
	return (int)(ret)
}

func (this *QSplitter) GetRange(index int, param2 *int, param3 *int) {
	C.QSplitter_GetRange(this.h, (C.int)(index), (*C.int)(unsafe.Pointer(param2)), (*C.int)(unsafe.Pointer(param3)))
}

func (this *QSplitter) Handle(index int) *QSplitterHandle {
	ret := C.QSplitter_Handle(this.h, (C.int)(index))
	return newQSplitterHandle_U(unsafe.Pointer(ret))
}

func (this *QSplitter) SetStretchFactor(index int, stretch int) {
	C.QSplitter_SetStretchFactor(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QSplitter) SplitterMoved(pos int, index int) {
	C.QSplitter_SplitterMoved(this.h, (C.int)(pos), (C.int)(index))
}

func (this *QSplitter) OnSplitterMoved(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSplitter_connect_SplitterMoved(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QSplitter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitter_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplitter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitter_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplitter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitter_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplitter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitter_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSplitter) SetOpaqueResize1(opaque bool) {
	C.QSplitter_SetOpaqueResize1(this.h, (C.bool)(opaque))
}

func (this *QSplitter) Delete() {
	C.QSplitter_Delete(this.h)
}

type QSplitterHandle struct {
	h *C.QSplitterHandle
	*QWidget
}

func (this *QSplitterHandle) cPointer() *C.QSplitterHandle {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSplitterHandle(h *C.QSplitterHandle) *QSplitterHandle {
	if h == nil {
		return nil
	}
	return &QSplitterHandle{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQSplitterHandle_U(h unsafe.Pointer) *QSplitterHandle {
	return newQSplitterHandle((*C.QSplitterHandle)(h))
}

// NewQSplitterHandle constructs a new QSplitterHandle object.
func NewQSplitterHandle(o uintptr, parent *QSplitter) *QSplitterHandle {
	ret := C.QSplitterHandle_new((C.uintptr_t)(o), parent.cPointer())
	return newQSplitterHandle(ret)
}

func (this *QSplitterHandle) MetaObject() *QMetaObject {
	ret := C.QSplitterHandle_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSplitterHandle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitterHandle_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplitterHandle_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitterHandle_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSplitterHandle) SetOrientation(o uintptr) {
	C.QSplitterHandle_SetOrientation(this.h, (C.uintptr_t)(o))
}

func (this *QSplitterHandle) Orientation() uintptr {
	ret := C.QSplitterHandle_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QSplitterHandle) OpaqueResize() bool {
	ret := C.QSplitterHandle_OpaqueResize(this.h)
	return (bool)(ret)
}

func (this *QSplitterHandle) Splitter() *QSplitter {
	ret := C.QSplitterHandle_Splitter(this.h)
	return newQSplitter_U(unsafe.Pointer(ret))
}

func (this *QSplitterHandle) SizeHint() *QSize {
	ret := C.QSplitterHandle_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QSplitterHandle_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitterHandle_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplitterHandle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitterHandle_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplitterHandle_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitterHandle_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSplitterHandle_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSplitterHandle_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSplitterHandle) Delete() {
	C.QSplitterHandle_Delete(this.h)
}