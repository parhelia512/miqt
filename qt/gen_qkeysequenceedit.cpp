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
#include <QKeySequence>
#include <QKeySequenceEdit>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qkeysequenceedit.h>
#include "gen_qkeysequenceedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QKeySequenceEdit_EditingFinished(intptr_t);
void miqt_exec_callback_QKeySequenceEdit_KeySequenceChanged(intptr_t, QKeySequence*);
bool miqt_exec_callback_QKeySequenceEdit_Event(void*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_KeyPressEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QKeySequenceEdit_KeyReleaseEvent(void*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QKeySequenceEdit_TimerEvent(void*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QKeySequenceEdit_DevType(void*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_SetVisible(void*, intptr_t, bool);
QSize* miqt_exec_callback_QKeySequenceEdit_SizeHint(void*, intptr_t);
QSize* miqt_exec_callback_QKeySequenceEdit_MinimumSizeHint(void*, intptr_t);
int miqt_exec_callback_QKeySequenceEdit_HeightForWidth(void*, intptr_t, int);
bool miqt_exec_callback_QKeySequenceEdit_HasHeightForWidth(void*, intptr_t);
QPaintEngine* miqt_exec_callback_QKeySequenceEdit_PaintEngine(void*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_MousePressEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_MouseReleaseEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_MouseDoubleClickEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_MouseMoveEvent(void*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_WheelEvent(void*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QKeySequenceEdit_FocusInEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QKeySequenceEdit_FocusOutEvent(void*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QKeySequenceEdit_EnterEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_LeaveEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_PaintEvent(void*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QKeySequenceEdit_MoveEvent(void*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QKeySequenceEdit_ResizeEvent(void*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QKeySequenceEdit_CloseEvent(void*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QKeySequenceEdit_ContextMenuEvent(void*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QKeySequenceEdit_TabletEvent(void*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QKeySequenceEdit_ActionEvent(void*, intptr_t, QActionEvent*);
void miqt_exec_callback_QKeySequenceEdit_DragEnterEvent(void*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QKeySequenceEdit_DragMoveEvent(void*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QKeySequenceEdit_DragLeaveEvent(void*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QKeySequenceEdit_DropEvent(void*, intptr_t, QDropEvent*);
void miqt_exec_callback_QKeySequenceEdit_ShowEvent(void*, intptr_t, QShowEvent*);
void miqt_exec_callback_QKeySequenceEdit_HideEvent(void*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QKeySequenceEdit_NativeEvent(void*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QKeySequenceEdit_ChangeEvent(void*, intptr_t, QEvent*);
int miqt_exec_callback_QKeySequenceEdit_Metric(void*, intptr_t, int);
void miqt_exec_callback_QKeySequenceEdit_InitPainter(void*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QKeySequenceEdit_Redirected(void*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QKeySequenceEdit_SharedPainter(void*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_InputMethodEvent(void*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QKeySequenceEdit_InputMethodQuery(void*, intptr_t, int);
bool miqt_exec_callback_QKeySequenceEdit_FocusNextPrevChild(void*, intptr_t, bool);
bool miqt_exec_callback_QKeySequenceEdit_EventFilter(void*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_ChildEvent(void*, intptr_t, QChildEvent*);
void miqt_exec_callback_QKeySequenceEdit_CustomEvent(void*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_ConnectNotify(void*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QKeySequenceEdit_DisconnectNotify(void*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQKeySequenceEdit final : public QKeySequenceEdit {
public:

	MiqtVirtualQKeySequenceEdit(QWidget* parent): QKeySequenceEdit(parent) {};
	MiqtVirtualQKeySequenceEdit(): QKeySequenceEdit() {};
	MiqtVirtualQKeySequenceEdit(const QKeySequence& keySequence): QKeySequenceEdit(keySequence) {};
	MiqtVirtualQKeySequenceEdit(const QKeySequence& keySequence, QWidget* parent): QKeySequenceEdit(keySequence, parent) {};

	virtual ~MiqtVirtualQKeySequenceEdit() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QKeySequenceEdit::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QKeySequenceEdit::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyPressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (handle__KeyPressEvent == 0) {
			QKeySequenceEdit::keyPressEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_KeyPressEvent(this, handle__KeyPressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyPressEvent(QKeyEvent* param1) {

		QKeySequenceEdit::keyPressEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__KeyReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (handle__KeyReleaseEvent == 0) {
			QKeySequenceEdit::keyReleaseEvent(param1);
			return;
		}
		
		QKeyEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_KeyReleaseEvent(this, handle__KeyReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_KeyReleaseEvent(QKeyEvent* param1) {

		QKeySequenceEdit::keyReleaseEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (handle__TimerEvent == 0) {
			QKeySequenceEdit::timerEvent(param1);
			return;
		}
		
		QTimerEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* param1) {

		QKeySequenceEdit::timerEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DevType = 0;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (handle__DevType == 0) {
			return QKeySequenceEdit::devType();
		}
		

		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_DevType(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__DevType);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_DevType() const {

		return QKeySequenceEdit::devType();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetVisible = 0;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (handle__SetVisible == 0) {
			QKeySequenceEdit::setVisible(visible);
			return;
		}
		
		bool sigval1 = visible;

		miqt_exec_callback_QKeySequenceEdit_SetVisible(this, handle__SetVisible, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetVisible(bool visible) {

		QKeySequenceEdit::setVisible(visible);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (handle__SizeHint == 0) {
			return QKeySequenceEdit::sizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QKeySequenceEdit_SizeHint(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__SizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint() const {

		return new QSize(QKeySequenceEdit::sizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MinimumSizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (handle__MinimumSizeHint == 0) {
			return QKeySequenceEdit::minimumSizeHint();
		}
		

		QSize* callback_return_value = miqt_exec_callback_QKeySequenceEdit_MinimumSizeHint(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__MinimumSizeHint);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_MinimumSizeHint() const {

		return new QSize(QKeySequenceEdit::minimumSizeHint());

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (handle__HeightForWidth == 0) {
			return QKeySequenceEdit::heightForWidth(param1);
		}
		
		int sigval1 = param1;

		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_HeightForWidth(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__HeightForWidth, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_HeightForWidth(int param1) const {

		return QKeySequenceEdit::heightForWidth(static_cast<int>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HasHeightForWidth = 0;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (handle__HasHeightForWidth == 0) {
			return QKeySequenceEdit::hasHeightForWidth();
		}
		

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_HasHeightForWidth(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__HasHeightForWidth);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HasHeightForWidth() const {

		return QKeySequenceEdit::hasHeightForWidth();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEngine = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (handle__PaintEngine == 0) {
			return QKeySequenceEdit::paintEngine();
		}
		

		QPaintEngine* callback_return_value = miqt_exec_callback_QKeySequenceEdit_PaintEngine(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__PaintEngine);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintEngine* virtualbase_PaintEngine() const {

		return QKeySequenceEdit::paintEngine();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MousePressEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (handle__MousePressEvent == 0) {
			QKeySequenceEdit::mousePressEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_MousePressEvent(this, handle__MousePressEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MousePressEvent(QMouseEvent* event) {

		QKeySequenceEdit::mousePressEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseReleaseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (handle__MouseReleaseEvent == 0) {
			QKeySequenceEdit::mouseReleaseEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_MouseReleaseEvent(this, handle__MouseReleaseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseReleaseEvent(QMouseEvent* event) {

		QKeySequenceEdit::mouseReleaseEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseDoubleClickEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (handle__MouseDoubleClickEvent == 0) {
			QKeySequenceEdit::mouseDoubleClickEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_MouseDoubleClickEvent(this, handle__MouseDoubleClickEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseDoubleClickEvent(QMouseEvent* event) {

		QKeySequenceEdit::mouseDoubleClickEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MouseMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (handle__MouseMoveEvent == 0) {
			QKeySequenceEdit::mouseMoveEvent(event);
			return;
		}
		
		QMouseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_MouseMoveEvent(this, handle__MouseMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MouseMoveEvent(QMouseEvent* event) {

		QKeySequenceEdit::mouseMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__WheelEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (handle__WheelEvent == 0) {
			QKeySequenceEdit::wheelEvent(event);
			return;
		}
		
		QWheelEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_WheelEvent(this, handle__WheelEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_WheelEvent(QWheelEvent* event) {

		QKeySequenceEdit::wheelEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusInEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (handle__FocusInEvent == 0) {
			QKeySequenceEdit::focusInEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_FocusInEvent(this, handle__FocusInEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusInEvent(QFocusEvent* event) {

		QKeySequenceEdit::focusInEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusOutEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (handle__FocusOutEvent == 0) {
			QKeySequenceEdit::focusOutEvent(event);
			return;
		}
		
		QFocusEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_FocusOutEvent(this, handle__FocusOutEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_FocusOutEvent(QFocusEvent* event) {

		QKeySequenceEdit::focusOutEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (handle__EnterEvent == 0) {
			QKeySequenceEdit::enterEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_EnterEvent(this, handle__EnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_EnterEvent(QEvent* event) {

		QKeySequenceEdit::enterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__LeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (handle__LeaveEvent == 0) {
			QKeySequenceEdit::leaveEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_LeaveEvent(this, handle__LeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_LeaveEvent(QEvent* event) {

		QKeySequenceEdit::leaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (handle__PaintEvent == 0) {
			QKeySequenceEdit::paintEvent(event);
			return;
		}
		
		QPaintEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_PaintEvent(this, handle__PaintEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_PaintEvent(QPaintEvent* event) {

		QKeySequenceEdit::paintEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__MoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (handle__MoveEvent == 0) {
			QKeySequenceEdit::moveEvent(event);
			return;
		}
		
		QMoveEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_MoveEvent(this, handle__MoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_MoveEvent(QMoveEvent* event) {

		QKeySequenceEdit::moveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ResizeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (handle__ResizeEvent == 0) {
			QKeySequenceEdit::resizeEvent(event);
			return;
		}
		
		QResizeEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_ResizeEvent(this, handle__ResizeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ResizeEvent(QResizeEvent* event) {

		QKeySequenceEdit::resizeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CloseEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (handle__CloseEvent == 0) {
			QKeySequenceEdit::closeEvent(event);
			return;
		}
		
		QCloseEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_CloseEvent(this, handle__CloseEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CloseEvent(QCloseEvent* event) {

		QKeySequenceEdit::closeEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ContextMenuEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (handle__ContextMenuEvent == 0) {
			QKeySequenceEdit::contextMenuEvent(event);
			return;
		}
		
		QContextMenuEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_ContextMenuEvent(this, handle__ContextMenuEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ContextMenuEvent(QContextMenuEvent* event) {

		QKeySequenceEdit::contextMenuEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TabletEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (handle__TabletEvent == 0) {
			QKeySequenceEdit::tabletEvent(event);
			return;
		}
		
		QTabletEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_TabletEvent(this, handle__TabletEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TabletEvent(QTabletEvent* event) {

		QKeySequenceEdit::tabletEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ActionEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (handle__ActionEvent == 0) {
			QKeySequenceEdit::actionEvent(event);
			return;
		}
		
		QActionEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_ActionEvent(this, handle__ActionEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ActionEvent(QActionEvent* event) {

		QKeySequenceEdit::actionEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragEnterEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (handle__DragEnterEvent == 0) {
			QKeySequenceEdit::dragEnterEvent(event);
			return;
		}
		
		QDragEnterEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_DragEnterEvent(this, handle__DragEnterEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragEnterEvent(QDragEnterEvent* event) {

		QKeySequenceEdit::dragEnterEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragMoveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (handle__DragMoveEvent == 0) {
			QKeySequenceEdit::dragMoveEvent(event);
			return;
		}
		
		QDragMoveEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_DragMoveEvent(this, handle__DragMoveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragMoveEvent(QDragMoveEvent* event) {

		QKeySequenceEdit::dragMoveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DragLeaveEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (handle__DragLeaveEvent == 0) {
			QKeySequenceEdit::dragLeaveEvent(event);
			return;
		}
		
		QDragLeaveEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_DragLeaveEvent(this, handle__DragLeaveEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DragLeaveEvent(QDragLeaveEvent* event) {

		QKeySequenceEdit::dragLeaveEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DropEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (handle__DropEvent == 0) {
			QKeySequenceEdit::dropEvent(event);
			return;
		}
		
		QDropEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_DropEvent(this, handle__DropEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DropEvent(QDropEvent* event) {

		QKeySequenceEdit::dropEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ShowEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (handle__ShowEvent == 0) {
			QKeySequenceEdit::showEvent(event);
			return;
		}
		
		QShowEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_ShowEvent(this, handle__ShowEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ShowEvent(QShowEvent* event) {

		QKeySequenceEdit::showEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HideEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (handle__HideEvent == 0) {
			QKeySequenceEdit::hideEvent(event);
			return;
		}
		
		QHideEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_HideEvent(this, handle__HideEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_HideEvent(QHideEvent* event) {

		QKeySequenceEdit::hideEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__NativeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (handle__NativeEvent == 0) {
			return QKeySequenceEdit::nativeEvent(eventType, message, result);
		}
		
		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_NativeEvent(this, handle__NativeEvent, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_NativeEvent(struct miqt_string eventType, void* message, long* result) {
		QByteArray eventType_QByteArray(eventType.data, eventType.len);

		return QKeySequenceEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChangeEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (handle__ChangeEvent == 0) {
			QKeySequenceEdit::changeEvent(param1);
			return;
		}
		
		QEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_ChangeEvent(this, handle__ChangeEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChangeEvent(QEvent* param1) {

		QKeySequenceEdit::changeEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Metric = 0;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (handle__Metric == 0) {
			return QKeySequenceEdit::metric(param1);
		}
		
		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_Metric(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__Metric, sigval1);

		return static_cast<int>(callback_return_value);
	}

	// Wrapper to allow calling protected method
	int virtualbase_Metric(int param1) const {

		return QKeySequenceEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InitPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (handle__InitPainter == 0) {
			QKeySequenceEdit::initPainter(painter);
			return;
		}
		
		QPainter* sigval1 = painter;

		miqt_exec_callback_QKeySequenceEdit_InitPainter(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__InitPainter, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InitPainter(QPainter* painter) const {

		QKeySequenceEdit::initPainter(painter);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Redirected = 0;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (handle__Redirected == 0) {
			return QKeySequenceEdit::redirected(offset);
		}
		
		QPoint* sigval1 = offset;

		QPaintDevice* callback_return_value = miqt_exec_callback_QKeySequenceEdit_Redirected(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__Redirected, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPaintDevice* virtualbase_Redirected(QPoint* offset) const {

		return QKeySequenceEdit::redirected(offset);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SharedPainter = 0;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (handle__SharedPainter == 0) {
			return QKeySequenceEdit::sharedPainter();
		}
		

		QPainter* callback_return_value = miqt_exec_callback_QKeySequenceEdit_SharedPainter(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__SharedPainter);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QPainter* virtualbase_SharedPainter() const {

		return QKeySequenceEdit::sharedPainter();

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (handle__InputMethodEvent == 0) {
			QKeySequenceEdit::inputMethodEvent(param1);
			return;
		}
		
		QInputMethodEvent* sigval1 = param1;

		miqt_exec_callback_QKeySequenceEdit_InputMethodEvent(this, handle__InputMethodEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_InputMethodEvent(QInputMethodEvent* param1) {

		QKeySequenceEdit::inputMethodEvent(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__InputMethodQuery = 0;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (handle__InputMethodQuery == 0) {
			return QKeySequenceEdit::inputMethodQuery(param1);
		}
		
		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);

		QVariant* callback_return_value = miqt_exec_callback_QKeySequenceEdit_InputMethodQuery(const_cast<MiqtVirtualQKeySequenceEdit*>(this), handle__InputMethodQuery, sigval1);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QVariant* virtualbase_InputMethodQuery(int param1) const {

		return new QVariant(QKeySequenceEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__FocusNextPrevChild = 0;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (handle__FocusNextPrevChild == 0) {
			return QKeySequenceEdit::focusNextPrevChild(next);
		}
		
		bool sigval1 = next;

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_FocusNextPrevChild(this, handle__FocusNextPrevChild, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_FocusNextPrevChild(bool next) {

		return QKeySequenceEdit::focusNextPrevChild(next);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QKeySequenceEdit::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QKeySequenceEdit::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QKeySequenceEdit::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QKeySequenceEdit::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QKeySequenceEdit::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QKeySequenceEdit_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QKeySequenceEdit::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QKeySequenceEdit::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QKeySequenceEdit_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QKeySequenceEdit::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QKeySequenceEdit::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QKeySequenceEdit_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QKeySequenceEdit::disconnectNotify(*signal);

	}

};

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent) {
	return new MiqtVirtualQKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new2() {
	return new MiqtVirtualQKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new3(QKeySequence* keySequence) {
	return new MiqtVirtualQKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent) {
	return new MiqtVirtualQKeySequenceEdit(*keySequence, parent);
}

void QKeySequenceEdit_virtbase(QKeySequenceEdit* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QKeySequenceEdit_MetaObject(const QKeySequenceEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QKeySequenceEdit_Metacast(QKeySequenceEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QKeySequenceEdit_Tr(const char* s) {
	QString _ret = QKeySequenceEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_TrUtf8(const char* s) {
	QString _ret = QKeySequenceEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self) {
	return new QKeySequence(self->keySequence());
}

void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_Clear(QKeySequenceEdit* self) {
	self->clear();
}

void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self) {
	self->editingFinished();
}

void QKeySequenceEdit_connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)()>(&QKeySequenceEdit::editingFinished), self, [=]() {
		miqt_exec_callback_QKeySequenceEdit_EditingFinished(slot);
	});
}

void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->keySequenceChanged(*keySequence);
}

void QKeySequenceEdit_connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)(const QKeySequence&)>(&QKeySequenceEdit::keySequenceChanged), self, [=](const QKeySequence& keySequence) {
		const QKeySequence& keySequence_ret = keySequence;
		// Cast returned reference into pointer
		QKeySequence* sigval1 = const_cast<QKeySequence*>(&keySequence_ret);
		miqt_exec_callback_QKeySequenceEdit_KeySequenceChanged(slot, sigval1);
	});
}

struct miqt_string QKeySequenceEdit_Tr2(const char* s, const char* c) {
	QString _ret = QKeySequenceEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n) {
	QString _ret = QKeySequenceEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_TrUtf82(const char* s, const char* c) {
	QString _ret = QKeySequenceEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QKeySequenceEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QKeySequenceEdit_override_virtual_Event(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Event = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_Event(param1);
}

bool QKeySequenceEdit_override_virtual_KeyPressEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyPressEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_KeyPressEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_KeyPressEvent(param1);
}

bool QKeySequenceEdit_override_virtual_KeyReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__KeyReleaseEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_KeyReleaseEvent(param1);
}

bool QKeySequenceEdit_override_virtual_TimerEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TimerEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_TimerEvent(void* self, QTimerEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_TimerEvent(param1);
}

bool QKeySequenceEdit_override_virtual_DevType(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DevType = slot;
	return true;
}

int QKeySequenceEdit_virtualbase_DevType(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_DevType();
}

bool QKeySequenceEdit_override_virtual_SetVisible(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SetVisible = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_SetVisible(void* self, bool visible) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_SetVisible(visible);
}

bool QKeySequenceEdit_override_virtual_SizeHint(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SizeHint = slot;
	return true;
}

QSize* QKeySequenceEdit_virtualbase_SizeHint(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_SizeHint();
}

bool QKeySequenceEdit_override_virtual_MinimumSizeHint(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MinimumSizeHint = slot;
	return true;
}

QSize* QKeySequenceEdit_virtualbase_MinimumSizeHint(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_MinimumSizeHint();
}

bool QKeySequenceEdit_override_virtual_HeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HeightForWidth = slot;
	return true;
}

int QKeySequenceEdit_virtualbase_HeightForWidth(const void* self, int param1) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_HeightForWidth(param1);
}

bool QKeySequenceEdit_override_virtual_HasHeightForWidth(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HasHeightForWidth = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_HasHeightForWidth(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_HasHeightForWidth();
}

bool QKeySequenceEdit_override_virtual_PaintEngine(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEngine = slot;
	return true;
}

QPaintEngine* QKeySequenceEdit_virtualbase_PaintEngine(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_PaintEngine();
}

bool QKeySequenceEdit_override_virtual_MousePressEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MousePressEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_MousePressEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_MousePressEvent(event);
}

bool QKeySequenceEdit_override_virtual_MouseReleaseEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseReleaseEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_MouseReleaseEvent(event);
}

bool QKeySequenceEdit_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseDoubleClickEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_MouseDoubleClickEvent(event);
}

bool QKeySequenceEdit_override_virtual_MouseMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MouseMoveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_MouseMoveEvent(event);
}

bool QKeySequenceEdit_override_virtual_WheelEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__WheelEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_WheelEvent(void* self, QWheelEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_WheelEvent(event);
}

bool QKeySequenceEdit_override_virtual_FocusInEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusInEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_FocusInEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_FocusInEvent(event);
}

bool QKeySequenceEdit_override_virtual_FocusOutEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusOutEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_FocusOutEvent(void* self, QFocusEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_FocusOutEvent(event);
}

bool QKeySequenceEdit_override_virtual_EnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EnterEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_EnterEvent(void* self, QEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_EnterEvent(event);
}

bool QKeySequenceEdit_override_virtual_LeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__LeaveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_LeaveEvent(void* self, QEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_LeaveEvent(event);
}

bool QKeySequenceEdit_override_virtual_PaintEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__PaintEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_PaintEvent(void* self, QPaintEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_PaintEvent(event);
}

bool QKeySequenceEdit_override_virtual_MoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__MoveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_MoveEvent(void* self, QMoveEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_MoveEvent(event);
}

bool QKeySequenceEdit_override_virtual_ResizeEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ResizeEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_ResizeEvent(void* self, QResizeEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_ResizeEvent(event);
}

bool QKeySequenceEdit_override_virtual_CloseEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CloseEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_CloseEvent(void* self, QCloseEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_CloseEvent(event);
}

bool QKeySequenceEdit_override_virtual_ContextMenuEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ContextMenuEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_ContextMenuEvent(event);
}

bool QKeySequenceEdit_override_virtual_TabletEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__TabletEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_TabletEvent(void* self, QTabletEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_TabletEvent(event);
}

bool QKeySequenceEdit_override_virtual_ActionEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ActionEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_ActionEvent(void* self, QActionEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_ActionEvent(event);
}

bool QKeySequenceEdit_override_virtual_DragEnterEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragEnterEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_DragEnterEvent(event);
}

bool QKeySequenceEdit_override_virtual_DragMoveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragMoveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_DragMoveEvent(event);
}

bool QKeySequenceEdit_override_virtual_DragLeaveEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DragLeaveEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_DragLeaveEvent(event);
}

bool QKeySequenceEdit_override_virtual_DropEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DropEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_DropEvent(void* self, QDropEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_DropEvent(event);
}

bool QKeySequenceEdit_override_virtual_ShowEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ShowEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_ShowEvent(void* self, QShowEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_ShowEvent(event);
}

bool QKeySequenceEdit_override_virtual_HideEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__HideEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_HideEvent(void* self, QHideEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_HideEvent(event);
}

bool QKeySequenceEdit_override_virtual_NativeEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__NativeEvent = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	return ( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_NativeEvent(eventType, message, result);
}

bool QKeySequenceEdit_override_virtual_ChangeEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChangeEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_ChangeEvent(void* self, QEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_ChangeEvent(param1);
}

bool QKeySequenceEdit_override_virtual_Metric(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Metric = slot;
	return true;
}

int QKeySequenceEdit_virtualbase_Metric(const void* self, int param1) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_Metric(param1);
}

bool QKeySequenceEdit_override_virtual_InitPainter(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InitPainter = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_InitPainter(const void* self, QPainter* painter) {
	( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_InitPainter(painter);
}

bool QKeySequenceEdit_override_virtual_Redirected(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__Redirected = slot;
	return true;
}

QPaintDevice* QKeySequenceEdit_virtualbase_Redirected(const void* self, QPoint* offset) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_Redirected(offset);
}

bool QKeySequenceEdit_override_virtual_SharedPainter(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__SharedPainter = slot;
	return true;
}

QPainter* QKeySequenceEdit_virtualbase_SharedPainter(const void* self) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_SharedPainter();
}

bool QKeySequenceEdit_override_virtual_InputMethodEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_InputMethodEvent(param1);
}

bool QKeySequenceEdit_override_virtual_InputMethodQuery(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__InputMethodQuery = slot;
	return true;
}

QVariant* QKeySequenceEdit_virtualbase_InputMethodQuery(const void* self, int param1) {
	return ( (const MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_InputMethodQuery(param1);
}

bool QKeySequenceEdit_override_virtual_FocusNextPrevChild(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__FocusNextPrevChild = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_FocusNextPrevChild(void* self, bool next) {
	return ( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_FocusNextPrevChild(next);
}

bool QKeySequenceEdit_override_virtual_EventFilter(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__EventFilter = slot;
	return true;
}

bool QKeySequenceEdit_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_EventFilter(watched, event);
}

bool QKeySequenceEdit_override_virtual_ChildEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ChildEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_ChildEvent(event);
}

bool QKeySequenceEdit_override_virtual_CustomEvent(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__CustomEvent = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_CustomEvent(event);
}

bool QKeySequenceEdit_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__ConnectNotify = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_ConnectNotify(signal);
}

bool QKeySequenceEdit_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__DisconnectNotify = slot;
	return true;
}

void QKeySequenceEdit_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQKeySequenceEdit*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QKeySequenceEdit_Delete(QKeySequenceEdit* self) {
	delete self;
}

