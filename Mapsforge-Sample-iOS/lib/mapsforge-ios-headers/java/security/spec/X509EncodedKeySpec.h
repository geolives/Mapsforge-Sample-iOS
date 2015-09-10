//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/X509EncodedKeySpec.java
//

#ifndef _JavaSecuritySpecX509EncodedKeySpec_H_
#define _JavaSecuritySpecX509EncodedKeySpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/EncodedKeySpec.h"

@class IOSByteArray;

@interface JavaSecuritySpecX509EncodedKeySpec : JavaSecuritySpecEncodedKeySpec

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)encodedKey;

- (IOSByteArray *)getEncoded;

- (NSString *)getFormat;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecX509EncodedKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecX509EncodedKeySpec_initWithByteArray_(JavaSecuritySpecX509EncodedKeySpec *self, IOSByteArray *encodedKey);

FOUNDATION_EXPORT JavaSecuritySpecX509EncodedKeySpec *new_JavaSecuritySpecX509EncodedKeySpec_initWithByteArray_(IOSByteArray *encodedKey) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecX509EncodedKeySpec)

#endif // _JavaSecuritySpecX509EncodedKeySpec_H_