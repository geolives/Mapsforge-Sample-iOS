//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/junit/build_result/java/org/hamcrest/core/AllOf.java
//

#ifndef _OrgHamcrestCoreAllOf_H_
#define _OrgHamcrestCoreAllOf_H_

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreAllOf : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)matchers;

+ (id<OrgHamcrestMatcher>)allOfWithJavaLangIterable:(id<JavaLangIterable>)matchers;

+ (id<OrgHamcrestMatcher>)allOfWithOrgHamcrestMatcherArray:(IOSObjectArray *)matchers;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreAllOf)

FOUNDATION_EXPORT void OrgHamcrestCoreAllOf_initWithJavaLangIterable_(OrgHamcrestCoreAllOf *self, id<JavaLangIterable> matchers);

FOUNDATION_EXPORT OrgHamcrestCoreAllOf *new_OrgHamcrestCoreAllOf_initWithJavaLangIterable_(id<JavaLangIterable> matchers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithOrgHamcrestMatcherArray_(IOSObjectArray *matchers);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreAllOf_allOfWithJavaLangIterable_(id<JavaLangIterable> matchers);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreAllOf)

#endif // _OrgHamcrestCoreAllOf_H_
