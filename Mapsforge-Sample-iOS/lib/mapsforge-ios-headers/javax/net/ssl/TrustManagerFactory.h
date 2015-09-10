//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/TrustManagerFactory.java
//

#ifndef _JavaxNetSslTrustManagerFactory_H_
#define _JavaxNetSslTrustManagerFactory_H_

#include "J2ObjC_header.h"

@class IOSObjectArray;
@class JavaSecurityKeyStore;
@class JavaSecurityProvider;
@class JavaxNetSslTrustManagerFactorySpi;
@protocol JavaxNetSslManagerFactoryParameters;

@interface JavaxNetSslTrustManagerFactory : NSObject

#pragma mark Public

- (NSString *)getAlgorithm;

+ (NSString *)getDefaultAlgorithm;

+ (JavaxNetSslTrustManagerFactory *)getInstanceWithNSString:(NSString *)algorithm;

+ (JavaxNetSslTrustManagerFactory *)getInstanceWithNSString:(NSString *)algorithm
                                   withJavaSecurityProvider:(JavaSecurityProvider *)provider;

+ (JavaxNetSslTrustManagerFactory *)getInstanceWithNSString:(NSString *)algorithm
                                               withNSString:(NSString *)provider;

- (JavaSecurityProvider *)getProvider;

- (IOSObjectArray *)getTrustManagers;

- (void)init__WithJavaSecurityKeyStore:(JavaSecurityKeyStore *)ks OBJC_METHOD_FAMILY_NONE;

- (void)init__WithJavaxNetSslManagerFactoryParameters:(id<JavaxNetSslManagerFactoryParameters>)spec OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

- (instancetype)initWithJavaxNetSslTrustManagerFactorySpi:(JavaxNetSslTrustManagerFactorySpi *)factorySpi
                                 withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                             withNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaxNetSslTrustManagerFactory)

FOUNDATION_EXPORT NSString *JavaxNetSslTrustManagerFactory_getDefaultAlgorithm();

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *JavaxNetSslTrustManagerFactory_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *JavaxNetSslTrustManagerFactory_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *JavaxNetSslTrustManagerFactory_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

FOUNDATION_EXPORT void JavaxNetSslTrustManagerFactory_initWithJavaxNetSslTrustManagerFactorySpi_withJavaSecurityProvider_withNSString_(JavaxNetSslTrustManagerFactory *self, JavaxNetSslTrustManagerFactorySpi *factorySpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxNetSslTrustManagerFactory *new_JavaxNetSslTrustManagerFactory_initWithJavaxNetSslTrustManagerFactorySpi_withJavaSecurityProvider_withNSString_(JavaxNetSslTrustManagerFactorySpi *factorySpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslTrustManagerFactory)

#endif // _JavaxNetSslTrustManagerFactory_H_