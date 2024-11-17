package multimedia

/*

#include "gen_qradiodata.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QRadioData__Error int

const (
	QRadioData__NoError         QRadioData__Error = 0
	QRadioData__ResourceError   QRadioData__Error = 1
	QRadioData__OpenError       QRadioData__Error = 2
	QRadioData__OutOfRangeError QRadioData__Error = 3
)

type QRadioData__ProgramType int

const (
	QRadioData__Undefined           QRadioData__ProgramType = 0
	QRadioData__News                QRadioData__ProgramType = 1
	QRadioData__CurrentAffairs      QRadioData__ProgramType = 2
	QRadioData__Information         QRadioData__ProgramType = 3
	QRadioData__Sport               QRadioData__ProgramType = 4
	QRadioData__Education           QRadioData__ProgramType = 5
	QRadioData__Drama               QRadioData__ProgramType = 6
	QRadioData__Culture             QRadioData__ProgramType = 7
	QRadioData__Science             QRadioData__ProgramType = 8
	QRadioData__Varied              QRadioData__ProgramType = 9
	QRadioData__PopMusic            QRadioData__ProgramType = 10
	QRadioData__RockMusic           QRadioData__ProgramType = 11
	QRadioData__EasyListening       QRadioData__ProgramType = 12
	QRadioData__LightClassical      QRadioData__ProgramType = 13
	QRadioData__SeriousClassical    QRadioData__ProgramType = 14
	QRadioData__OtherMusic          QRadioData__ProgramType = 15
	QRadioData__Weather             QRadioData__ProgramType = 16
	QRadioData__Finance             QRadioData__ProgramType = 17
	QRadioData__ChildrensProgrammes QRadioData__ProgramType = 18
	QRadioData__SocialAffairs       QRadioData__ProgramType = 19
	QRadioData__Religion            QRadioData__ProgramType = 20
	QRadioData__PhoneIn             QRadioData__ProgramType = 21
	QRadioData__Travel              QRadioData__ProgramType = 22
	QRadioData__Leisure             QRadioData__ProgramType = 23
	QRadioData__JazzMusic           QRadioData__ProgramType = 24
	QRadioData__CountryMusic        QRadioData__ProgramType = 25
	QRadioData__NationalMusic       QRadioData__ProgramType = 26
	QRadioData__OldiesMusic         QRadioData__ProgramType = 27
	QRadioData__FolkMusic           QRadioData__ProgramType = 28
	QRadioData__Documentary         QRadioData__ProgramType = 29
	QRadioData__AlarmTest           QRadioData__ProgramType = 30
	QRadioData__Alarm               QRadioData__ProgramType = 31
	QRadioData__Talk                QRadioData__ProgramType = 32
	QRadioData__ClassicRock         QRadioData__ProgramType = 33
	QRadioData__AdultHits           QRadioData__ProgramType = 34
	QRadioData__SoftRock            QRadioData__ProgramType = 35
	QRadioData__Top40               QRadioData__ProgramType = 36
	QRadioData__Soft                QRadioData__ProgramType = 37
	QRadioData__Nostalgia           QRadioData__ProgramType = 38
	QRadioData__Classical           QRadioData__ProgramType = 39
	QRadioData__RhythmAndBlues      QRadioData__ProgramType = 40
	QRadioData__SoftRhythmAndBlues  QRadioData__ProgramType = 41
	QRadioData__Language            QRadioData__ProgramType = 42
	QRadioData__ReligiousMusic      QRadioData__ProgramType = 43
	QRadioData__ReligiousTalk       QRadioData__ProgramType = 44
	QRadioData__Personality         QRadioData__ProgramType = 45
	QRadioData__Public              QRadioData__ProgramType = 46
	QRadioData__College             QRadioData__ProgramType = 47
)

type QRadioData struct {
	h *C.QRadioData
	*qt.QObject
	*QMediaBindableInterface
}

func (this *QRadioData) cPointer() *C.QRadioData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRadioData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRadioData(h *C.QRadioData) *QRadioData {
	if h == nil {
		return nil
	}
	return &QRadioData{h: h, QObject: qt.UnsafeNewQObject(unsafe.Pointer(h)), QMediaBindableInterface: UnsafeNewQMediaBindableInterface(unsafe.Pointer(h))}
}

func UnsafeNewQRadioData(h unsafe.Pointer) *QRadioData {
	return newQRadioData((*C.QRadioData)(h))
}

// NewQRadioData constructs a new QRadioData object.
func NewQRadioData(mediaObject *QMediaObject) *QRadioData {
	ret := C.QRadioData_new(mediaObject.cPointer())
	return newQRadioData(ret)
}

// NewQRadioData2 constructs a new QRadioData object.
func NewQRadioData2(mediaObject *QMediaObject, parent *qt.QObject) *QRadioData {
	ret := C.QRadioData_new2(mediaObject.cPointer(), (*C.QObject)(parent.UnsafePointer()))
	return newQRadioData(ret)
}

func (this *QRadioData) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QRadioData_MetaObject(this.h)))
}

func (this *QRadioData) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRadioData_Metacast(this.h, param1_Cstring))
}

func QRadioData_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioData_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) Availability() QMultimedia__AvailabilityStatus {
	return (QMultimedia__AvailabilityStatus)(C.QRadioData_Availability(this.h))
}

func (this *QRadioData) MediaObject() *QMediaObject {
	return UnsafeNewQMediaObject(unsafe.Pointer(C.QRadioData_MediaObject(this.h)))
}

func (this *QRadioData) StationId() string {
	var _ms C.struct_miqt_string = C.QRadioData_StationId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) ProgramType() QRadioData__ProgramType {
	return (QRadioData__ProgramType)(C.QRadioData_ProgramType(this.h))
}

func (this *QRadioData) ProgramTypeName() string {
	var _ms C.struct_miqt_string = C.QRadioData_ProgramTypeName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) StationName() string {
	var _ms C.struct_miqt_string = C.QRadioData_StationName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) RadioText() string {
	var _ms C.struct_miqt_string = C.QRadioData_RadioText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) IsAlternativeFrequenciesEnabled() bool {
	return (bool)(C.QRadioData_IsAlternativeFrequenciesEnabled(this.h))
}

func (this *QRadioData) Error() QRadioData__Error {
	return (QRadioData__Error)(C.QRadioData_Error(this.h))
}

func (this *QRadioData) ErrorString() string {
	var _ms C.struct_miqt_string = C.QRadioData_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRadioData) SetAlternativeFrequenciesEnabled(enabled bool) {
	C.QRadioData_SetAlternativeFrequenciesEnabled(this.h, (C.bool)(enabled))
}

func (this *QRadioData) StationIdChanged(stationId string) {
	stationId_ms := C.struct_miqt_string{}
	stationId_ms.data = C.CString(stationId)
	stationId_ms.len = C.size_t(len(stationId))
	defer C.free(unsafe.Pointer(stationId_ms.data))
	C.QRadioData_StationIdChanged(this.h, stationId_ms)
}
func (this *QRadioData) OnStationIdChanged(slot func(stationId string)) {
	C.QRadioData_connect_StationIdChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_StationIdChanged
func miqt_exec_callback_QRadioData_StationIdChanged(cb C.intptr_t, stationId C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stationId string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var stationId_ms C.struct_miqt_string = stationId
	stationId_ret := C.GoStringN(stationId_ms.data, C.int(int64(stationId_ms.len)))
	C.free(unsafe.Pointer(stationId_ms.data))
	slotval1 := stationId_ret

	gofunc(slotval1)
}

func (this *QRadioData) ProgramTypeChanged(programType QRadioData__ProgramType) {
	C.QRadioData_ProgramTypeChanged(this.h, (C.int)(programType))
}
func (this *QRadioData) OnProgramTypeChanged(slot func(programType QRadioData__ProgramType)) {
	C.QRadioData_connect_ProgramTypeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_ProgramTypeChanged
func miqt_exec_callback_QRadioData_ProgramTypeChanged(cb C.intptr_t, programType C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(programType QRadioData__ProgramType))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioData__ProgramType)(programType)

	gofunc(slotval1)
}

func (this *QRadioData) ProgramTypeNameChanged(programTypeName string) {
	programTypeName_ms := C.struct_miqt_string{}
	programTypeName_ms.data = C.CString(programTypeName)
	programTypeName_ms.len = C.size_t(len(programTypeName))
	defer C.free(unsafe.Pointer(programTypeName_ms.data))
	C.QRadioData_ProgramTypeNameChanged(this.h, programTypeName_ms)
}
func (this *QRadioData) OnProgramTypeNameChanged(slot func(programTypeName string)) {
	C.QRadioData_connect_ProgramTypeNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_ProgramTypeNameChanged
func miqt_exec_callback_QRadioData_ProgramTypeNameChanged(cb C.intptr_t, programTypeName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(programTypeName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var programTypeName_ms C.struct_miqt_string = programTypeName
	programTypeName_ret := C.GoStringN(programTypeName_ms.data, C.int(int64(programTypeName_ms.len)))
	C.free(unsafe.Pointer(programTypeName_ms.data))
	slotval1 := programTypeName_ret

	gofunc(slotval1)
}

func (this *QRadioData) StationNameChanged(stationName string) {
	stationName_ms := C.struct_miqt_string{}
	stationName_ms.data = C.CString(stationName)
	stationName_ms.len = C.size_t(len(stationName))
	defer C.free(unsafe.Pointer(stationName_ms.data))
	C.QRadioData_StationNameChanged(this.h, stationName_ms)
}
func (this *QRadioData) OnStationNameChanged(slot func(stationName string)) {
	C.QRadioData_connect_StationNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_StationNameChanged
func miqt_exec_callback_QRadioData_StationNameChanged(cb C.intptr_t, stationName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(stationName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var stationName_ms C.struct_miqt_string = stationName
	stationName_ret := C.GoStringN(stationName_ms.data, C.int(int64(stationName_ms.len)))
	C.free(unsafe.Pointer(stationName_ms.data))
	slotval1 := stationName_ret

	gofunc(slotval1)
}

func (this *QRadioData) RadioTextChanged(radioText string) {
	radioText_ms := C.struct_miqt_string{}
	radioText_ms.data = C.CString(radioText)
	radioText_ms.len = C.size_t(len(radioText))
	defer C.free(unsafe.Pointer(radioText_ms.data))
	C.QRadioData_RadioTextChanged(this.h, radioText_ms)
}
func (this *QRadioData) OnRadioTextChanged(slot func(radioText string)) {
	C.QRadioData_connect_RadioTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_RadioTextChanged
func miqt_exec_callback_QRadioData_RadioTextChanged(cb C.intptr_t, radioText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(radioText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var radioText_ms C.struct_miqt_string = radioText
	radioText_ret := C.GoStringN(radioText_ms.data, C.int(int64(radioText_ms.len)))
	C.free(unsafe.Pointer(radioText_ms.data))
	slotval1 := radioText_ret

	gofunc(slotval1)
}

func (this *QRadioData) AlternativeFrequenciesEnabledChanged(enabled bool) {
	C.QRadioData_AlternativeFrequenciesEnabledChanged(this.h, (C.bool)(enabled))
}
func (this *QRadioData) OnAlternativeFrequenciesEnabledChanged(slot func(enabled bool)) {
	C.QRadioData_connect_AlternativeFrequenciesEnabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_AlternativeFrequenciesEnabledChanged
func miqt_exec_callback_QRadioData_AlternativeFrequenciesEnabledChanged(cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc(slotval1)
}

func (this *QRadioData) ErrorWithError(error QRadioData__Error) {
	C.QRadioData_ErrorWithError(this.h, (C.int)(error))
}
func (this *QRadioData) OnErrorWithError(slot func(error QRadioData__Error)) {
	C.QRadioData_connect_ErrorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QRadioData_ErrorWithError
func miqt_exec_callback_QRadioData_ErrorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QRadioData__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QRadioData__Error)(error)

	gofunc(slotval1)
}

func QRadioData_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioData_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioData_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRadioData_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRadioData_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QRadioData) Delete() {
	C.QRadioData_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRadioData) GoGC() {
	runtime.SetFinalizer(this, func(this *QRadioData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}