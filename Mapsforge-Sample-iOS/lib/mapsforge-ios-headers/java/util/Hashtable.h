//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Hashtable.java
//

#ifndef _JavaUtilHashtable_H_
#define _JavaUtilHashtable_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/util/Dictionary.h"
#include "java/util/Map.h"

@protocol JavaUtilCollection;
@protocol JavaUtilEnumeration;
@protocol JavaUtilSet;

@interface JavaUtilHashtable : JavaUtilDictionary < JavaUtilMap, NSCopying, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithInt:(jint)capacity;

- (instancetype)initWithInt:(jint)capacity
                  withFloat:(jfloat)loadFactor;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)clear;

- (id)clone;

- (jboolean)containsWithId:(id)value;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilEnumeration>)elements;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id)object;

- (id)getWithId:(id)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (id<JavaUtilEnumeration>)keys;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)key;

- (jint)size;

- (NSString *)description;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (void)rehash;

@end

J2OBJC_STATIC_INIT(JavaUtilHashtable)

FOUNDATION_EXPORT void JavaUtilHashtable_init(JavaUtilHashtable *self);

FOUNDATION_EXPORT JavaUtilHashtable *new_JavaUtilHashtable_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilHashtable_initWithInt_(JavaUtilHashtable *self, jint capacity);

FOUNDATION_EXPORT JavaUtilHashtable *new_JavaUtilHashtable_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilHashtable_initWithInt_withFloat_(JavaUtilHashtable *self, jint capacity, jfloat loadFactor);

FOUNDATION_EXPORT JavaUtilHashtable *new_JavaUtilHashtable_initWithInt_withFloat_(jint capacity, jfloat loadFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaUtilHashtable_initWithJavaUtilMap_(JavaUtilHashtable *self, id<JavaUtilMap> map);

FOUNDATION_EXPORT JavaUtilHashtable *new_JavaUtilHashtable_initWithJavaUtilMap_(id<JavaUtilMap> map) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHashtable)

#endif // _JavaUtilHashtable_H_
