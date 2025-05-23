package qt6

/*

#include "gen_qloggingcategory.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QLoggingCategory struct {
	h *C.QLoggingCategory
}

func (this *QLoggingCategory) cPointer() *C.QLoggingCategory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLoggingCategory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLoggingCategory constructs the type using only CGO pointers.
func newQLoggingCategory(h *C.QLoggingCategory) *QLoggingCategory {
	if h == nil {
		return nil
	}

	return &QLoggingCategory{h: h}
}

// UnsafeNewQLoggingCategory constructs the type using only unsafe pointers.
func UnsafeNewQLoggingCategory(h unsafe.Pointer) *QLoggingCategory {
	return newQLoggingCategory((*C.QLoggingCategory)(h))
}

// NewQLoggingCategory constructs a new QLoggingCategory object.
func NewQLoggingCategory(category string) *QLoggingCategory {
	category_Cstring := C.CString(category)
	defer C.free(unsafe.Pointer(category_Cstring))

	return newQLoggingCategory(C.QLoggingCategory_new(category_Cstring))
}

func (this *QLoggingCategory) IsDebugEnabled() bool {
	return (bool)(C.QLoggingCategory_isDebugEnabled(this.h))
}

func (this *QLoggingCategory) IsInfoEnabled() bool {
	return (bool)(C.QLoggingCategory_isInfoEnabled(this.h))
}

func (this *QLoggingCategory) IsWarningEnabled() bool {
	return (bool)(C.QLoggingCategory_isWarningEnabled(this.h))
}

func (this *QLoggingCategory) IsCriticalEnabled() bool {
	return (bool)(C.QLoggingCategory_isCriticalEnabled(this.h))
}

func (this *QLoggingCategory) CategoryName() string {
	_ret := C.QLoggingCategory_categoryName(this.h)
	return C.GoString(_ret)
}

func (this *QLoggingCategory) OperatorCall() *QLoggingCategory {
	return newQLoggingCategory(C.QLoggingCategory_operatorCall(this.h))
}

func (this *QLoggingCategory) OperatorCall2() *QLoggingCategory {
	return newQLoggingCategory(C.QLoggingCategory_operatorCall2(this.h))
}

func QLoggingCategory_DefaultCategory() *QLoggingCategory {
	return newQLoggingCategory(C.QLoggingCategory_defaultCategory())
}

func QLoggingCategory_SetFilterRules(rules string) {
	rules_ms := C.struct_miqt_string{}
	rules_ms.data = C.CString(rules)
	rules_ms.len = C.size_t(len(rules))
	defer C.free(unsafe.Pointer(rules_ms.data))
	C.QLoggingCategory_setFilterRules(rules_ms)
}

// Delete this object from C++ memory.
func (this *QLoggingCategory) Delete() {
	C.QLoggingCategory_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLoggingCategory) GoGC() {
	runtime.SetFinalizer(this, func(this *QLoggingCategory) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
