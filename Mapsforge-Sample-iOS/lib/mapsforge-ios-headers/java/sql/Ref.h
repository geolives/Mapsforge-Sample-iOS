//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Ref.java
//

#ifndef _JavaSqlRef_H_
#define _JavaSqlRef_H_

#include "J2ObjC_header.h"

@protocol JavaUtilMap;

@protocol JavaSqlRef < NSObject, JavaObject >

- (NSString *)getBaseTypeName;

- (id)getObject;

- (id)getObjectWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)setObjectWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlRef)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlRef)

#endif // _JavaSqlRef_H_
