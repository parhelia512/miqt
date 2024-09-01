package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmdiarea.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMdiArea struct {
	h *C.QMdiArea
	*QAbstractScrollArea
}

func (this *QMdiArea) cPointer() *C.QMdiArea {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMdiArea(h *C.QMdiArea) *QMdiArea {
	if h == nil {
		return nil
	}
	return &QMdiArea{h: h, QAbstractScrollArea: newQAbstractScrollArea_U(unsafe.Pointer(h))}
}

func newQMdiArea_U(h unsafe.Pointer) *QMdiArea {
	return newQMdiArea((*C.QMdiArea)(h))
}

// NewQMdiArea constructs a new QMdiArea object.
func NewQMdiArea() *QMdiArea {
	ret := C.QMdiArea_new()
	return newQMdiArea(ret)
}

// NewQMdiArea2 constructs a new QMdiArea object.
func NewQMdiArea2(parent *QWidget) *QMdiArea {
	ret := C.QMdiArea_new2(parent.cPointer())
	return newQMdiArea(ret)
}

func (this *QMdiArea) MetaObject() *QMetaObject {
	ret := C.QMdiArea_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMdiArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiArea_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMdiArea_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiArea_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMdiArea) SizeHint() *QSize {
	ret := C.QMdiArea_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMdiArea) MinimumSizeHint() *QSize {
	ret := C.QMdiArea_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMdiArea) CurrentSubWindow() *QMdiSubWindow {
	ret := C.QMdiArea_CurrentSubWindow(this.h)
	return newQMdiSubWindow_U(unsafe.Pointer(ret))
}

func (this *QMdiArea) ActiveSubWindow() *QMdiSubWindow {
	ret := C.QMdiArea_ActiveSubWindow(this.h)
	return newQMdiSubWindow_U(unsafe.Pointer(ret))
}

func (this *QMdiArea) SubWindowList() []*QMdiSubWindow {
	var _out **C.QMdiSubWindow = nil
	var _out_len C.size_t = 0
	C.QMdiArea_SubWindowList(this.h, &_out, &_out_len)
	ret := make([]*QMdiSubWindow, int(_out_len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQMdiSubWindow(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMdiArea) AddSubWindow(widget *QWidget) *QMdiSubWindow {
	ret := C.QMdiArea_AddSubWindow(this.h, widget.cPointer())
	return newQMdiSubWindow_U(unsafe.Pointer(ret))
}

func (this *QMdiArea) RemoveSubWindow(widget *QWidget) {
	C.QMdiArea_RemoveSubWindow(this.h, widget.cPointer())
}

func (this *QMdiArea) Background() *QBrush {
	ret := C.QMdiArea_Background(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMdiArea) SetBackground(background *QBrush) {
	C.QMdiArea_SetBackground(this.h, background.cPointer())
}

func (this *QMdiArea) ActivationOrder() uintptr {
	ret := C.QMdiArea_ActivationOrder(this.h)
	return (uintptr)(ret)
}

func (this *QMdiArea) SetActivationOrder(order uintptr) {
	C.QMdiArea_SetActivationOrder(this.h, (C.uintptr_t)(order))
}

func (this *QMdiArea) SetOption(option uintptr) {
	C.QMdiArea_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QMdiArea) TestOption(opton uintptr) bool {
	ret := C.QMdiArea_TestOption(this.h, (C.uintptr_t)(opton))
	return (bool)(ret)
}

func (this *QMdiArea) SetViewMode(mode uintptr) {
	C.QMdiArea_SetViewMode(this.h, (C.uintptr_t)(mode))
}

func (this *QMdiArea) ViewMode() uintptr {
	ret := C.QMdiArea_ViewMode(this.h)
	return (uintptr)(ret)
}

func (this *QMdiArea) DocumentMode() bool {
	ret := C.QMdiArea_DocumentMode(this.h)
	return (bool)(ret)
}

func (this *QMdiArea) SetDocumentMode(enabled bool) {
	C.QMdiArea_SetDocumentMode(this.h, (C.bool)(enabled))
}

func (this *QMdiArea) SetTabsClosable(closable bool) {
	C.QMdiArea_SetTabsClosable(this.h, (C.bool)(closable))
}

func (this *QMdiArea) TabsClosable() bool {
	ret := C.QMdiArea_TabsClosable(this.h)
	return (bool)(ret)
}

func (this *QMdiArea) SetTabsMovable(movable bool) {
	C.QMdiArea_SetTabsMovable(this.h, (C.bool)(movable))
}

func (this *QMdiArea) TabsMovable() bool {
	ret := C.QMdiArea_TabsMovable(this.h)
	return (bool)(ret)
}

func (this *QMdiArea) SetTabShape(shape uintptr) {
	C.QMdiArea_SetTabShape(this.h, (C.uintptr_t)(shape))
}

func (this *QMdiArea) TabShape() uintptr {
	ret := C.QMdiArea_TabShape(this.h)
	return (uintptr)(ret)
}

func (this *QMdiArea) SetTabPosition(position uintptr) {
	C.QMdiArea_SetTabPosition(this.h, (C.uintptr_t)(position))
}

func (this *QMdiArea) TabPosition() uintptr {
	ret := C.QMdiArea_TabPosition(this.h)
	return (uintptr)(ret)
}

func (this *QMdiArea) SubWindowActivated(param1 *QMdiSubWindow) {
	C.QMdiArea_SubWindowActivated(this.h, param1.cPointer())
}

func (this *QMdiArea) OnSubWindowActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMdiArea_connect_SubWindowActivated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMdiArea) SetActiveSubWindow(window *QMdiSubWindow) {
	C.QMdiArea_SetActiveSubWindow(this.h, window.cPointer())
}

func (this *QMdiArea) TileSubWindows() {
	C.QMdiArea_TileSubWindows(this.h)
}

func (this *QMdiArea) CascadeSubWindows() {
	C.QMdiArea_CascadeSubWindows(this.h)
}

func (this *QMdiArea) CloseActiveSubWindow() {
	C.QMdiArea_CloseActiveSubWindow(this.h)
}

func (this *QMdiArea) CloseAllSubWindows() {
	C.QMdiArea_CloseAllSubWindows(this.h)
}

func (this *QMdiArea) ActivateNextSubWindow() {
	C.QMdiArea_ActivateNextSubWindow(this.h)
}

func (this *QMdiArea) ActivatePreviousSubWindow() {
	C.QMdiArea_ActivatePreviousSubWindow(this.h)
}

func QMdiArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiArea_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMdiArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiArea_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMdiArea_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiArea_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMdiArea_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiArea_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMdiArea) SubWindowList1(order uintptr) []*QMdiSubWindow {
	var _out **C.QMdiSubWindow = nil
	var _out_len C.size_t = 0
	C.QMdiArea_SubWindowList1(this.h, (C.uintptr_t)(order), &_out, &_out_len)
	ret := make([]*QMdiSubWindow, int(_out_len))
	_outCast := (*[0xffff]*C.QMdiSubWindow)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQMdiSubWindow(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMdiArea) AddSubWindow2(widget *QWidget, flags int) *QMdiSubWindow {
	ret := C.QMdiArea_AddSubWindow2(this.h, widget.cPointer(), (C.int)(flags))
	return newQMdiSubWindow_U(unsafe.Pointer(ret))
}

func (this *QMdiArea) SetOption2(option uintptr, on bool) {
	C.QMdiArea_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func (this *QMdiArea) Delete() {
	C.QMdiArea_Delete(this.h)
}