//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/util/SneakyThrow.java
//

#ifndef _LibcoreUtilSneakyThrow_H_
#define _LibcoreUtilSneakyThrow_H_

#include "J2ObjC_header.h"

@class JavaLangThrowable;

@interface LibcoreUtilSneakyThrow : NSObject

#pragma mark Public

+ (void)sneakyThrowWithJavaLangThrowable:(JavaLangThrowable *)t;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreUtilSneakyThrow)

FOUNDATION_EXPORT void LibcoreUtilSneakyThrow_sneakyThrowWithJavaLangThrowable_(JavaLangThrowable *t);

J2OBJC_TYPE_LITERAL_HEADER(LibcoreUtilSneakyThrow)

#endif // _LibcoreUtilSneakyThrow_H_
