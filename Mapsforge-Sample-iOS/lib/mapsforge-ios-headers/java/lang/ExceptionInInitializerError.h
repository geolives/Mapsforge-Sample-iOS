//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ExceptionInInitializerError.java
//

#ifndef _JavaLangExceptionInInitializerError_H_
#define _JavaLangExceptionInInitializerError_H_

#include "J2ObjC_header.h"
#include "java/lang/LinkageError.h"

@class JavaLangThrowable;

@interface JavaLangExceptionInInitializerError : JavaLangLinkageError

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)exception;

- (JavaLangThrowable *)getCause;

- (JavaLangThrowable *)getException;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangExceptionInInitializerError)

FOUNDATION_EXPORT void JavaLangExceptionInInitializerError_init(JavaLangExceptionInInitializerError *self);

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *new_JavaLangExceptionInInitializerError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangExceptionInInitializerError_initWithNSString_(JavaLangExceptionInInitializerError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *new_JavaLangExceptionInInitializerError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangExceptionInInitializerError_initWithJavaLangThrowable_(JavaLangExceptionInInitializerError *self, JavaLangThrowable *exception);

FOUNDATION_EXPORT JavaLangExceptionInInitializerError *new_JavaLangExceptionInInitializerError_initWithJavaLangThrowable_(JavaLangThrowable *exception) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaLangExceptionInInitializerError)

#endif // _JavaLangExceptionInInitializerError_H_
