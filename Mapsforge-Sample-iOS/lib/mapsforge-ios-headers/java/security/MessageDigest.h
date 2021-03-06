//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/MessageDigest.java
//

#ifndef _JavaSecurityMessageDigest_H_
#define _JavaSecurityMessageDigest_H_

#include "J2ObjC_header.h"
#include "java/security/MessageDigestSpi.h"

@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaSecurityProvider;

@interface JavaSecurityMessageDigest : JavaSecurityMessageDigestSpi

#pragma mark Public

- (id)clone;

- (IOSByteArray *)digest;

- (IOSByteArray *)digestWithByteArray:(IOSByteArray *)input;

- (jint)digestWithByteArray:(IOSByteArray *)buf
                    withInt:(jint)offset
                    withInt:(jint)len;

- (NSString *)getAlgorithm;

- (jint)getDigestLength;

+ (JavaSecurityMessageDigest *)getInstanceWithNSString:(NSString *)algorithm;

+ (JavaSecurityMessageDigest *)getInstanceWithNSString:(NSString *)algorithm
                              withJavaSecurityProvider:(JavaSecurityProvider *)provider;

+ (JavaSecurityMessageDigest *)getInstanceWithNSString:(NSString *)algorithm
                                          withNSString:(NSString *)provider;

- (JavaSecurityProvider *)getProvider;

+ (jboolean)isEqualWithByteArray:(IOSByteArray *)digesta
                   withByteArray:(IOSByteArray *)digestb;

- (void)reset;

- (NSString *)description;

- (void)updateWithByte:(jbyte)arg0;

- (void)updateWithByteArray:(IOSByteArray *)input;

- (void)updateWithByteArray:(IOSByteArray *)input
                    withInt:(jint)offset
                    withInt:(jint)len;

- (void)updateWithJavaNioByteBuffer:(JavaNioByteBuffer *)input;

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaSecurityMessageDigest)

FOUNDATION_EXPORT void JavaSecurityMessageDigest_initWithNSString_(JavaSecurityMessageDigest *self, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityMessageDigest *JavaSecurityMessageDigest_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityMessageDigest *JavaSecurityMessageDigest_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityMessageDigest *JavaSecurityMessageDigest_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

FOUNDATION_EXPORT jboolean JavaSecurityMessageDigest_isEqualWithByteArray_withByteArray_(IOSByteArray *digesta, IOSByteArray *digestb);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityMessageDigest)

#endif // _JavaSecurityMessageDigest_H_
