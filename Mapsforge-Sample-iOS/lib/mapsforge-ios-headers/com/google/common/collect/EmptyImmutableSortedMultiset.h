//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/EmptyImmutableSortedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE_ALL")
#if ComGoogleCommonCollectEmptyImmutableSortedMultiset_RESTRICT
#define ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEmptyImmutableSortedMultiset_RESTRICT

#if !defined (_ComGoogleCommonCollectEmptyImmutableSortedMultiset_) && (ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE_ALL || ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE)
#define _ComGoogleCommonCollectEmptyImmutableSortedMultiset_

#define ComGoogleCommonCollectImmutableSortedMultiset_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedMultiset_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedMultiset.h"

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSortedSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectEmptyImmutableSortedMultiset : ComGoogleCommonCollectImmutableSortedMultiset

#pragma mark Public

- (ComGoogleCommonCollectImmutableList *)asList;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)targets;

- (jint)countWithId:(id)element;

- (ComGoogleCommonCollectImmutableSortedSet *)elementSet;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (jboolean)isEqual:(id)object;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (NSUInteger)hash;

- (ComGoogleCommonCollectImmutableSortedMultiset *)headMultisetWithId:(id)upperBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (jint)size;

- (ComGoogleCommonCollectImmutableSortedMultiset *)tailMultisetWithId:(id)lowerBound
                              withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)other;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (jboolean)isPartialView;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectEmptyImmutableSortedMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectEmptyImmutableSortedMultiset_initWithJavaUtilComparator_(ComGoogleCommonCollectEmptyImmutableSortedMultiset *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectEmptyImmutableSortedMultiset *new_ComGoogleCommonCollectEmptyImmutableSortedMultiset_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEmptyImmutableSortedMultiset)

#endif
#pragma pop_macro("ComGoogleCommonCollectEmptyImmutableSortedMultiset_INCLUDE_ALL")
