//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECFieldFp.java
//

#ifndef _JavaSecuritySpecECFieldFp_H_
#define _JavaSecuritySpecECFieldFp_H_

#include "J2ObjC_header.h"
#include "java/security/spec/ECField.h"

@class JavaMathBigInteger;

@interface JavaSecuritySpecECFieldFp : NSObject < JavaSecuritySpecECField >

#pragma mark Public

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)p;

- (jboolean)isEqual:(id)obj;

- (jint)getFieldSize;

- (JavaMathBigInteger *)getP;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECFieldFp)

FOUNDATION_EXPORT void JavaSecuritySpecECFieldFp_initWithJavaMathBigInteger_(JavaSecuritySpecECFieldFp *self, JavaMathBigInteger *p);

FOUNDATION_EXPORT JavaSecuritySpecECFieldFp *new_JavaSecuritySpecECFieldFp_initWithJavaMathBigInteger_(JavaMathBigInteger *p) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECFieldFp)

#endif // _JavaSecuritySpecECFieldFp_H_
