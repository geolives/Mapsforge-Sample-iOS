//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/graphics/CorruptedInputStreamException.java
//

#ifndef _OrgMapsforgeCoreGraphicsCorruptedInputStreamException_H_
#define _OrgMapsforgeCoreGraphicsCorruptedInputStreamException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

@interface OrgMapsforgeCoreGraphicsCorruptedInputStreamException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreGraphicsCorruptedInputStreamException)

FOUNDATION_EXPORT void OrgMapsforgeCoreGraphicsCorruptedInputStreamException_initWithNSString_withJavaLangThrowable_(OrgMapsforgeCoreGraphicsCorruptedInputStreamException *self, NSString *detailMessage, JavaLangThrowable *throwable);

FOUNDATION_EXPORT OrgMapsforgeCoreGraphicsCorruptedInputStreamException *new_OrgMapsforgeCoreGraphicsCorruptedInputStreamException_initWithNSString_withJavaLangThrowable_(NSString *detailMessage, JavaLangThrowable *throwable) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreGraphicsCorruptedInputStreamException)

#endif // _OrgMapsforgeCoreGraphicsCorruptedInputStreamException_H_