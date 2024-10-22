package qt6

/*

#include "gen_qreadwritelock.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QReadWriteLock__RecursionMode int

const (
	QReadWriteLock__NonRecursive QReadWriteLock__RecursionMode = 0
	QReadWriteLock__Recursive    QReadWriteLock__RecursionMode = 1
)

type QReadWriteLock struct {
	h *C.QReadWriteLock
}

func (this *QReadWriteLock) cPointer() *C.QReadWriteLock {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QReadWriteLock) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQReadWriteLock(h *C.QReadWriteLock) *QReadWriteLock {
	if h == nil {
		return nil
	}
	return &QReadWriteLock{h: h}
}

func UnsafeNewQReadWriteLock(h unsafe.Pointer) *QReadWriteLock {
	return newQReadWriteLock((*C.QReadWriteLock)(h))
}

// NewQReadWriteLock constructs a new QReadWriteLock object.
func NewQReadWriteLock() *QReadWriteLock {
	ret := C.QReadWriteLock_new()
	return newQReadWriteLock(ret)
}

// NewQReadWriteLock2 constructs a new QReadWriteLock object.
func NewQReadWriteLock2(recursionMode QReadWriteLock__RecursionMode) *QReadWriteLock {
	ret := C.QReadWriteLock_new2((C.int)(recursionMode))
	return newQReadWriteLock(ret)
}

func (this *QReadWriteLock) LockForRead() {
	C.QReadWriteLock_LockForRead(this.h)
}

func (this *QReadWriteLock) TryLockForRead() bool {
	return (bool)(C.QReadWriteLock_TryLockForRead(this.h))
}

func (this *QReadWriteLock) TryLockForReadWithTimeout(timeout int) bool {
	return (bool)(C.QReadWriteLock_TryLockForReadWithTimeout(this.h, (C.int)(timeout)))
}

func (this *QReadWriteLock) LockForWrite() {
	C.QReadWriteLock_LockForWrite(this.h)
}

func (this *QReadWriteLock) TryLockForWrite() bool {
	return (bool)(C.QReadWriteLock_TryLockForWrite(this.h))
}

func (this *QReadWriteLock) TryLockForWriteWithTimeout(timeout int) bool {
	return (bool)(C.QReadWriteLock_TryLockForWriteWithTimeout(this.h, (C.int)(timeout)))
}

func (this *QReadWriteLock) Unlock() {
	C.QReadWriteLock_Unlock(this.h)
}

// Delete this object from C++ memory.
func (this *QReadWriteLock) Delete() {
	C.QReadWriteLock_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QReadWriteLock) GoGC() {
	runtime.SetFinalizer(this, func(this *QReadWriteLock) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QReadLocker struct {
	h *C.QReadLocker
}

func (this *QReadLocker) cPointer() *C.QReadLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QReadLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQReadLocker(h *C.QReadLocker) *QReadLocker {
	if h == nil {
		return nil
	}
	return &QReadLocker{h: h}
}

func UnsafeNewQReadLocker(h unsafe.Pointer) *QReadLocker {
	return newQReadLocker((*C.QReadLocker)(h))
}

// NewQReadLocker constructs a new QReadLocker object.
func NewQReadLocker(readWriteLock *QReadWriteLock) *QReadLocker {
	ret := C.QReadLocker_new(readWriteLock.cPointer())
	return newQReadLocker(ret)
}

func (this *QReadLocker) Unlock() {
	C.QReadLocker_Unlock(this.h)
}

func (this *QReadLocker) Relock() {
	C.QReadLocker_Relock(this.h)
}

func (this *QReadLocker) ReadWriteLock() *QReadWriteLock {
	return UnsafeNewQReadWriteLock(unsafe.Pointer(C.QReadLocker_ReadWriteLock(this.h)))
}

// Delete this object from C++ memory.
func (this *QReadLocker) Delete() {
	C.QReadLocker_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QReadLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QReadLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWriteLocker struct {
	h *C.QWriteLocker
}

func (this *QWriteLocker) cPointer() *C.QWriteLocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWriteLocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQWriteLocker(h *C.QWriteLocker) *QWriteLocker {
	if h == nil {
		return nil
	}
	return &QWriteLocker{h: h}
}

func UnsafeNewQWriteLocker(h unsafe.Pointer) *QWriteLocker {
	return newQWriteLocker((*C.QWriteLocker)(h))
}

// NewQWriteLocker constructs a new QWriteLocker object.
func NewQWriteLocker(readWriteLock *QReadWriteLock) *QWriteLocker {
	ret := C.QWriteLocker_new(readWriteLock.cPointer())
	return newQWriteLocker(ret)
}

func (this *QWriteLocker) Unlock() {
	C.QWriteLocker_Unlock(this.h)
}

func (this *QWriteLocker) Relock() {
	C.QWriteLocker_Relock(this.h)
}

func (this *QWriteLocker) ReadWriteLock() *QReadWriteLock {
	return UnsafeNewQReadWriteLock(unsafe.Pointer(C.QWriteLocker_ReadWriteLock(this.h)))
}

// Delete this object from C++ memory.
func (this *QWriteLocker) Delete() {
	C.QWriteLocker_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWriteLocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QWriteLocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}