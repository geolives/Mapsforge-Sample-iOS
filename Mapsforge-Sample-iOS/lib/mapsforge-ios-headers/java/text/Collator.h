//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/Collator.java
//

#ifndef _JavaTextCollator_H_
#define _JavaTextCollator_H_

#include "J2ObjC_header.h"
#include "java/util/Comparator.h"

@class IOSObjectArray;
@class JavaTextCollationKey;
@class JavaUtilLocale;

#define JavaTextCollator_NO_DECOMPOSITION 0
#define JavaTextCollator_CANONICAL_DECOMPOSITION 1
#define JavaTextCollator_FULL_DECOMPOSITION 2
#define JavaTextCollator_PRIMARY 0
#define JavaTextCollator_SECONDARY 1
#define JavaTextCollator_TERTIARY 2
#define JavaTextCollator_IDENTICAL 3

@interface JavaTextCollator : NSObject < JavaUtilComparator, NSCopying >

#pragma mark Public

- (instancetype)init;

- (id)clone;

- (jint)compareWithId:(id)object1
               withId:(id)object2;

- (jint)compareWithNSString:(NSString *)string1
               withNSString:(NSString *)string2;

- (jboolean)equalsWithNSString:(NSString *)string1
                  withNSString:(NSString *)string2;

+ (IOSObjectArray *)getAvailableLocales;

- (JavaTextCollationKey *)getCollationKeyWithNSString:(NSString *)string;

- (jint)getDecomposition;

+ (JavaTextCollator *)getInstance;

+ (JavaTextCollator *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (jint)getStrength;

- (void)setDecompositionWithInt:(jint)value;

- (void)setStrengthWithInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextCollator)

J2OBJC_STATIC_FIELD_GETTER(JavaTextCollator, NO_DECOMPOSITION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextCollator, CANONICAL_DECOMPOSITION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextCollator, FULL_DECOMPOSITION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextCollator, PRIMARY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextCollator, SECONDARY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextCollator, TERTIARY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaTextCollator, IDENTICAL, jint)

FOUNDATION_EXPORT IOSObjectArray *JavaTextCollator_getAvailableLocales();

FOUNDATION_EXPORT JavaTextCollator *JavaTextCollator_getInstance();

FOUNDATION_EXPORT JavaTextCollator *JavaTextCollator_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT void JavaTextCollator_init(JavaTextCollator *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextCollator)

#endif // _JavaTextCollator_H_
