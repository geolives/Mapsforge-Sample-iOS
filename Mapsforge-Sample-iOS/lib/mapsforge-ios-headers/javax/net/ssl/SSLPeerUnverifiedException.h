//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLPeerUnverifiedException.java
//

#ifndef _JavaxNetSslSSLPeerUnverifiedException_H_
#define _JavaxNetSslSSLPeerUnverifiedException_H_

#include "J2ObjC_header.h"
#include "javax/net/ssl/SSLException.h"

@interface JavaxNetSslSSLPeerUnverifiedException : JavaxNetSslSSLException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)reason;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLPeerUnverifiedException)

FOUNDATION_EXPORT void JavaxNetSslSSLPeerUnverifiedException_initWithNSString_(JavaxNetSslSSLPeerUnverifiedException *self, NSString *reason);

FOUNDATION_EXPORT JavaxNetSslSSLPeerUnverifiedException *new_JavaxNetSslSSLPeerUnverifiedException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLPeerUnverifiedException)

#endif // _JavaxNetSslSSLPeerUnverifiedException_H_
