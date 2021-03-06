//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/net/url/UrlUtils.java
//

#ifndef _LibcoreNetUrlUrlUtils_H_
#define _LibcoreNetUrlUrlUtils_H_

#include "J2ObjC_header.h"

@interface LibcoreNetUrlUrlUtils : NSObject

#pragma mark Public

+ (NSString *)authoritySafePathWithNSString:(NSString *)authority
                               withNSString:(NSString *)path;

+ (NSString *)canonicalizePathWithNSString:(NSString *)path
                               withBoolean:(jboolean)discardRelativePrefix;

+ (jint)findFirstOfWithNSString:(NSString *)string
                   withNSString:(NSString *)chars
                        withInt:(jint)start
                        withInt:(jint)end;

+ (NSString *)getSchemePrefixWithNSString:(NSString *)spec;

+ (jboolean)isValidSchemeCharWithInt:(jint)index
                            withChar:(jchar)c;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreNetUrlUrlUtils)

FOUNDATION_EXPORT NSString *LibcoreNetUrlUrlUtils_canonicalizePathWithNSString_withBoolean_(NSString *path, jboolean discardRelativePrefix);

FOUNDATION_EXPORT NSString *LibcoreNetUrlUrlUtils_authoritySafePathWithNSString_withNSString_(NSString *authority, NSString *path);

FOUNDATION_EXPORT NSString *LibcoreNetUrlUrlUtils_getSchemePrefixWithNSString_(NSString *spec);

FOUNDATION_EXPORT jboolean LibcoreNetUrlUrlUtils_isValidSchemeCharWithInt_withChar_(jint index, jchar c);

FOUNDATION_EXPORT jint LibcoreNetUrlUrlUtils_findFirstOfWithNSString_withNSString_withInt_withInt_(NSString *string, NSString *chars, jint start, jint end);

J2OBJC_TYPE_LITERAL_HEADER(LibcoreNetUrlUrlUtils)

#endif // _LibcoreNetUrlUrlUtils_H_
