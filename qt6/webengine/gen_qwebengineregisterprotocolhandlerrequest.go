package webengine

/*

#include "gen_qwebengineregisterprotocolhandlerrequest.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QWebEngineRegisterProtocolHandlerRequest struct {
	h          *C.QWebEngineRegisterProtocolHandlerRequest
	isSubclass bool
}

func (this *QWebEngineRegisterProtocolHandlerRequest) cPointer() *C.QWebEngineRegisterProtocolHandlerRequest {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWebEngineRegisterProtocolHandlerRequest) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWebEngineRegisterProtocolHandlerRequest constructs the type using only CGO pointers.
func newQWebEngineRegisterProtocolHandlerRequest(h *C.QWebEngineRegisterProtocolHandlerRequest) *QWebEngineRegisterProtocolHandlerRequest {
	if h == nil {
		return nil
	}
	return &QWebEngineRegisterProtocolHandlerRequest{h: h}
}

// UnsafeNewQWebEngineRegisterProtocolHandlerRequest constructs the type using only unsafe pointers.
func UnsafeNewQWebEngineRegisterProtocolHandlerRequest(h unsafe.Pointer) *QWebEngineRegisterProtocolHandlerRequest {
	if h == nil {
		return nil
	}

	return &QWebEngineRegisterProtocolHandlerRequest{h: (*C.QWebEngineRegisterProtocolHandlerRequest)(h)}
}

// NewQWebEngineRegisterProtocolHandlerRequest constructs a new QWebEngineRegisterProtocolHandlerRequest object.
func NewQWebEngineRegisterProtocolHandlerRequest() *QWebEngineRegisterProtocolHandlerRequest {
	var outptr_QWebEngineRegisterProtocolHandlerRequest *C.QWebEngineRegisterProtocolHandlerRequest = nil

	C.QWebEngineRegisterProtocolHandlerRequest_new(&outptr_QWebEngineRegisterProtocolHandlerRequest)
	ret := newQWebEngineRegisterProtocolHandlerRequest(outptr_QWebEngineRegisterProtocolHandlerRequest)
	ret.isSubclass = true
	return ret
}

// NewQWebEngineRegisterProtocolHandlerRequest2 constructs a new QWebEngineRegisterProtocolHandlerRequest object.
func NewQWebEngineRegisterProtocolHandlerRequest2(param1 *QWebEngineRegisterProtocolHandlerRequest) *QWebEngineRegisterProtocolHandlerRequest {
	var outptr_QWebEngineRegisterProtocolHandlerRequest *C.QWebEngineRegisterProtocolHandlerRequest = nil

	C.QWebEngineRegisterProtocolHandlerRequest_new2(param1.cPointer(), &outptr_QWebEngineRegisterProtocolHandlerRequest)
	ret := newQWebEngineRegisterProtocolHandlerRequest(outptr_QWebEngineRegisterProtocolHandlerRequest)
	ret.isSubclass = true
	return ret
}

func (this *QWebEngineRegisterProtocolHandlerRequest) Accept() {
	C.QWebEngineRegisterProtocolHandlerRequest_Accept(this.h)
}

func (this *QWebEngineRegisterProtocolHandlerRequest) Reject() {
	C.QWebEngineRegisterProtocolHandlerRequest_Reject(this.h)
}

func (this *QWebEngineRegisterProtocolHandlerRequest) Origin() *qt6.QUrl {
	_ret := C.QWebEngineRegisterProtocolHandlerRequest_Origin(this.h)
	_goptr := qt6.UnsafeNewQUrl(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWebEngineRegisterProtocolHandlerRequest) Scheme() string {
	var _ms C.struct_miqt_string = C.QWebEngineRegisterProtocolHandlerRequest_Scheme(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWebEngineRegisterProtocolHandlerRequest) OperatorEqual(that *QWebEngineRegisterProtocolHandlerRequest) bool {
	return (bool)(C.QWebEngineRegisterProtocolHandlerRequest_OperatorEqual(this.h, that.cPointer()))
}

func (this *QWebEngineRegisterProtocolHandlerRequest) OperatorNotEqual(that *QWebEngineRegisterProtocolHandlerRequest) bool {
	return (bool)(C.QWebEngineRegisterProtocolHandlerRequest_OperatorNotEqual(this.h, that.cPointer()))
}

// Delete this object from C++ memory.
func (this *QWebEngineRegisterProtocolHandlerRequest) Delete() {
	C.QWebEngineRegisterProtocolHandlerRequest_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWebEngineRegisterProtocolHandlerRequest) GoGC() {
	runtime.SetFinalizer(this, func(this *QWebEngineRegisterProtocolHandlerRequest) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
