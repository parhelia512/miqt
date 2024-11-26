#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBFULLSCREENREQUEST_H
#define MIQT_QT_WEBKIT_GEN_QWEBFULLSCREENREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QUrl;
class QWebElement;
class QWebFullScreenRequest;
#else
typedef struct QUrl QUrl;
typedef struct QWebElement QWebElement;
typedef struct QWebFullScreenRequest QWebFullScreenRequest;
#endif

void QWebFullScreenRequest_new(QWebFullScreenRequest** outptr_QWebFullScreenRequest);
void QWebFullScreenRequest_new2(QWebFullScreenRequest* param1, QWebFullScreenRequest** outptr_QWebFullScreenRequest);
void QWebFullScreenRequest_Accept(QWebFullScreenRequest* self);
void QWebFullScreenRequest_Reject(QWebFullScreenRequest* self);
bool QWebFullScreenRequest_ToggleOn(const QWebFullScreenRequest* self);
QUrl* QWebFullScreenRequest_Origin(const QWebFullScreenRequest* self);
QWebElement* QWebFullScreenRequest_Element(const QWebFullScreenRequest* self);
void QWebFullScreenRequest_Delete(QWebFullScreenRequest* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
