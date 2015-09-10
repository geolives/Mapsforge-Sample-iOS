//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicReference.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicReference_H_
#define _JavaUtilConcurrentAtomicAtomicReference_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@interface JavaUtilConcurrentAtomicAtomicReference : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithId:(id)initialValue;

- (jboolean)compareAndSetWithId:(id)expect
                         withId:(id)update;

- (id)get;

- (id)getAndSetWithId:(id)newValue;

- (void)lazySetWithId:(id)newValue;

- (void)setWithId:(id)newValue;

- (NSString *)description;

- (jboolean)weakCompareAndSetWithId:(id)expect
                             withId:(id)update;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicReference)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReference_initWithId_(JavaUtilConcurrentAtomicAtomicReference *self, id initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *new_JavaUtilConcurrentAtomicAtomicReference_initWithId_(id initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReference_init(JavaUtilConcurrentAtomicAtomicReference *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *new_JavaUtilConcurrentAtomicAtomicReference_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicReference)

#endif // _JavaUtilConcurrentAtomicAtomicReference_H_