//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/BufferedWriter.java
//

#ifndef _JavaIoBufferedWriter_H_
#define _JavaIoBufferedWriter_H_

#include "J2ObjC_header.h"
#include "java/io/Writer.h"

@class IOSCharArray;

@interface JavaIoBufferedWriter : JavaIoWriter

#pragma mark Public

- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)outArg;

- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)outArg
                             withInt:(jint)size;

- (void)close;

- (void)flush;

- (void)newLine OBJC_METHOD_FAMILY_NONE;

- (void)writeWithCharArray:(IOSCharArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)count;

- (void)writeWithInt:(jint)oneChar;

- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)offset
                  withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoBufferedWriter)

FOUNDATION_EXPORT void JavaIoBufferedWriter_initWithJavaIoWriter_(JavaIoBufferedWriter *self, JavaIoWriter *outArg);

FOUNDATION_EXPORT JavaIoBufferedWriter *new_JavaIoBufferedWriter_initWithJavaIoWriter_(JavaIoWriter *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoBufferedWriter_initWithJavaIoWriter_withInt_(JavaIoBufferedWriter *self, JavaIoWriter *outArg, jint size);

FOUNDATION_EXPORT JavaIoBufferedWriter *new_JavaIoBufferedWriter_initWithJavaIoWriter_withInt_(JavaIoWriter *outArg, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoBufferedWriter)

#endif // _JavaIoBufferedWriter_H_
