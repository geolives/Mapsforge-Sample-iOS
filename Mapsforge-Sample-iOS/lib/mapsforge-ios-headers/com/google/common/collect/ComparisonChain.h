//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/collect/ComparisonChain.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonCollectComparisonChain_INCLUDE_ALL")
#if ComGoogleCommonCollectComparisonChain_RESTRICT
#define ComGoogleCommonCollectComparisonChain_INCLUDE_ALL 0
#else
#define ComGoogleCommonCollectComparisonChain_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectComparisonChain_RESTRICT

#if !defined (_ComGoogleCommonCollectComparisonChain_) && (ComGoogleCommonCollectComparisonChain_INCLUDE_ALL || ComGoogleCommonCollectComparisonChain_INCLUDE)
#define _ComGoogleCommonCollectComparisonChain_

@protocol JavaLangComparable;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectComparisonChain : NSObject

#pragma mark Public

- (ComGoogleCommonCollectComparisonChain *)compareWithBoolean:(jboolean)left
                                                  withBoolean:(jboolean)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithJavaLangComparable:(id<JavaLangComparable>)left
                                                  withJavaLangComparable:(id<JavaLangComparable>)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithDouble:(jdouble)left
                                                  withDouble:(jdouble)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithFloat:(jfloat)left
                                                  withFloat:(jfloat)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithInt:(jint)left
                                                  withInt:(jint)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithLong:(jlong)left
                                                  withLong:(jlong)right;

- (ComGoogleCommonCollectComparisonChain *)compareWithId:(id)left
                                                  withId:(id)right
                                  withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectComparisonChain *)compareFalseFirstWithBoolean:(jboolean)left
                                                            withBoolean:(jboolean)right;

- (ComGoogleCommonCollectComparisonChain *)compareTrueFirstWithBoolean:(jboolean)left
                                                           withBoolean:(jboolean)right;

- (jint)result;

+ (ComGoogleCommonCollectComparisonChain *)start;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectComparisonChain)

FOUNDATION_EXPORT ComGoogleCommonCollectComparisonChain *ComGoogleCommonCollectComparisonChain_start();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectComparisonChain)

#endif

#if !defined (_ComGoogleCommonCollectComparisonChain_InactiveComparisonChain_) && (ComGoogleCommonCollectComparisonChain_INCLUDE_ALL || ComGoogleCommonCollectComparisonChain_InactiveComparisonChain_INCLUDE)
#define _ComGoogleCommonCollectComparisonChain_InactiveComparisonChain_

#endif

#if !defined (_ComGoogleCommonCollectComparisonChain_$1_) && (ComGoogleCommonCollectComparisonChain_INCLUDE_ALL || ComGoogleCommonCollectComparisonChain_$1_INCLUDE)
#define _ComGoogleCommonCollectComparisonChain_$1_

#endif
#pragma pop_macro("ComGoogleCommonCollectComparisonChain_INCLUDE_ALL")
