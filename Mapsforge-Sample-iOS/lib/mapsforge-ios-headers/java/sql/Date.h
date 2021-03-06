//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Date.java
//

#ifndef _JavaSqlDate_H_
#define _JavaSqlDate_H_

#include "J2ObjC_header.h"
#include "java/util/Date.h"

@interface JavaSqlDate : JavaUtilDate

#pragma mark Public

- (instancetype)initWithInt:(jint)theYear
                    withInt:(jint)theMonth
                    withInt:(jint)theDay;

- (instancetype)initWithLong:(jlong)theDate;

- (jint)getHours;

- (jint)getMinutes;

- (jint)getSeconds;

- (void)setHoursWithInt:(jint)theHours;

- (void)setMinutesWithInt:(jint)theMinutes;

- (void)setSecondsWithInt:(jint)theSeconds;

- (void)setTimeWithLong:(jlong)theTime;

- (NSString *)description;

+ (JavaSqlDate *)valueOfWithNSString:(NSString *)dateString;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlDate)

FOUNDATION_EXPORT void JavaSqlDate_initWithInt_withInt_withInt_(JavaSqlDate *self, jint theYear, jint theMonth, jint theDay);

FOUNDATION_EXPORT JavaSqlDate *new_JavaSqlDate_initWithInt_withInt_withInt_(jint theYear, jint theMonth, jint theDay) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSqlDate_initWithLong_(JavaSqlDate *self, jlong theDate);

FOUNDATION_EXPORT JavaSqlDate *new_JavaSqlDate_initWithLong_(jlong theDate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlDate *JavaSqlDate_valueOfWithNSString_(NSString *dateString);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlDate)

#endif // _JavaSqlDate_H_
