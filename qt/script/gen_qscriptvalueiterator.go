package script

/*

#include "gen_qscriptvalueiterator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QScriptValueIterator struct {
	h          *C.QScriptValueIterator
	isSubclass bool
}

func (this *QScriptValueIterator) cPointer() *C.QScriptValueIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptValueIterator) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptValueIterator constructs the type using only CGO pointers.
func newQScriptValueIterator(h *C.QScriptValueIterator) *QScriptValueIterator {
	if h == nil {
		return nil
	}

	return &QScriptValueIterator{h: h}
}

// UnsafeNewQScriptValueIterator constructs the type using only unsafe pointers.
func UnsafeNewQScriptValueIterator(h unsafe.Pointer) *QScriptValueIterator {
	return newQScriptValueIterator((*C.QScriptValueIterator)(h))
}

// NewQScriptValueIterator constructs a new QScriptValueIterator object.
func NewQScriptValueIterator(value *QScriptValue) *QScriptValueIterator {

	ret := newQScriptValueIterator(C.QScriptValueIterator_new(value.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QScriptValueIterator) HasNext() bool {
	return (bool)(C.QScriptValueIterator_HasNext(this.h))
}

func (this *QScriptValueIterator) Next() {
	C.QScriptValueIterator_Next(this.h)
}

func (this *QScriptValueIterator) HasPrevious() bool {
	return (bool)(C.QScriptValueIterator_HasPrevious(this.h))
}

func (this *QScriptValueIterator) Previous() {
	C.QScriptValueIterator_Previous(this.h)
}

func (this *QScriptValueIterator) Name() string {
	var _ms C.struct_miqt_string = C.QScriptValueIterator_Name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptValueIterator) ScriptName() *QScriptString {
	_goptr := newQScriptString(C.QScriptValueIterator_ScriptName(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValueIterator) Value() *QScriptValue {
	_goptr := newQScriptValue(C.QScriptValueIterator_Value(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScriptValueIterator) SetValue(value *QScriptValue) {
	C.QScriptValueIterator_SetValue(this.h, value.cPointer())
}

func (this *QScriptValueIterator) Flags() QScriptValue__PropertyFlag {
	return (QScriptValue__PropertyFlag)(C.QScriptValueIterator_Flags(this.h))
}

func (this *QScriptValueIterator) Remove() {
	C.QScriptValueIterator_Remove(this.h)
}

func (this *QScriptValueIterator) ToFront() {
	C.QScriptValueIterator_ToFront(this.h)
}

func (this *QScriptValueIterator) ToBack() {
	C.QScriptValueIterator_ToBack(this.h)
}

func (this *QScriptValueIterator) OperatorAssign(value *QScriptValue) {
	C.QScriptValueIterator_OperatorAssign(this.h, value.cPointer())
}

// Delete this object from C++ memory.
func (this *QScriptValueIterator) Delete() {
	C.QScriptValueIterator_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptValueIterator) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptValueIterator) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}