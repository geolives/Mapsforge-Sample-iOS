//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/ArraySet.java
//

#ifndef _AndroidUtilArraySet_H_
#define _AndroidUtilArraySet_H_

#include "J2ObjC_header.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"

@class AndroidUtilMapCollections;
@class IOSIntArray;
@class IOSObjectArray;
@protocol JavaUtilIterator;

@interface AndroidUtilArraySet : NSObject < JavaUtilCollection, JavaUtilSet > {
 @public
  IOSIntArray *mHashes_;
  IOSObjectArray *mArray_;
  jint mSize_;
  AndroidUtilMapCollections *mCollections_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithAndroidUtilArraySet:(AndroidUtilArraySet *)set;

- (instancetype)initWithInt:(jint)capacity;

- (jboolean)addWithId:(id)value;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)key;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)ensureCapacityWithInt:(jint)minimumCapacity;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (void)putAllWithAndroidUtilArraySet:(AndroidUtilArraySet *)array;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id)removeAtWithInt:(jint)index;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (NSString *)description;

- (id)valueAtWithInt:(jint)index;

#pragma mark Package-Private


@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilArraySet)

J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mHashes_, IOSIntArray *)
J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mArray_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(AndroidUtilArraySet, mCollections_, AndroidUtilMapCollections *)

FOUNDATION_EXPORT IOSObjectArray *AndroidUtilArraySet_mBaseCache_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilArraySet, mBaseCache_, IOSObjectArray *)
J2OBJC_STATIC_FIELD_SETTER(AndroidUtilArraySet, mBaseCache_, IOSObjectArray *)

FOUNDATION_EXPORT jint AndroidUtilArraySet_mBaseCacheSize_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilArraySet, mBaseCacheSize_, jint)
J2OBJC_STATIC_FIELD_REF_GETTER(AndroidUtilArraySet, mBaseCacheSize_, jint)

FOUNDATION_EXPORT IOSObjectArray *AndroidUtilArraySet_mTwiceBaseCache_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilArraySet, mTwiceBaseCache_, IOSObjectArray *)
J2OBJC_STATIC_FIELD_SETTER(AndroidUtilArraySet, mTwiceBaseCache_, IOSObjectArray *)

FOUNDATION_EXPORT jint AndroidUtilArraySet_mTwiceBaseCacheSize_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilArraySet, mTwiceBaseCacheSize_, jint)
J2OBJC_STATIC_FIELD_REF_GETTER(AndroidUtilArraySet, mTwiceBaseCacheSize_, jint)

FOUNDATION_EXPORT void AndroidUtilArraySet_init(AndroidUtilArraySet *self);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidUtilArraySet_initWithInt_(AndroidUtilArraySet *self, jint capacity);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void AndroidUtilArraySet_initWithAndroidUtilArraySet_(AndroidUtilArraySet *self, AndroidUtilArraySet *set);

FOUNDATION_EXPORT AndroidUtilArraySet *new_AndroidUtilArraySet_initWithAndroidUtilArraySet_(AndroidUtilArraySet *set) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilArraySet)

#endif // _AndroidUtilArraySet_H_
