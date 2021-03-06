//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLServerSocketFactory.java
//

#ifndef _JavaxNetSslSSLServerSocketFactory_H_
#define _JavaxNetSslSSLServerSocketFactory_H_

#include "J2ObjC_header.h"
#include "javax/net/ServerSocketFactory.h"

@class IOSObjectArray;

@interface JavaxNetSslSSLServerSocketFactory : JavaxNetServerSocketFactory

#pragma mark Public

+ (JavaxNetServerSocketFactory *)getDefault;

- (IOSObjectArray *)getDefaultCipherSuites;

- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLServerSocketFactory)

FOUNDATION_EXPORT JavaxNetServerSocketFactory *JavaxNetSslSSLServerSocketFactory_getDefault();

FOUNDATION_EXPORT void JavaxNetSslSSLServerSocketFactory_init(JavaxNetSslSSLServerSocketFactory *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLServerSocketFactory)

#endif // _JavaxNetSslSSLServerSocketFactory_H_
