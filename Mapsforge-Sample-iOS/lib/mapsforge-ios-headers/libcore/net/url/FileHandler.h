//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/net/url/FileHandler.java
//

#ifndef _LibcoreNetUrlFileHandler_H_
#define _LibcoreNetUrlFileHandler_H_

#include "J2ObjC_header.h"
#include "java/net/URLStreamHandler.h"

@class JavaNetProxy;
@class JavaNetURL;
@class JavaNetURLConnection;

@interface LibcoreNetUrlFileHandler : JavaNetURLStreamHandler

#pragma mark Public

- (instancetype)init;

- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)url;

- (JavaNetURLConnection *)openConnectionWithJavaNetURL:(JavaNetURL *)url
                                      withJavaNetProxy:(JavaNetProxy *)proxy;

#pragma mark Protected

- (void)parseURLWithJavaNetURL:(JavaNetURL *)url
                  withNSString:(NSString *)spec
                       withInt:(jint)start
                       withInt:(jint)end;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreNetUrlFileHandler)

FOUNDATION_EXPORT void LibcoreNetUrlFileHandler_init(LibcoreNetUrlFileHandler *self);

FOUNDATION_EXPORT LibcoreNetUrlFileHandler *new_LibcoreNetUrlFileHandler_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(LibcoreNetUrlFileHandler)

#endif // _LibcoreNetUrlFileHandler_H_
