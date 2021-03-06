//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/view/FrameBuffer.java
//

#ifndef _OrgMapsforgeMapViewFrameBuffer_H_
#define _OrgMapsforgeMapViewFrameBuffer_H_

#include "J2ObjC_header.h"

@class OrgMapsforgeCoreModelDimension;
@class OrgMapsforgeCoreModelMapPosition;
@class OrgMapsforgeMapModelDisplayModel;
@class OrgMapsforgeMapModelFrameBufferModel;
@protocol OrgMapsforgeCoreGraphicsBitmap;
@protocol OrgMapsforgeCoreGraphicsGraphicContext;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;

@interface OrgMapsforgeMapViewFrameBuffer : NSObject

#pragma mark Public

- (instancetype)initWithOrgMapsforgeMapModelFrameBufferModel:(OrgMapsforgeMapModelFrameBufferModel *)frameBufferModel
                        withOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel
                  withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory;

- (void)adjustMatrixWithFloat:(jfloat)diffX
                    withFloat:(jfloat)diffY
                    withFloat:(jfloat)scaleFactor
withOrgMapsforgeCoreModelDimension:(OrgMapsforgeCoreModelDimension *)mapViewDimension
                    withFloat:(jfloat)pivotDistanceX
                    withFloat:(jfloat)pivotDistanceY;

- (void)destroy;

- (void)drawWithOrgMapsforgeCoreGraphicsGraphicContext:(id<OrgMapsforgeCoreGraphicsGraphicContext>)graphicContext;

- (void)frameFinishedWithOrgMapsforgeCoreModelMapPosition:(OrgMapsforgeCoreModelMapPosition *)frameMapPosition;

- (OrgMapsforgeCoreModelDimension *)getDimension;

- (id<OrgMapsforgeCoreGraphicsBitmap>)getDrawingBitmap;

- (void)setDimensionWithOrgMapsforgeCoreModelDimension:(OrgMapsforgeCoreModelDimension *)dimension;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapViewFrameBuffer)

FOUNDATION_EXPORT void OrgMapsforgeMapViewFrameBuffer_initWithOrgMapsforgeMapModelFrameBufferModel_withOrgMapsforgeMapModelDisplayModel_withOrgMapsforgeCoreGraphicsGraphicFactory_(OrgMapsforgeMapViewFrameBuffer *self, OrgMapsforgeMapModelFrameBufferModel *frameBufferModel, OrgMapsforgeMapModelDisplayModel *displayModel, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory);

FOUNDATION_EXPORT OrgMapsforgeMapViewFrameBuffer *new_OrgMapsforgeMapViewFrameBuffer_initWithOrgMapsforgeMapModelFrameBufferModel_withOrgMapsforgeMapModelDisplayModel_withOrgMapsforgeCoreGraphicsGraphicFactory_(OrgMapsforgeMapModelFrameBufferModel *frameBufferModel, OrgMapsforgeMapModelDisplayModel *displayModel, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapViewFrameBuffer)

#endif // _OrgMapsforgeMapViewFrameBuffer_H_
