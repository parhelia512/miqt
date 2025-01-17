package qt

/*

#include "gen_qgraphicsproxywidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsProxyWidget__ int

const (
	QGraphicsProxyWidget__Type QGraphicsProxyWidget__ = 12
)

type QGraphicsProxyWidget struct {
	h *C.QGraphicsProxyWidget
	*QGraphicsWidget
}

func (this *QGraphicsProxyWidget) cPointer() *C.QGraphicsProxyWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsProxyWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsProxyWidget constructs the type using only CGO pointers.
func newQGraphicsProxyWidget(h *C.QGraphicsProxyWidget) *QGraphicsProxyWidget {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsWidget *C.QGraphicsWidget = nil
	C.QGraphicsProxyWidget_virtbase(h, &outptr_QGraphicsWidget)

	return &QGraphicsProxyWidget{h: h,
		QGraphicsWidget: newQGraphicsWidget(outptr_QGraphicsWidget)}
}

// UnsafeNewQGraphicsProxyWidget constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsProxyWidget(h unsafe.Pointer) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget((*C.QGraphicsProxyWidget)(h))
}

// NewQGraphicsProxyWidget constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget() *QGraphicsProxyWidget {

	return newQGraphicsProxyWidget(C.QGraphicsProxyWidget_new())
}

// NewQGraphicsProxyWidget2 constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget2(parent *QGraphicsItem) *QGraphicsProxyWidget {

	return newQGraphicsProxyWidget(C.QGraphicsProxyWidget_new2(parent.cPointer()))
}

// NewQGraphicsProxyWidget3 constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget3(parent *QGraphicsItem, wFlags WindowType) *QGraphicsProxyWidget {

	return newQGraphicsProxyWidget(C.QGraphicsProxyWidget_new3(parent.cPointer(), (C.int)(wFlags)))
}

func (this *QGraphicsProxyWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsProxyWidget_MetaObject(this.h))
}

func (this *QGraphicsProxyWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsProxyWidget_Metacast(this.h, param1_Cstring))
}

func QGraphicsProxyWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsProxyWidget) SetWidget(widget *QWidget) {
	C.QGraphicsProxyWidget_SetWidget(this.h, widget.cPointer())
}

func (this *QGraphicsProxyWidget) Widget() *QWidget {
	return newQWidget(C.QGraphicsProxyWidget_Widget(this.h))
}

func (this *QGraphicsProxyWidget) SubWidgetRect(widget *QWidget) *QRectF {
	_goptr := newQRectF(C.QGraphicsProxyWidget_SubWidgetRect(this.h, widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsProxyWidget) SetGeometry(rect *QRectF) {
	C.QGraphicsProxyWidget_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsProxyWidget) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsProxyWidget_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsProxyWidget) Type() int {
	return (int)(C.QGraphicsProxyWidget_Type(this.h))
}

func (this *QGraphicsProxyWidget) CreateProxyForChildWidget(child *QWidget) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget(C.QGraphicsProxyWidget_CreateProxyForChildWidget(this.h, child.cPointer()))
}

func QGraphicsProxyWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsProxyWidget) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsProxyWidget_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsProxyWidget) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsProxyWidget_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_SetGeometry
func miqt_exec_callback_QGraphicsProxyWidget_SetGeometry(self *C.QGraphicsProxyWidget, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsProxyWidget_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsProxyWidget) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsProxyWidget_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_Paint
func miqt_exec_callback_QGraphicsProxyWidget_Paint(self *C.QGraphicsProxyWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Type() int {

	return (int)(C.QGraphicsProxyWidget_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsProxyWidget) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsProxyWidget_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_Type
func miqt_exec_callback_QGraphicsProxyWidget_Type(self *C.QGraphicsProxyWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsProxyWidget_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsProxyWidget_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ItemChange
func miqt_exec_callback_QGraphicsProxyWidget_ItemChange(self *C.QGraphicsProxyWidget, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_Event
func miqt_exec_callback_QGraphicsProxyWidget_Event(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_EventFilter
func miqt_exec_callback_QGraphicsProxyWidget_EventFilter(self *C.QGraphicsProxyWidget, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGraphicsProxyWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ShowEvent
func miqt_exec_callback_QGraphicsProxyWidget_ShowEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGraphicsProxyWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_HideEvent
func miqt_exec_callback_QGraphicsProxyWidget_HideEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsProxyWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ContextMenuEvent
func miqt_exec_callback_QGraphicsProxyWidget_ContextMenuEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_DragEnterEvent
func miqt_exec_callback_QGraphicsProxyWidget_DragEnterEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_DragLeaveEvent
func miqt_exec_callback_QGraphicsProxyWidget_DragLeaveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_DragMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_DragMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_DropEvent
func miqt_exec_callback_QGraphicsProxyWidget_DropEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_HoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_HoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_HoverEnterEvent
func miqt_exec_callback_QGraphicsProxyWidget_HoverEnterEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_HoverLeaveEvent
func miqt_exec_callback_QGraphicsProxyWidget_HoverLeaveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_HoverMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_HoverMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GrabMouseEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_GrabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnGrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_GrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_GrabMouseEvent
func miqt_exec_callback_QGraphicsProxyWidget_GrabMouseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UngrabMouseEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_UngrabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnUngrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_UngrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_UngrabMouseEvent
func miqt_exec_callback_QGraphicsProxyWidget_UngrabMouseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_MouseMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_MouseMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_MousePressEvent
func miqt_exec_callback_QGraphicsProxyWidget_MousePressEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_MouseReleaseEvent
func miqt_exec_callback_QGraphicsProxyWidget_MouseReleaseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsProxyWidget_MouseDoubleClickEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsProxyWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_WheelEvent
func miqt_exec_callback_QGraphicsProxyWidget_WheelEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsProxyWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_KeyPressEvent
func miqt_exec_callback_QGraphicsProxyWidget_KeyPressEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsProxyWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_KeyReleaseEvent
func miqt_exec_callback_QGraphicsProxyWidget_KeyReleaseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsProxyWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_FocusInEvent
func miqt_exec_callback_QGraphicsProxyWidget_FocusInEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsProxyWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_FocusOutEvent
func miqt_exec_callback_QGraphicsProxyWidget_FocusOutEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsProxyWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_FocusNextPrevChild
func miqt_exec_callback_QGraphicsProxyWidget_FocusNextPrevChild(self *C.QGraphicsProxyWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsProxyWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsProxyWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_InputMethodQuery
func miqt_exec_callback_QGraphicsProxyWidget_InputMethodQuery(self *C.QGraphicsProxyWidget, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsProxyWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_InputMethodEvent
func miqt_exec_callback_QGraphicsProxyWidget_InputMethodEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_goptr := newQSizeF(C.QGraphicsProxyWidget_virtualbase_SizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsProxyWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_SizeHint
func miqt_exec_callback_QGraphicsProxyWidget_SizeHint(self *C.QGraphicsProxyWidget, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := newQSizeF(constraint)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_ResizeEvent(event *QGraphicsSceneResizeEvent) {

	C.QGraphicsProxyWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnResizeEvent(slot func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ResizeEvent
func miqt_exec_callback_QGraphicsProxyWidget_ResizeEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneResizeEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsProxyWidget_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsProxyWidget) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsProxyWidget_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_GetContentsMargins
func miqt_exec_callback_QGraphicsProxyWidget_GetContentsMargins(self *C.QGraphicsProxyWidget, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsProxyWidget) callVirtualBase_PaintWindowFrame(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsProxyWidget_virtualbase_PaintWindowFrame(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsProxyWidget) OnPaintWindowFrame(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsProxyWidget_override_virtual_PaintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_PaintWindowFrame
func miqt_exec_callback_QGraphicsProxyWidget_PaintWindowFrame(self *C.QGraphicsProxyWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PaintWindowFrame, slotval1, slotval2, slotval3)

}

func (this *QGraphicsProxyWidget) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsProxyWidget_virtualbase_BoundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsProxyWidget_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_BoundingRect
func miqt_exec_callback_QGraphicsProxyWidget_BoundingRect(self *C.QGraphicsProxyWidget, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsProxyWidget_virtualbase_Shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsProxyWidget_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_Shape
func miqt_exec_callback_QGraphicsProxyWidget_Shape(self *C.QGraphicsProxyWidget, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_InitStyleOption(option *QStyleOption) {

	C.QGraphicsProxyWidget_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QGraphicsProxyWidget) OnInitStyleOption(slot func(super func(option *QStyleOption), option *QStyleOption)) {
	ok := C.QGraphicsProxyWidget_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_InitStyleOption
func miqt_exec_callback_QGraphicsProxyWidget_InitStyleOption(self *C.QGraphicsProxyWidget, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOption), option *QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOption(option)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UpdateGeometry() {

	C.QGraphicsProxyWidget_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsProxyWidget) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsProxyWidget_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_UpdateGeometry
func miqt_exec_callback_QGraphicsProxyWidget_UpdateGeometry(self *C.QGraphicsProxyWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsProxyWidget) callVirtualBase_PropertyChange(propertyName string, value *QVariant) *QVariant {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))

	_goptr := newQVariant(C.QGraphicsProxyWidget_virtualbase_PropertyChange(unsafe.Pointer(this.h), propertyName_ms, value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnPropertyChange(slot func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant) {
	ok := C.QGraphicsProxyWidget_override_virtual_PropertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_PropertyChange
func miqt_exec_callback_QGraphicsProxyWidget_PropertyChange(self *C.QGraphicsProxyWidget, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret
	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PropertyChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_SceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_SceneEvent
func miqt_exec_callback_QGraphicsProxyWidget_SceneEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WindowFrameEvent(e *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_WindowFrameEvent(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QGraphicsProxyWidget) OnWindowFrameEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_WindowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_WindowFrameEvent
func miqt_exec_callback_QGraphicsProxyWidget_WindowFrameEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WindowFrameEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WindowFrameSectionAt(pos *QPointF) WindowFrameSection {

	return (WindowFrameSection)(C.QGraphicsProxyWidget_virtualbase_WindowFrameSectionAt(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QGraphicsProxyWidget) OnWindowFrameSectionAt(slot func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection) {
	ok := C.QGraphicsProxyWidget_override_virtual_WindowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_WindowFrameSectionAt
func miqt_exec_callback_QGraphicsProxyWidget_WindowFrameSectionAt(self *C.QGraphicsProxyWidget, cb C.intptr_t, pos *C.QPointF) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(pos)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WindowFrameSectionAt, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ChangeEvent
func miqt_exec_callback_QGraphicsProxyWidget_ChangeEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGraphicsProxyWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_CloseEvent
func miqt_exec_callback_QGraphicsProxyWidget_CloseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MoveEvent(event *QGraphicsSceneMoveEvent) {

	C.QGraphicsProxyWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMoveEvent(slot func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_MoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_MoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMoveEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_PolishEvent() {

	C.QGraphicsProxyWidget_virtualbase_PolishEvent(unsafe.Pointer(this.h))

}
func (this *QGraphicsProxyWidget) OnPolishEvent(slot func(super func())) {
	ok := C.QGraphicsProxyWidget_override_virtual_PolishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_PolishEvent
func miqt_exec_callback_QGraphicsProxyWidget_PolishEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PolishEvent)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GrabKeyboardEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_GrabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnGrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_GrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_GrabKeyboardEvent
func miqt_exec_callback_QGraphicsProxyWidget_GrabKeyboardEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UngrabKeyboardEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_UngrabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnUngrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_UngrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_UngrabKeyboardEvent
func miqt_exec_callback_QGraphicsProxyWidget_UngrabKeyboardEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsProxyWidget_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_TimerEvent
func miqt_exec_callback_QGraphicsProxyWidget_TimerEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsProxyWidget_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ChildEvent
func miqt_exec_callback_QGraphicsProxyWidget_ChildEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_CustomEvent
func miqt_exec_callback_QGraphicsProxyWidget_CustomEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsProxyWidget_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsProxyWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsProxyWidget_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ConnectNotify
func miqt_exec_callback_QGraphicsProxyWidget_ConnectNotify(self *C.QGraphicsProxyWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsProxyWidget_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsProxyWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsProxyWidget_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_DisconnectNotify
func miqt_exec_callback_QGraphicsProxyWidget_DisconnectNotify(self *C.QGraphicsProxyWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Advance(phase int) {

	C.QGraphicsProxyWidget_virtualbase_Advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsProxyWidget) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsProxyWidget_override_virtual_Advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_Advance
func miqt_exec_callback_QGraphicsProxyWidget_Advance(self *C.QGraphicsProxyWidget, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_Contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsProxyWidget) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_Contains
func miqt_exec_callback_QGraphicsProxyWidget_Contains(self *C.QGraphicsProxyWidget, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_CollidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsProxyWidget) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_CollidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_CollidesWithItem
func miqt_exec_callback_QGraphicsProxyWidget_CollidesWithItem(self *C.QGraphicsProxyWidget, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_CollidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsProxyWidget) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_CollidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_CollidesWithPath
func miqt_exec_callback_QGraphicsProxyWidget_CollidesWithPath(self *C.QGraphicsProxyWidget, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsProxyWidget) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_IsObscuredBy
func miqt_exec_callback_QGraphicsProxyWidget_IsObscuredBy(self *C.QGraphicsProxyWidget, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsProxyWidget_virtualbase_OpaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsProxyWidget_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_OpaqueArea
func miqt_exec_callback_QGraphicsProxyWidget_OpaqueArea(self *C.QGraphicsProxyWidget, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_SceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_SceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_SceneEventFilter
func miqt_exec_callback_QGraphicsProxyWidget_SceneEventFilter(self *C.QGraphicsProxyWidget, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsProxyWidget) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_SupportsExtension
func miqt_exec_callback_QGraphicsProxyWidget_SupportsExtension(self *C.QGraphicsProxyWidget, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsProxyWidget_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsProxyWidget) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsProxyWidget_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_SetExtension
func miqt_exec_callback_QGraphicsProxyWidget_SetExtension(self *C.QGraphicsProxyWidget, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsProxyWidget_virtualbase_Extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsProxyWidget_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_Extension
func miqt_exec_callback_QGraphicsProxyWidget_Extension(self *C.QGraphicsProxyWidget, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsProxyWidget) Delete() {
	C.QGraphicsProxyWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsProxyWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsProxyWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
