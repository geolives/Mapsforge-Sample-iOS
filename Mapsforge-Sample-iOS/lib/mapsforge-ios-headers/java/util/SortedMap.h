//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/SortedMap.java
//

#ifndef _JavaUtilSortedMap_H_
#define _JavaUtilSortedMap_H_

#include "J2ObjC_header.h"
#include "java/util/Map.h"

@protocol JavaUtilComparator;

@protocol JavaUtilSortedMap < JavaUtilMap, NSObject, JavaObject >

- (id<JavaUtilComparator>)comparator;

- (id)firstKey;

- (id<JavaUtilSortedMap>)headMapWithId:(id)endKey;

- (id)lastKey;

- (id<JavaUtilSortedMap>)subMapWithId:(id)startKey
                               withId:(id)endKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)startKey;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSortedMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSortedMap)

#endif // _JavaUtilSortedMap_H_