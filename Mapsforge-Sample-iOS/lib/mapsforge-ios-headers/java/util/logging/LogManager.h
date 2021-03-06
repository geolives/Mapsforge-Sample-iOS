//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/LogManager.java
//

#ifndef _JavaUtilLoggingLogManager_H_
#define _JavaUtilLoggingLogManager_H_

#include "J2ObjC_header.h"

@class JavaIoInputStream;
@class JavaUtilLoggingLevel;
@class JavaUtilLoggingLogger;
@protocol JavaBeansPropertyChangeListener;
@protocol JavaUtilEnumeration;
@protocol JavaUtilLoggingLoggingMXBean;

@interface JavaUtilLoggingLogManager : NSObject

#pragma mark Public

- (jboolean)addLoggerWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger;

- (void)addPropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)l;

- (void)checkAccess;

- (JavaUtilLoggingLogger *)getLoggerWithNSString:(NSString *)name;

- (id<JavaUtilEnumeration>)getLoggerNames;

+ (id<JavaUtilLoggingLoggingMXBean>)getLoggingMXBean;

+ (JavaUtilLoggingLogManager *)getLogManager;

- (NSString *)getPropertyWithNSString:(NSString *)name;

- (void)readConfiguration;

- (void)readConfigurationWithJavaIoInputStream:(JavaIoInputStream *)ins;

- (void)removePropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)l;

- (void)reset;

#pragma mark Protected

- (instancetype)init;

#pragma mark Package-Private

+ (id)getInstanceByClassWithNSString:(NSString *)className_;

- (JavaUtilLoggingLogger *)getOrCreateWithNSString:(NSString *)name
                                      withNSString:(NSString *)resourceBundleName;

- (void)setLevelRecursivelyWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger
                            withJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)newLevel;

- (void)setParentWithJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)logger
                 withJavaUtilLoggingLogger:(JavaUtilLoggingLogger *)newParent;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLogManager)

FOUNDATION_EXPORT JavaUtilLoggingLogManager *JavaUtilLoggingLogManager_manager_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLogManager, manager_, JavaUtilLoggingLogManager *)
J2OBJC_STATIC_FIELD_SETTER(JavaUtilLoggingLogManager, manager_, JavaUtilLoggingLogManager *)

FOUNDATION_EXPORT NSString *JavaUtilLoggingLogManager_LOGGING_MXBEAN_NAME_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilLoggingLogManager, LOGGING_MXBEAN_NAME_, NSString *)

FOUNDATION_EXPORT id<JavaUtilLoggingLoggingMXBean> JavaUtilLoggingLogManager_getLoggingMXBean();

FOUNDATION_EXPORT void JavaUtilLoggingLogManager_init(JavaUtilLoggingLogManager *self);

FOUNDATION_EXPORT JavaUtilLoggingLogManager *new_JavaUtilLoggingLogManager_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLogManager *JavaUtilLoggingLogManager_getLogManager();

FOUNDATION_EXPORT id JavaUtilLoggingLogManager_getInstanceByClassWithNSString_(NSString *className_);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogManager)

#endif // _JavaUtilLoggingLogManager_H_
