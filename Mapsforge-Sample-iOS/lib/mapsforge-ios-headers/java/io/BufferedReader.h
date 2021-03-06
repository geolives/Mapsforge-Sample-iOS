//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/BufferedReader.java
//

#ifndef _JavaIoBufferedReader_H_
#define _JavaIoBufferedReader_H_

#include "J2ObjC_header.h"
#include "java/io/Reader.h"

@class IOSCharArray;

@interface JavaIoBufferedReader : JavaIoReader

#pragma mark Public

- (instancetype)initWithJavaIoReader:(JavaIoReader *)inArg;

- (instancetype)initWithJavaIoReader:(JavaIoReader *)inArg
                             withInt:(jint)size;

- (void)close;

- (void)markWithInt:(jint)markLimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)length;

- (NSString *)readLine;

- (jboolean)ready;

- (void)reset;

- (jlong)skipWithLong:(jlong)charCount;

#pragma mark Package-Private

- (void)chompNewline;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoBufferedReader)

FOUNDATION_EXPORT void JavaIoBufferedReader_initWithJavaIoReader_(JavaIoBufferedReader *self, JavaIoReader *inArg);

FOUNDATION_EXPORT JavaIoBufferedReader *new_JavaIoBufferedReader_initWithJavaIoReader_(JavaIoReader *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaIoBufferedReader_initWithJavaIoReader_withInt_(JavaIoBufferedReader *self, JavaIoReader *inArg, jint size);

FOUNDATION_EXPORT JavaIoBufferedReader *new_JavaIoBufferedReader_initWithJavaIoReader_withInt_(JavaIoReader *inArg, jint size) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaIoBufferedReader)

#endif // _JavaIoBufferedReader_H_
