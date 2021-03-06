//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ImmutableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectImmutableMap_INCLUDE_ALL")
#if ComGoogleCommonCollectImmutableMap_RESTRICT
#define ComGoogleCommonCollectImmutableMap_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectImmutableMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMap_RESTRICT

#if !defined (_ComGoogleCommonCollectImmutableMap_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_INCLUDE 1
#include "java/util/Map.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap_Builder;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSetMultimap;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableMap : NSObject < JavaUtilMap, JavaIoSerializable >

#pragma mark Public

- (ComGoogleCommonCollectImmutableSetMultimap *)asMultimap;

+ (ComGoogleCommonCollectImmutableMap_Builder *)builder;

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectImmutableMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (jboolean)isEqual:(id)object;

- (id)getWithId:(id)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectImmutableSet *)keySet;

+ (ComGoogleCommonCollectImmutableMap *)of;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3
                                          withId:(id)k4
                                          withId:(id)v4;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3
                                          withId:(id)k4
                                          withId:(id)v4
                                          withId:(id)k5
                                          withId:(id)v5;

- (id)putWithId:(id)k
         withId:(id)v;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)o;

- (NSString *)description;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

+ (id<JavaUtilMap_Entry>)entryOfWithId:(id)key
                                withId:(id)value;

- (jboolean)isPartialView;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *ComGoogleCommonCollectImmutableMap_builder();

FOUNDATION_EXPORT id<JavaUtilMap_Entry> ComGoogleCommonCollectImmutableMap_entryOfWithId_withId_(id key, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_init(ComGoogleCommonCollectImmutableMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap)

#endif

#if !defined (_ComGoogleCommonCollectImmutableMap_Builder_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_Builder_

@class ComGoogleCommonCollectImmutableMap;
@class JavaUtilArrayList;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableMap_Builder : NSObject {
 @public
  JavaUtilArrayList *entries_;
}

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableMap *)build;

- (ComGoogleCommonCollectImmutableMap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableMap_Builder *)putWithId:(id)key
                                                   withId:(id)value;

- (ComGoogleCommonCollectImmutableMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_Builder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMap_Builder, entries_, JavaUtilArrayList *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_Builder_init(ComGoogleCommonCollectImmutableMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *new_ComGoogleCommonCollectImmutableMap_Builder_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_Builder)

#endif

#if !defined (_ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_

#endif

#if !defined (_ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_

#endif

#if !defined (_ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_$1_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_$1_

#endif

#if !defined (_ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_$1_$1_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_1MapViewOfValuesAsSingletonSets_1MapViewOfValuesAsSingletonSetsEntrySet_$1_$1_

#endif

#if !defined (_ComGoogleCommonCollectImmutableMap_SerializedForm_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_SerializedForm_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMap_Builder;

@interface ComGoogleCommonCollectImmutableMap_SerializedForm : NSObject < JavaIoSerializable >

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map;

- (id)createMapWithComGoogleCommonCollectImmutableMap_Builder:(ComGoogleCommonCollectImmutableMap_Builder *)builder;

- (id)readResolve;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_SerializedForm)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_SerializedForm_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap_SerializedForm *self, ComGoogleCommonCollectImmutableMap *map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_SerializedForm *new_ComGoogleCommonCollectImmutableMap_SerializedForm_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *map) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_SerializedForm)

#endif
#pragma pop_macro("ComGoogleCommonCollectImmutableMap_INCLUDE_ALL")
