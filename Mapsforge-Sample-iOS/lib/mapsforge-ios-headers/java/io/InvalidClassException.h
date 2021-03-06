//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/InvalidClassException.java
//

#ifndef _JavaIoInvalidClassException_H_
#define _JavaIoInvalidClassException_H_

#include "J2ObjC_header.h"
#include "java/io/ObjectStreamException.h"

@interface JavaIoInvalidClassException : JavaIoObjectStreamException {
 @public
  NSString *classname_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)className_
                    withNSString:(NSString *)detailMessage;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInvalidClassException)

J2OBJC_FIELD_SETTER(JavaIoInvalidClassException, classname_, NSString *)

FOUNDATION_EXPORT void JavaIoInvalidClassException_initWithNSString_(JavaIoInvalidClassException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoInvalidClassException *new_JavaIoInvalidClassException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoInvalidClassException_initWithNSString_withNSString_(JavaIoInvalidClassException *self, NSString *className_, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoInvalidClassException *new_JavaIoInvalidClassException_initWithNSString_withNSString_(NSString *className_, NSString *detailMessage) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInvalidClassException)

#endif // _JavaIoInvalidClassException_H_
