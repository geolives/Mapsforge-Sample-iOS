//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/UnknownFormatFlagsException.java
//

#ifndef _JavaUtilUnknownFormatFlagsException_H_
#define _JavaUtilUnknownFormatFlagsException_H_

#include "J2ObjC_header.h"
#include "java/util/IllegalFormatException.h"

@interface JavaUtilUnknownFormatFlagsException : JavaUtilIllegalFormatException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)f;

- (NSString *)getFlags;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilUnknownFormatFlagsException)

FOUNDATION_EXPORT void JavaUtilUnknownFormatFlagsException_initWithNSString_(JavaUtilUnknownFormatFlagsException *self, NSString *f);

FOUNDATION_EXPORT JavaUtilUnknownFormatFlagsException *new_JavaUtilUnknownFormatFlagsException_initWithNSString_(NSString *f) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilUnknownFormatFlagsException)

#endif // _JavaUtilUnknownFormatFlagsException_H_
