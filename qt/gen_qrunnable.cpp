#include <QRunnable>
#include "qrunnable.h"

#include "gen_qrunnable.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

void QRunnable_Run(QRunnable* self) {
	self->run();
}

bool QRunnable_AutoDelete(QRunnable* self) {
	return const_cast<const QRunnable*>(self)->autoDelete();
}

void QRunnable_SetAutoDelete(QRunnable* self, bool _autoDelete) {
	self->setAutoDelete(_autoDelete);
}

void QRunnable_OperatorAssign(QRunnable* self, QRunnable* param1) {
	self->operator=(*param1);
}

void QRunnable_Delete(QRunnable* self) {
	delete self;
}
