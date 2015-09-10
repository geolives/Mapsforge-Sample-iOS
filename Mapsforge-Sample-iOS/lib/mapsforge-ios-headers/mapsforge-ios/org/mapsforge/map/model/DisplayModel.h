//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/model/DisplayModel.java
//

#ifndef _OrgMapsforgeMapModelDisplayModel_H_
#define _OrgMapsforgeMapModelDisplayModel_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/model/common/Observable.h"

@interface OrgMapsforgeMapModelDisplayModel : OrgMapsforgeMapModelCommonObservable

#pragma mark Public

- (instancetype)init;

- (jboolean)isEqual:(id)obj;

- (jint)getBackgroundColor;

+ (jfloat)getDefaultUserScaleFactor;

+ (jfloat)getDeviceScaleFactor;

- (jint)getMaxTextWidth;

- (jfloat)getScaleFactor;

- (jint)getTileSize;

- (jint)getTileSizeMultiple;

- (jfloat)getUserScaleFactor;

- (NSUInteger)hash;

- (void)setBackgroundColorWithInt:(jint)color;

+ (void)setDefaultUserScaleFactorWithFloat:(jfloat)scaleFactor;

+ (void)setDeviceScaleFactorWithFloat:(jfloat)scaleFactor;

- (void)setFixedTileSizeWithInt:(jint)tileSize;

- (void)setMaxTextWidthFactorWithFloat:(jfloat)maxTextWidthFactor;

- (void)setTileSizeMultipleWithInt:(jint)multiple;

- (void)setUserScaleFactorWithFloat:(jfloat)scaleFactor;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapModelDisplayModel)

FOUNDATION_EXPORT jfloat OrgMapsforgeMapModelDisplayModel_getDefaultUserScaleFactor();

FOUNDATION_EXPORT jfloat OrgMapsforgeMapModelDisplayModel_getDeviceScaleFactor();

FOUNDATION_EXPORT void OrgMapsforgeMapModelDisplayModel_setDefaultUserScaleFactorWithFloat_(jfloat scaleFactor);

FOUNDATION_EXPORT void OrgMapsforgeMapModelDisplayModel_setDeviceScaleFactorWithFloat_(jfloat scaleFactor);

FOUNDATION_EXPORT void OrgMapsforgeMapModelDisplayModel_init(OrgMapsforgeMapModelDisplayModel *self);

FOUNDATION_EXPORT OrgMapsforgeMapModelDisplayModel *new_OrgMapsforgeMapModelDisplayModel_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapModelDisplayModel)

#endif // _OrgMapsforgeMapModelDisplayModel_H_