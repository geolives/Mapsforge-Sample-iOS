//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/core/model/Dimension.java
//

#ifndef _OrgMapsforgeCoreModelDimension_H_
#define _OrgMapsforgeCoreModelDimension_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class OrgMapsforgeCoreModelPoint;

@interface OrgMapsforgeCoreModelDimension : NSObject < JavaIoSerializable > {
 @public
  jint height_;
  jint width_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)width
                    withInt:(jint)height;

- (jboolean)isEqual:(id)obj;

- (OrgMapsforgeCoreModelPoint *)getCenter;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeCoreModelDimension)

FOUNDATION_EXPORT void OrgMapsforgeCoreModelDimension_initWithInt_withInt_(OrgMapsforgeCoreModelDimension *self, jint width, jint height);

FOUNDATION_EXPORT OrgMapsforgeCoreModelDimension *new_OrgMapsforgeCoreModelDimension_initWithInt_withInt_(jint width, jint height) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeCoreModelDimension)

#endif // _OrgMapsforgeCoreModelDimension_H_