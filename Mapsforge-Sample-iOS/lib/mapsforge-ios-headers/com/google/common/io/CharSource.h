//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/cbrasseur/Documents/j2objc-0.9.7/guava/sources/com/google/common/io/CharSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("ComGoogleCommonIoCharSource_INCLUDE_ALL")
#if ComGoogleCommonIoCharSource_RESTRICT
#define ComGoogleCommonIoCharSource_INCLUDE_ALL 0
#else
#define ComGoogleCommonIoCharSource_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoCharSource_RESTRICT

#if !defined (_ComGoogleCommonIoCharSource_) && (ComGoogleCommonIoCharSource_INCLUDE_ALL || ComGoogleCommonIoCharSource_INCLUDE)
#define _ComGoogleCommonIoCharSource_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonIoCharSink;
@class JavaIoBufferedReader;
@class JavaIoReader;
@protocol JavaLangAppendable;

@interface ComGoogleCommonIoCharSource : NSObject

#pragma mark Public

- (instancetype)init;

- (jlong)copyToWithJavaLangAppendable:(id<JavaLangAppendable>)appendable OBJC_METHOD_FAMILY_NONE;

- (jlong)copyToWithComGoogleCommonIoCharSink:(ComGoogleCommonIoCharSink *)sink OBJC_METHOD_FAMILY_NONE;

- (JavaIoBufferedReader *)openBufferedStream;

- (JavaIoReader *)openStream;

- (NSString *)read;

- (NSString *)readFirstLine;

- (ComGoogleCommonCollectImmutableList *)readLines;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharSource)

FOUNDATION_EXPORT void ComGoogleCommonIoCharSource_init(ComGoogleCommonIoCharSource *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharSource)

#endif
#pragma pop_macro("ComGoogleCommonIoCharSource_INCLUDE_ALL")