//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/beans/PropertyChangeSupport.java
//

#ifndef _JavaBeansPropertyChangeSupport_H_
#define _JavaBeansPropertyChangeSupport_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaBeansPropertyChangeEvent;
@protocol JavaBeansPropertyChangeListener;

@interface JavaBeansPropertyChangeSupport : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithId:(id)sourceBean;

- (void)addPropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

- (void)addPropertyChangeListenerWithNSString:(NSString *)propertyName
          withJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(jint)index
                                  withBoolean:(jboolean)oldValue
                                  withBoolean:(jboolean)newValue;

- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(jint)index
                                      withInt:(jint)oldValue
                                      withInt:(jint)newValue;

- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(jint)index
                                       withId:(id)oldValue
                                       withId:(id)newValue;

- (void)firePropertyChangeWithJavaBeansPropertyChangeEvent:(JavaBeansPropertyChangeEvent *)event;

- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                           withBoolean:(jboolean)oldValue
                           withBoolean:(jboolean)newValue;

- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                               withInt:(jint)oldValue
                               withInt:(jint)newValue;

- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                                withId:(id)oldValue
                                withId:(id)newValue;

- (IOSObjectArray *)getPropertyChangeListeners;

- (IOSObjectArray *)getPropertyChangeListenersWithNSString:(NSString *)propertyName;

- (jboolean)hasListenersWithNSString:(NSString *)propertyName;

- (void)removePropertyChangeListenerWithJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

- (void)removePropertyChangeListenerWithNSString:(NSString *)propertyName
             withJavaBeansPropertyChangeListener:(id<JavaBeansPropertyChangeListener>)listener;

@end

J2OBJC_STATIC_INIT(JavaBeansPropertyChangeSupport)

FOUNDATION_EXPORT void JavaBeansPropertyChangeSupport_initWithId_(JavaBeansPropertyChangeSupport *self, id sourceBean);

FOUNDATION_EXPORT JavaBeansPropertyChangeSupport *new_JavaBeansPropertyChangeSupport_initWithId_(id sourceBean) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansPropertyChangeSupport)

#endif // _JavaBeansPropertyChangeSupport_H_
