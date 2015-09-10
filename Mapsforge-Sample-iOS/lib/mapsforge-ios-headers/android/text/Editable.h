//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/Editable.java
//

#ifndef _AndroidTextEditable_H_
#define _AndroidTextEditable_H_

#include "J2ObjC_header.h"
#include "android/text/GetChars.h"
#include "android/text/Spannable.h"
#include "java/lang/Appendable.h"
#include "java/lang/CharSequence.h"

@class IOSObjectArray;

@protocol AndroidTextEditable < JavaLangCharSequence, AndroidTextGetChars, AndroidTextSpannable, JavaLangAppendable, NSObject, JavaObject >

- (id<AndroidTextEditable>)replaceWithInt:(jint)st
                                  withInt:(jint)en
                 withJavaLangCharSequence:(id<JavaLangCharSequence>)source
                                  withInt:(jint)start
                                  withInt:(jint)end;

- (id<AndroidTextEditable>)replaceWithInt:(jint)st
                                  withInt:(jint)en
                 withJavaLangCharSequence:(id<JavaLangCharSequence>)text;

- (id<AndroidTextEditable>)insertWithInt:(jint)where
                withJavaLangCharSequence:(id<JavaLangCharSequence>)text
                                 withInt:(jint)start
                                 withInt:(jint)end;

- (id<AndroidTextEditable>)insertWithInt:(jint)where
                withJavaLangCharSequence:(id<JavaLangCharSequence>)text;

- (id<AndroidTextEditable>)delete__WithInt:(jint)st
                                   withInt:(jint)en;

- (id<AndroidTextEditable>)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

- (id<AndroidTextEditable>)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)text
                                                  withInt:(jint)start
                                                  withInt:(jint)end;

- (id<AndroidTextEditable>)appendWithChar:(jchar)text;

- (void)clear;

- (void)clearSpans;

- (void)setFiltersWithAndroidTextInputFilterArray:(IOSObjectArray *)filters;

- (IOSObjectArray *)getFilters;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextEditable)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextEditable)

@interface AndroidTextEditable_Factory : NSObject

#pragma mark Public

- (instancetype)init;

+ (AndroidTextEditable_Factory *)getInstance;

- (id<AndroidTextEditable>)newEditableWithJavaLangCharSequence:(id<JavaLangCharSequence>)source OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(AndroidTextEditable_Factory)

FOUNDATION_EXPORT AndroidTextEditable_Factory *AndroidTextEditable_Factory_getInstance();

FOUNDATION_EXPORT void AndroidTextEditable_Factory_init(AndroidTextEditable_Factory *self);

FOUNDATION_EXPORT AndroidTextEditable_Factory *new_AndroidTextEditable_Factory_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextEditable_Factory)

#endif // _AndroidTextEditable_H_