//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/GuardedObject.java
//

#ifndef _JavaSecurityGuardedObject_H_
#define _JavaSecurityGuardedObject_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@protocol JavaSecurityGuard;

@interface JavaSecurityGuardedObject : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithId:(id)object
     withJavaSecurityGuard:(id<JavaSecurityGuard>)guard;

- (id)getObject;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityGuardedObject)

FOUNDATION_EXPORT void JavaSecurityGuardedObject_initWithId_withJavaSecurityGuard_(JavaSecurityGuardedObject *self, id object, id<JavaSecurityGuard> guard);

FOUNDATION_EXPORT JavaSecurityGuardedObject *new_JavaSecurityGuardedObject_initWithId_withJavaSecurityGuard_(id object, id<JavaSecurityGuard> guard) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityGuardedObject)

#endif // _JavaSecurityGuardedObject_H_
