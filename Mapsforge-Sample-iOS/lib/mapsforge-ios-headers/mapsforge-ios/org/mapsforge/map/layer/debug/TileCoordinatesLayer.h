//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/debug/TileCoordinatesLayer.java
//

#ifndef _OrgMapsforgeMapLayerDebugTileCoordinatesLayer_H_
#define _OrgMapsforgeMapLayerDebugTileCoordinatesLayer_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/layer/Layer.h"

@class OrgMapsforgeCoreModelBoundingBox;
@class OrgMapsforgeCoreModelPoint;
@class OrgMapsforgeMapModelDisplayModel;
@protocol OrgMapsforgeCoreGraphicsCanvas;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeCoreGraphicsPaint;

@interface OrgMapsforgeMapLayerDebugTileCoordinatesLayer : OrgMapsforgeMapLayerLayer

#pragma mark Public

- (instancetype)initWithOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel
                       withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintBack
                       withOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintFront;

- (instancetype)initWithOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                          withOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel;

- (void)drawWithOrgMapsforgeCoreModelBoundingBox:(OrgMapsforgeCoreModelBoundingBox *)boundingBox
                                        withByte:(jbyte)zoomLevel
              withOrgMapsforgeCoreGraphicsCanvas:(id<OrgMapsforgeCoreGraphicsCanvas>)canvas
                  withOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)topLeftPoint;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerDebugTileCoordinatesLayer)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerDebugTileCoordinatesLayer_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_(OrgMapsforgeMapLayerDebugTileCoordinatesLayer *self, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel);

FOUNDATION_EXPORT OrgMapsforgeMapLayerDebugTileCoordinatesLayer *new_OrgMapsforgeMapLayerDebugTileCoordinatesLayer_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapModelDisplayModel_(id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, OrgMapsforgeMapModelDisplayModel *displayModel) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMapsforgeMapLayerDebugTileCoordinatesLayer_initWithOrgMapsforgeMapModelDisplayModel_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_(OrgMapsforgeMapLayerDebugTileCoordinatesLayer *self, OrgMapsforgeMapModelDisplayModel *displayModel, id<OrgMapsforgeCoreGraphicsPaint> paintBack, id<OrgMapsforgeCoreGraphicsPaint> paintFront);

FOUNDATION_EXPORT OrgMapsforgeMapLayerDebugTileCoordinatesLayer *new_OrgMapsforgeMapLayerDebugTileCoordinatesLayer_initWithOrgMapsforgeMapModelDisplayModel_withOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsPaint_(OrgMapsforgeMapModelDisplayModel *displayModel, id<OrgMapsforgeCoreGraphicsPaint> paintBack, id<OrgMapsforgeCoreGraphicsPaint> paintFront) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerDebugTileCoordinatesLayer)

#endif // _OrgMapsforgeMapLayerDebugTileCoordinatesLayer_H_
