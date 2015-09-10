//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CopyOnWriteArraySet.java
//

#ifndef _JavaUtilConcurrentCopyOnWriteArraySet_H_
#define _JavaUtilConcurrentCopyOnWriteArraySet_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractSet.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

@interface JavaUtilConcurrentCopyOnWriteArraySet : JavaUtilAbstractSet < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)addWithId:(id)e;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)isEqual:(id)o;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCopyOnWriteArraySet)

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArraySet_init(JavaUtilConcurrentCopyOnWriteArraySet *self);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArraySet *new_JavaUtilConcurrentCopyOnWriteArraySet_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArraySet_initWithJavaUtilCollection_(JavaUtilConcurrentCopyOnWriteArraySet *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArraySet *new_JavaUtilConcurrentCopyOnWriteArraySet_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCopyOnWriteArraySet)

#endif // _JavaUtilConcurrentCopyOnWriteArraySet_H_