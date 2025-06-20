#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgRenderer>
#include <QSvgWidget>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsvgwidget.h>
#include "gen_qsvgwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

QSize* miqt_exec_callback_QSvgWidget_sizeHint(const QSvgWidget*, intptr_t);
void miqt_exec_callback_QSvgWidget_paintEvent(QSvgWidget*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QSvgWidget_devType(const QSvgWidget*, intptr_t);
void miqt_exec_callback_QSvgWidget_setVisible(QSvgWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QSvgWidget_minimumSizeHint(const QSvgWidget*, intptr_t);
int miqt_exec_callback_QSvgWidget_heightForWidth(const QSvgWidget*, intptr_t, int);
bool miqt_exec_callback_QSvgWidget_hasHeightForWidth(const QSvgWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QSvgWidget_paintEngine(const QSvgWidget*, intptr_t);
bool miqt_exec_callback_QSvgWidget_event(QSvgWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgWidget_mousePressEvent(QSvgWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSvgWidget_mouseReleaseEvent(QSvgWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSvgWidget_mouseDoubleClickEvent(QSvgWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSvgWidget_mouseMoveEvent(QSvgWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QSvgWidget_wheelEvent(QSvgWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QSvgWidget_keyPressEvent(QSvgWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSvgWidget_keyReleaseEvent(QSvgWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QSvgWidget_focusInEvent(QSvgWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSvgWidget_focusOutEvent(QSvgWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QSvgWidget_enterEvent(QSvgWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgWidget_leaveEvent(QSvgWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgWidget_moveEvent(QSvgWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QSvgWidget_resizeEvent(QSvgWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QSvgWidget_closeEvent(QSvgWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QSvgWidget_contextMenuEvent(QSvgWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QSvgWidget_tabletEvent(QSvgWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QSvgWidget_actionEvent(QSvgWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QSvgWidget_dragEnterEvent(QSvgWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QSvgWidget_dragMoveEvent(QSvgWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QSvgWidget_dragLeaveEvent(QSvgWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QSvgWidget_dropEvent(QSvgWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QSvgWidget_showEvent(QSvgWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QSvgWidget_hideEvent(QSvgWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QSvgWidget_nativeEvent(QSvgWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QSvgWidget_changeEvent(QSvgWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QSvgWidget_metric(const QSvgWidget*, intptr_t, int);
void miqt_exec_callback_QSvgWidget_initPainter(const QSvgWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QSvgWidget_redirected(const QSvgWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QSvgWidget_sharedPainter(const QSvgWidget*, intptr_t);
void miqt_exec_callback_QSvgWidget_inputMethodEvent(QSvgWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QSvgWidget_inputMethodQuery(const QSvgWidget*, intptr_t, int);
bool miqt_exec_callback_QSvgWidget_focusNextPrevChild(QSvgWidget*, intptr_t, bool);
bool miqt_exec_callback_QSvgWidget_eventFilter(QSvgWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSvgWidget_timerEvent(QSvgWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSvgWidget_childEvent(QSvgWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSvgWidget_customEvent(QSvgWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QSvgWidget_connectNotify(QSvgWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSvgWidget_disconnectNotify(QSvgWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSvgWidget final : public QSvgWidget {
public:

	MiqtVirtualQSvgWidget(QWidget* parent): QSvgWidget(parent) {}
	MiqtVirtualQSvgWidget(): QSvgWidget() {}
	MiqtVirtualQSvgWidget(const QString& file): QSvgWidget(file) {}
	MiqtVirtualQSvgWidget(const QString& file, QWidget* parent): QSvgWidget(file, parent) {}

	virtual ~MiqtVirtualQSvgWidget() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__sizeHint == 0) {
			return QSvgWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSvgWidget_sizeHint(this, handle__sizeHint);
		return *callback_return_value;
	}

	friend QSize* QSvgWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__paintEvent == 0) {
			QSvgWidget::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_paintEvent(this, handle__paintEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__devType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__devType == 0) {
			return QSvgWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QSvgWidget_devType(this, handle__devType);
		return static_cast<int>(callback_return_value);
	}

	friend int QSvgWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__setVisible == 0) {
			QSvgWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QSvgWidget_setVisible(this, handle__setVisible, sigval1);

	}

	friend void QSvgWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__minimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__minimumSizeHint == 0) {
			return QSvgWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSvgWidget_minimumSizeHint(this, handle__minimumSizeHint);
		return *callback_return_value;
	}

	friend QSize* QSvgWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__heightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__heightForWidth == 0) {
			return QSvgWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QSvgWidget_heightForWidth(this, handle__heightForWidth, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSvgWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__hasHeightForWidth == 0) {
			return QSvgWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QSvgWidget_hasHeightForWidth(this, handle__hasHeightForWidth);
		return callback_return_value;
	}

	friend bool QSvgWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__paintEngine == 0) {
			return QSvgWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QSvgWidget_paintEngine(this, handle__paintEngine);
		return callback_return_value;
	}

	friend QPaintEngine* QSvgWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QSvgWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSvgWidget_event(this, handle__event, sigval1);
		return callback_return_value;
	}

	friend bool QSvgWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__mousePressEvent == 0) {
			QSvgWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_mousePressEvent(this, handle__mousePressEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__mouseReleaseEvent == 0) {
			QSvgWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__mouseDoubleClickEvent == 0) {
			QSvgWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__mouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__mouseMoveEvent == 0) {
			QSvgWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_mouseMoveEvent(this, handle__mouseMoveEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__wheelEvent == 0) {
			QSvgWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_wheelEvent(this, handle__wheelEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (handle__keyPressEvent == 0) {
			QSvgWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_keyPressEvent(this, handle__keyPressEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (handle__keyReleaseEvent == 0) {
			QSvgWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_keyReleaseEvent(this, handle__keyReleaseEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__focusInEvent == 0) {
			QSvgWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_focusInEvent(this, handle__focusInEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__focusOutEvent == 0) {
			QSvgWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_focusOutEvent(this, handle__focusOutEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__enterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__enterEvent == 0) {
			QSvgWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_enterEvent(this, handle__enterEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__leaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__leaveEvent == 0) {
			QSvgWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_leaveEvent(this, handle__leaveEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__moveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__moveEvent == 0) {
			QSvgWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_moveEvent(this, handle__moveEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__resizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__resizeEvent == 0) {
			QSvgWidget::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_resizeEvent(this, handle__resizeEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__closeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__closeEvent == 0) {
			QSvgWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_closeEvent(this, handle__closeEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__contextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__contextMenuEvent == 0) {
			QSvgWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_contextMenuEvent(this, handle__contextMenuEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__tabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__tabletEvent == 0) {
			QSvgWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_tabletEvent(this, handle__tabletEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__actionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__actionEvent == 0) {
			QSvgWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_actionEvent(this, handle__actionEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__dragEnterEvent == 0) {
			QSvgWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_dragEnterEvent(this, handle__dragEnterEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__dragMoveEvent == 0) {
			QSvgWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_dragMoveEvent(this, handle__dragMoveEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__dragLeaveEvent == 0) {
			QSvgWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_dragLeaveEvent(this, handle__dragLeaveEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__dropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__dropEvent == 0) {
			QSvgWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_dropEvent(this, handle__dropEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__showEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__showEvent == 0) {
			QSvgWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_showEvent(this, handle__showEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__hideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__hideEvent == 0) {
			QSvgWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_hideEvent(this, handle__hideEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__nativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__nativeEvent == 0) {
			return QSvgWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QSvgWidget_nativeEvent(this, handle__nativeEvent, sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSvgWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__changeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__changeEvent == 0) {
			QSvgWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QSvgWidget_changeEvent(this, handle__changeEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__metric == 0) {
			return QSvgWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QSvgWidget_metric(this, handle__metric, sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSvgWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__initPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__initPainter == 0) {
			QSvgWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QSvgWidget_initPainter(this, handle__initPainter, sigval1);

	}

	friend void QSvgWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__redirected == 0) {
			return QSvgWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QSvgWidget_redirected(this, handle__redirected, sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QSvgWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__sharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__sharedPainter == 0) {
			return QSvgWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QSvgWidget_sharedPainter(this, handle__sharedPainter);
		return callback_return_value;
	}

	friend QPainter* QSvgWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__inputMethodEvent == 0) {
			QSvgWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QSvgWidget_inputMethodEvent(this, handle__inputMethodEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__inputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__inputMethodQuery == 0) {
			return QSvgWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QSvgWidget_inputMethodQuery(this, handle__inputMethodQuery, sigval1);
		return *callback_return_value;
	}

	friend QVariant* QSvgWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__focusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__focusNextPrevChild == 0) {
			return QSvgWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QSvgWidget_focusNextPrevChild(this, handle__focusNextPrevChild, sigval1);
		return callback_return_value;
	}

	friend bool QSvgWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QSvgWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSvgWidget_eventFilter(this, handle__eventFilter, sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSvgWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QSvgWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_timerEvent(this, handle__timerEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QSvgWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_childEvent(this, handle__childEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QSvgWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSvgWidget_customEvent(this, handle__customEvent, sigval1);

	}

	friend void QSvgWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QSvgWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSvgWidget_connectNotify(this, handle__connectNotify, sigval1);

	}

	friend void QSvgWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QSvgWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSvgWidget_disconnectNotify(this, handle__disconnectNotify, sigval1);

	}

	friend void QSvgWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSvgWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QSvgWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QSvgWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QSvgWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QSvgWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QSvgWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSvgWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSvgWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSvgWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSvgWidget* QSvgWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQSvgWidget(parent);
}

QSvgWidget* QSvgWidget_new2() {
	return new (std::nothrow) MiqtVirtualQSvgWidget();
}

QSvgWidget* QSvgWidget_new3(struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new (std::nothrow) MiqtVirtualQSvgWidget(file_QString);
}

QSvgWidget* QSvgWidget_new4(struct miqt_string file, QWidget* parent) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	return new (std::nothrow) MiqtVirtualQSvgWidget(file_QString, parent);
}

void QSvgWidget_virtbase(QSvgWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QSvgWidget_metaObject(const QSvgWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSvgWidget_metacast(QSvgWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSvgWidget_tr(const char* s) {
	QString _ret = QSvgWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgWidget_trUtf8(const char* s) {
	QString _ret = QSvgWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSvgRenderer* QSvgWidget_renderer(const QSvgWidget* self) {
	return self->renderer();
}

QSize* QSvgWidget_sizeHint(const QSvgWidget* self) {
	return new QSize(self->sizeHint());
}

void QSvgWidget_load(QSvgWidget* self, struct miqt_string file) {
	QString file_QString = QString::fromUtf8(file.data, file.len);
	self->load(file_QString);
}

void QSvgWidget_loadWithContents(QSvgWidget* self, struct miqt_string contents) {
	QByteArray contents_QByteArray(contents.data, contents.len);
	self->load(contents_QByteArray);
}

struct miqt_string QSvgWidget_tr2(const char* s, const char* c) {
	QString _ret = QSvgWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QSvgWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QSvgWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSvgWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSvgWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSvgWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = slot;
	return true;
}

QSize* QSvgWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::sizeHint());
}

bool QSvgWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::paintEvent(event);
}

bool QSvgWidget_override_virtual_devType(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = slot;
	return true;
}

int QSvgWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::devType();
}

bool QSvgWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = slot;
	return true;
}

void QSvgWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::setVisible(visible);
}

bool QSvgWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = slot;
	return true;
}

QSize* QSvgWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::minimumSizeHint());
}

bool QSvgWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = slot;
	return true;
}

int QSvgWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::heightForWidth(static_cast<int>(param1));
}

bool QSvgWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = slot;
	return true;
}

bool QSvgWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::hasHeightForWidth();
}

bool QSvgWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = slot;
	return true;
}

QPaintEngine* QSvgWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::paintEngine();
}

bool QSvgWidget_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = slot;
	return true;
}

bool QSvgWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::event(event);
}

bool QSvgWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::mousePressEvent(event);
}

bool QSvgWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::mouseReleaseEvent(event);
}

bool QSvgWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::mouseDoubleClickEvent(event);
}

bool QSvgWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::mouseMoveEvent(event);
}

bool QSvgWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::wheelEvent(event);
}

bool QSvgWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::keyPressEvent(event);
}

bool QSvgWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::keyReleaseEvent(event);
}

bool QSvgWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::focusInEvent(event);
}

bool QSvgWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::focusOutEvent(event);
}

bool QSvgWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::enterEvent(event);
}

bool QSvgWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::leaveEvent(event);
}

bool QSvgWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::moveEvent(event);
}

bool QSvgWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::resizeEvent(event);
}

bool QSvgWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::closeEvent(event);
}

bool QSvgWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::contextMenuEvent(event);
}

bool QSvgWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::tabletEvent(event);
}

bool QSvgWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::actionEvent(event);
}

bool QSvgWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::dragEnterEvent(event);
}

bool QSvgWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::dragMoveEvent(event);
}

bool QSvgWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::dragLeaveEvent(event);
}

bool QSvgWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::dropEvent(event);
}

bool QSvgWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::showEvent(event);
}

bool QSvgWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::hideEvent(event);
}

bool QSvgWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = slot;
	return true;
}

bool QSvgWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QSvgWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::changeEvent(param1);
}

bool QSvgWidget_override_virtual_metric(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = slot;
	return true;
}

int QSvgWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::metric(static_cast<MiqtVirtualQSvgWidget::PaintDeviceMetric>(param1));
}

bool QSvgWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = slot;
	return true;
}

void QSvgWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::initPainter(painter);
}

bool QSvgWidget_override_virtual_redirected(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = slot;
	return true;
}

QPaintDevice* QSvgWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::redirected(offset);
}

bool QSvgWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = slot;
	return true;
}

QPainter* QSvgWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::sharedPainter();
}

bool QSvgWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::inputMethodEvent(param1);
}

bool QSvgWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = slot;
	return true;
}

QVariant* QSvgWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQSvgWidget*>(self)->QSvgWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QSvgWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = slot;
	return true;
}

bool QSvgWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::focusNextPrevChild(next);
}

bool QSvgWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = slot;
	return true;
}

bool QSvgWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::eventFilter(watched, event);
}

bool QSvgWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::timerEvent(event);
}

bool QSvgWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::childEvent(event);
}

bool QSvgWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = slot;
	return true;
}

void QSvgWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::customEvent(event);
}

bool QSvgWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = slot;
	return true;
}

void QSvgWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::connectNotify(*signal);
}

bool QSvgWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QSvgWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSvgWidget*>(self)->QSvgWidget::disconnectNotify(*signal);
}

void QSvgWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QSvgWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QSvgWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QSvgWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QSvgWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QSvgWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSvgWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSvgWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSvgWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSvgWidget* self_cast = dynamic_cast<MiqtVirtualQSvgWidget*>( (QSvgWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSvgWidget_delete(QSvgWidget* self) {
	delete self;
}

