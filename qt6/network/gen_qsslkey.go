package network

/*

#include "gen_qsslkey.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QSslKey struct {
	h *C.QSslKey
}

func (this *QSslKey) cPointer() *C.QSslKey {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSslKey) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSslKey(h *C.QSslKey) *QSslKey {
	if h == nil {
		return nil
	}
	return &QSslKey{h: h}
}

func UnsafeNewQSslKey(h unsafe.Pointer) *QSslKey {
	return newQSslKey((*C.QSslKey)(h))
}

// NewQSslKey constructs a new QSslKey object.
func NewQSslKey() *QSslKey {
	ret := C.QSslKey_new()
	return newQSslKey(ret)
}

// NewQSslKey2 constructs a new QSslKey object.
func NewQSslKey2(encoded []byte, algorithm QSsl__KeyAlgorithm) *QSslKey {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))
	ret := C.QSslKey_new2(encoded_alias, (C.int)(algorithm))
	return newQSslKey(ret)
}

// NewQSslKey3 constructs a new QSslKey object.
func NewQSslKey3(device *qt6.QIODevice, algorithm QSsl__KeyAlgorithm) *QSslKey {
	ret := C.QSslKey_new3((*C.QIODevice)(device.UnsafePointer()), (C.int)(algorithm))
	return newQSslKey(ret)
}

// NewQSslKey4 constructs a new QSslKey object.
func NewQSslKey4(handle unsafe.Pointer) *QSslKey {
	ret := C.QSslKey_new4(handle)
	return newQSslKey(ret)
}

// NewQSslKey5 constructs a new QSslKey object.
func NewQSslKey5(other *QSslKey) *QSslKey {
	ret := C.QSslKey_new5(other.cPointer())
	return newQSslKey(ret)
}

// NewQSslKey6 constructs a new QSslKey object.
func NewQSslKey6(encoded []byte, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat) *QSslKey {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))
	ret := C.QSslKey_new6(encoded_alias, (C.int)(algorithm), (C.int)(format))
	return newQSslKey(ret)
}

// NewQSslKey7 constructs a new QSslKey object.
func NewQSslKey7(encoded []byte, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, typeVal QSsl__KeyType) *QSslKey {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))
	ret := C.QSslKey_new7(encoded_alias, (C.int)(algorithm), (C.int)(format), (C.int)(typeVal))
	return newQSslKey(ret)
}

// NewQSslKey8 constructs a new QSslKey object.
func NewQSslKey8(encoded []byte, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, typeVal QSsl__KeyType, passPhrase []byte) *QSslKey {
	encoded_alias := C.struct_miqt_string{}
	encoded_alias.data = (*C.char)(unsafe.Pointer(&encoded[0]))
	encoded_alias.len = C.size_t(len(encoded))
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))
	ret := C.QSslKey_new8(encoded_alias, (C.int)(algorithm), (C.int)(format), (C.int)(typeVal), passPhrase_alias)
	return newQSslKey(ret)
}

// NewQSslKey9 constructs a new QSslKey object.
func NewQSslKey9(device *qt6.QIODevice, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat) *QSslKey {
	ret := C.QSslKey_new9((*C.QIODevice)(device.UnsafePointer()), (C.int)(algorithm), (C.int)(format))
	return newQSslKey(ret)
}

// NewQSslKey10 constructs a new QSslKey object.
func NewQSslKey10(device *qt6.QIODevice, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, typeVal QSsl__KeyType) *QSslKey {
	ret := C.QSslKey_new10((*C.QIODevice)(device.UnsafePointer()), (C.int)(algorithm), (C.int)(format), (C.int)(typeVal))
	return newQSslKey(ret)
}

// NewQSslKey11 constructs a new QSslKey object.
func NewQSslKey11(device *qt6.QIODevice, algorithm QSsl__KeyAlgorithm, format QSsl__EncodingFormat, typeVal QSsl__KeyType, passPhrase []byte) *QSslKey {
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))
	ret := C.QSslKey_new11((*C.QIODevice)(device.UnsafePointer()), (C.int)(algorithm), (C.int)(format), (C.int)(typeVal), passPhrase_alias)
	return newQSslKey(ret)
}

// NewQSslKey12 constructs a new QSslKey object.
func NewQSslKey12(handle unsafe.Pointer, typeVal QSsl__KeyType) *QSslKey {
	ret := C.QSslKey_new12(handle, (C.int)(typeVal))
	return newQSslKey(ret)
}

func (this *QSslKey) OperatorAssign(other *QSslKey) {
	C.QSslKey_OperatorAssign(this.h, other.cPointer())
}

func (this *QSslKey) Swap(other *QSslKey) {
	C.QSslKey_Swap(this.h, other.cPointer())
}

func (this *QSslKey) IsNull() bool {
	return (bool)(C.QSslKey_IsNull(this.h))
}

func (this *QSslKey) Clear() {
	C.QSslKey_Clear(this.h)
}

func (this *QSslKey) Length() int {
	return (int)(C.QSslKey_Length(this.h))
}

func (this *QSslKey) Type() QSsl__KeyType {
	return (QSsl__KeyType)(C.QSslKey_Type(this.h))
}

func (this *QSslKey) Algorithm() QSsl__KeyAlgorithm {
	return (QSsl__KeyAlgorithm)(C.QSslKey_Algorithm(this.h))
}

func (this *QSslKey) ToPem() []byte {
	var _bytearray C.struct_miqt_string = C.QSslKey_ToPem(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslKey) ToDer() []byte {
	var _bytearray C.struct_miqt_string = C.QSslKey_ToDer(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslKey) Handle() unsafe.Pointer {
	return (unsafe.Pointer)(C.QSslKey_Handle(this.h))
}

func (this *QSslKey) OperatorEqual(key *QSslKey) bool {
	return (bool)(C.QSslKey_OperatorEqual(this.h, key.cPointer()))
}

func (this *QSslKey) OperatorNotEqual(key *QSslKey) bool {
	return (bool)(C.QSslKey_OperatorNotEqual(this.h, key.cPointer()))
}

func (this *QSslKey) ToPem1(passPhrase []byte) []byte {
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))
	var _bytearray C.struct_miqt_string = C.QSslKey_ToPem1(this.h, passPhrase_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSslKey) ToDer1(passPhrase []byte) []byte {
	passPhrase_alias := C.struct_miqt_string{}
	passPhrase_alias.data = (*C.char)(unsafe.Pointer(&passPhrase[0]))
	passPhrase_alias.len = C.size_t(len(passPhrase))
	var _bytearray C.struct_miqt_string = C.QSslKey_ToDer1(this.h, passPhrase_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSslKey) Delete() {
	C.QSslKey_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSslKey) GoGC() {
	runtime.SetFinalizer(this, func(this *QSslKey) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}