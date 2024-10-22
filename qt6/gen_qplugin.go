package qt6

/*

#include "gen_qplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPluginMetaData struct {
	h *C.QPluginMetaData
}

func (this *QPluginMetaData) cPointer() *C.QPluginMetaData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginMetaData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPluginMetaData(h *C.QPluginMetaData) *QPluginMetaData {
	if h == nil {
		return nil
	}
	return &QPluginMetaData{h: h}
}

func UnsafeNewQPluginMetaData(h unsafe.Pointer) *QPluginMetaData {
	return newQPluginMetaData((*C.QPluginMetaData)(h))
}

func QPluginMetaData_ArchRequirements() byte {
	return (byte)(C.QPluginMetaData_ArchRequirements())
}

// Delete this object from C++ memory.
func (this *QPluginMetaData) Delete() {
	C.QPluginMetaData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginMetaData) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginMetaData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStaticPlugin struct {
	h *C.QStaticPlugin
}

func (this *QStaticPlugin) cPointer() *C.QStaticPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStaticPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQStaticPlugin(h *C.QStaticPlugin) *QStaticPlugin {
	if h == nil {
		return nil
	}
	return &QStaticPlugin{h: h}
}

func UnsafeNewQStaticPlugin(h unsafe.Pointer) *QStaticPlugin {
	return newQStaticPlugin((*C.QStaticPlugin)(h))
}

func (this *QStaticPlugin) MetaData() *QJsonObject {
	_ret := C.QStaticPlugin_MetaData(this.h)
	_goptr := newQJsonObject(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStaticPlugin) Delete() {
	C.QStaticPlugin_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStaticPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QStaticPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPluginMetaData__Header struct {
	h *C.QPluginMetaData__Header
}

func (this *QPluginMetaData__Header) cPointer() *C.QPluginMetaData__Header {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginMetaData__Header) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPluginMetaData__Header(h *C.QPluginMetaData__Header) *QPluginMetaData__Header {
	if h == nil {
		return nil
	}
	return &QPluginMetaData__Header{h: h}
}

func UnsafeNewQPluginMetaData__Header(h unsafe.Pointer) *QPluginMetaData__Header {
	return newQPluginMetaData__Header((*C.QPluginMetaData__Header)(h))
}

// NewQPluginMetaData__Header constructs a new QPluginMetaData::Header object.
func NewQPluginMetaData__Header(param1 *QPluginMetaData__Header) *QPluginMetaData__Header {
	ret := C.QPluginMetaData__Header_new(param1.cPointer())
	return newQPluginMetaData__Header(ret)
}

// Delete this object from C++ memory.
func (this *QPluginMetaData__Header) Delete() {
	C.QPluginMetaData__Header_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginMetaData__Header) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginMetaData__Header) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPluginMetaData__MagicHeader struct {
	h *C.QPluginMetaData__MagicHeader
}

func (this *QPluginMetaData__MagicHeader) cPointer() *C.QPluginMetaData__MagicHeader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginMetaData__MagicHeader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPluginMetaData__MagicHeader(h *C.QPluginMetaData__MagicHeader) *QPluginMetaData__MagicHeader {
	if h == nil {
		return nil
	}
	return &QPluginMetaData__MagicHeader{h: h}
}

func UnsafeNewQPluginMetaData__MagicHeader(h unsafe.Pointer) *QPluginMetaData__MagicHeader {
	return newQPluginMetaData__MagicHeader((*C.QPluginMetaData__MagicHeader)(h))
}

// NewQPluginMetaData__MagicHeader constructs a new QPluginMetaData::MagicHeader object.
func NewQPluginMetaData__MagicHeader() *QPluginMetaData__MagicHeader {
	ret := C.QPluginMetaData__MagicHeader_new()
	return newQPluginMetaData__MagicHeader(ret)
}

// Delete this object from C++ memory.
func (this *QPluginMetaData__MagicHeader) Delete() {
	C.QPluginMetaData__MagicHeader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginMetaData__MagicHeader) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginMetaData__MagicHeader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPluginMetaData__ElfNoteHeader struct {
	h *C.QPluginMetaData__ElfNoteHeader
}

func (this *QPluginMetaData__ElfNoteHeader) cPointer() *C.QPluginMetaData__ElfNoteHeader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginMetaData__ElfNoteHeader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQPluginMetaData__ElfNoteHeader(h *C.QPluginMetaData__ElfNoteHeader) *QPluginMetaData__ElfNoteHeader {
	if h == nil {
		return nil
	}
	return &QPluginMetaData__ElfNoteHeader{h: h}
}

func UnsafeNewQPluginMetaData__ElfNoteHeader(h unsafe.Pointer) *QPluginMetaData__ElfNoteHeader {
	return newQPluginMetaData__ElfNoteHeader((*C.QPluginMetaData__ElfNoteHeader)(h))
}

// NewQPluginMetaData__ElfNoteHeader constructs a new QPluginMetaData::ElfNoteHeader object.
func NewQPluginMetaData__ElfNoteHeader(payloadSize uint) *QPluginMetaData__ElfNoteHeader {
	ret := C.QPluginMetaData__ElfNoteHeader_new((C.uint)(payloadSize))
	return newQPluginMetaData__ElfNoteHeader(ret)
}

// NewQPluginMetaData__ElfNoteHeader2 constructs a new QPluginMetaData::ElfNoteHeader object.
func NewQPluginMetaData__ElfNoteHeader2(param1 *QPluginMetaData__ElfNoteHeader) *QPluginMetaData__ElfNoteHeader {
	ret := C.QPluginMetaData__ElfNoteHeader_new2(param1.cPointer())
	return newQPluginMetaData__ElfNoteHeader(ret)
}

// Delete this object from C++ memory.
func (this *QPluginMetaData__ElfNoteHeader) Delete() {
	C.QPluginMetaData__ElfNoteHeader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginMetaData__ElfNoteHeader) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginMetaData__ElfNoteHeader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}