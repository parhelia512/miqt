#include <QThreadStorageData>
#include <qthreadstorage.h>
#include "gen_qthreadstorage.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QThreadStorageData* QThreadStorageData_new(QThreadStorageData* param1) {
	return new QThreadStorageData(*param1);
}

void QThreadStorageData_Delete(QThreadStorageData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QThreadStorageData*>( self );
	} else {
		delete self;
	}
}

