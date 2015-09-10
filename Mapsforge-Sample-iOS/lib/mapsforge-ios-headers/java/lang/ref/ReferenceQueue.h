//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/ReferenceQueue.java
//

#ifndef _JavaLangRefReferenceQueue_H_
#define _JavaLangRefReferenceQueue_H_

#include "J2ObjC_header.h"

@class JavaLangRefReference;

@interface JavaLangRefReferenceQueue : NSObject

#pragma mark Public

- (instancetype)init;

- (JavaLangRefReference *)poll;

- (JavaLangRefReference *)remove;

- (JavaLangRefReference *)removeWithLong:(jlong)timeoutMillis;

#pragma mark Package-Private

+ (void)addWithJavaLangRefReference:(JavaLangRefReference *)list;

- (void)enqueueWithJavaLangRefReference:(JavaLangRefReference *)reference;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefReferenceQueue)

FOUNDATION_EXPORT JavaLangRefReference *JavaLangRefReferenceQueue_unenqueued_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangRefReferenceQueue, unenqueued_, JavaLangRefReference *)
J2OBJC_STATIC_FIELD_SETTER(JavaLangRefReferenceQueue, unenqueued_, JavaLangRefReference *)

FOUNDATION_EXPORT void JavaLangRefReferenceQueue_init(JavaLangRefReferenceQueue *self);

FOUNDATION_EXPORT JavaLangRefReferenceQueue *new_JavaLangRefReferenceQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaLangRefReferenceQueue_addWithJavaLangRefReference_(JavaLangRefReference *list);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefReferenceQueue)

#endif // _JavaLangRefReferenceQueue_H_