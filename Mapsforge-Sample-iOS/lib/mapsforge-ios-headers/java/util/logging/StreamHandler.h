//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/StreamHandler.java
//

#ifndef _JavaUtilLoggingStreamHandler_H_
#define _JavaUtilLoggingStreamHandler_H_

#include "J2ObjC_header.h"
#include "java/util/logging/Handler.h"

@class JavaIoOutputStream;
@class JavaUtilLoggingFormatter;
@class JavaUtilLoggingLogRecord;

@interface JavaUtilLoggingStreamHandler : JavaUtilLoggingHandler

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
              withJavaUtilLoggingFormatter:(JavaUtilLoggingFormatter *)formatter;

- (void)close;

- (void)flush;

- (jboolean)isLoggableWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

- (void)setEncodingWithNSString:(NSString *)charsetName;

#pragma mark Protected

- (void)setOutputStreamWithJavaIoOutputStream:(JavaIoOutputStream *)os;

#pragma mark Package-Private

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os;

- (instancetype)initWithNSString:(NSString *)defaultLevel
                    withNSString:(NSString *)defaultFilter
                    withNSString:(NSString *)defaultFormatter
                    withNSString:(NSString *)defaultEncoding;

- (void)closeWithBoolean:(jboolean)closeStream;

- (void)internalSetOutputStreamWithJavaIoOutputStream:(JavaIoOutputStream *)newOs;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingStreamHandler)

FOUNDATION_EXPORT void JavaUtilLoggingStreamHandler_init(JavaUtilLoggingStreamHandler *self);

FOUNDATION_EXPORT JavaUtilLoggingStreamHandler *new_JavaUtilLoggingStreamHandler_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilLoggingStreamHandler_initWithJavaIoOutputStream_(JavaUtilLoggingStreamHandler *self, JavaIoOutputStream *os);

FOUNDATION_EXPORT JavaUtilLoggingStreamHandler *new_JavaUtilLoggingStreamHandler_initWithJavaIoOutputStream_(JavaIoOutputStream *os) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilLoggingStreamHandler_initWithNSString_withNSString_withNSString_withNSString_(JavaUtilLoggingStreamHandler *self, NSString *defaultLevel, NSString *defaultFilter, NSString *defaultFormatter, NSString *defaultEncoding);

FOUNDATION_EXPORT JavaUtilLoggingStreamHandler *new_JavaUtilLoggingStreamHandler_initWithNSString_withNSString_withNSString_withNSString_(NSString *defaultLevel, NSString *defaultFilter, NSString *defaultFormatter, NSString *defaultEncoding) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilLoggingStreamHandler_initWithJavaIoOutputStream_withJavaUtilLoggingFormatter_(JavaUtilLoggingStreamHandler *self, JavaIoOutputStream *os, JavaUtilLoggingFormatter *formatter);

FOUNDATION_EXPORT JavaUtilLoggingStreamHandler *new_JavaUtilLoggingStreamHandler_initWithJavaIoOutputStream_withJavaUtilLoggingFormatter_(JavaIoOutputStream *os, JavaUtilLoggingFormatter *formatter) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingStreamHandler)

#endif // _JavaUtilLoggingStreamHandler_H_