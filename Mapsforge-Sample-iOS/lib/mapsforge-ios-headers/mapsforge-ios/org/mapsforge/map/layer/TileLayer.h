//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/TileLayer.java
//

#ifndef _OrgMapsforgeMapLayerTileLayer_H_
#define _OrgMapsforgeMapLayerTileLayer_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/layer/Layer.h"

@class OrgMapsforgeCoreModelBoundingBox;
@class OrgMapsforgeCoreModelPoint;
@class OrgMapsforgeCoreModelTile;
@class OrgMapsforgeMapLayerQueueJob;
@class OrgMapsforgeMapLayerQueueJobQueue;
@class OrgMapsforgeMapModelDisplayModel;
@class OrgMapsforgeMapModelMapViewPosition;
@protocol OrgMapsforgeCoreGraphicsCanvas;
@protocol OrgMapsforgeCoreGraphicsMatrix;
@protocol OrgMapsforgeCoreGraphicsTileBitmap;
@protocol OrgMapsforgeMapLayerCacheTileCache;

@interface OrgMapsforgeMapLayerTileLayer : OrgMapsforgeMapLayerLayer {
 @public
  jboolean hasJobQueue_;
  jboolean isTransparent_;
  OrgMapsforgeMapLayerQueueJobQueue *jobQueue_;
  id<OrgMapsforgeMapLayerCacheTileCache> tileCache_;
}

#pragma mark Public

- (instancetype)initWithOrgMapsforgeMapLayerCacheTileCache:(id<OrgMapsforgeMapLayerCacheTileCache>)tileCache
                   withOrgMapsforgeMapModelMapViewPosition:(OrgMapsforgeMapModelMapViewPosition *)mapViewPosition
                        withOrgMapsforgeCoreGraphicsMatrix:(id<OrgMapsforgeCoreGraphicsMatrix>)matrix
                                               withBoolean:(jboolean)isTransparent;

- (instancetype)initWithOrgMapsforgeMapLayerCacheTileCache:(id<OrgMapsforgeMapLayerCacheTileCache>)tileCache
                   withOrgMapsforgeMapModelMapViewPosition:(OrgMapsforgeMapModelMapViewPosition *)mapViewPosition
                        withOrgMapsforgeCoreGraphicsMatrix:(id<OrgMapsforgeCoreGraphicsMatrix>)matrix
                                               withBoolean:(jboolean)isTransparent
                                               withBoolean:(jboolean)hasJobQueue;

- (void)drawWithOrgMapsforgeCoreModelBoundingBox:(OrgMapsforgeCoreModelBoundingBox *)boundingBox
                                        withByte:(jbyte)zoomLevel
              withOrgMapsforgeCoreGraphicsCanvas:(id<OrgMapsforgeCoreGraphicsCanvas>)canvas
                  withOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)topLeftPoint;

- (void)setDisplayModelWithOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel;

#pragma mark Protected

- (id)createJobWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile;

- (jboolean)isTileStaleWithOrgMapsforgeCoreModelTile:(OrgMapsforgeCoreModelTile *)tile
              withOrgMapsforgeCoreGraphicsTileBitmap:(id<OrgMapsforgeCoreGraphicsTileBitmap>)bitmap;

- (void)retrieveLabelsOnlyWithOrgMapsforgeMapLayerQueueJob:(OrgMapsforgeMapLayerQueueJob *)job;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerTileLayer)

J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerTileLayer, jobQueue_, OrgMapsforgeMapLayerQueueJobQueue *)
J2OBJC_FIELD_SETTER(OrgMapsforgeMapLayerTileLayer, tileCache_, id<OrgMapsforgeMapLayerCacheTileCache>)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerTileLayer_initWithOrgMapsforgeMapLayerCacheTileCache_withOrgMapsforgeMapModelMapViewPosition_withOrgMapsforgeCoreGraphicsMatrix_withBoolean_(OrgMapsforgeMapLayerTileLayer *self, id<OrgMapsforgeMapLayerCacheTileCache> tileCache, OrgMapsforgeMapModelMapViewPosition *mapViewPosition, id<OrgMapsforgeCoreGraphicsMatrix> matrix, jboolean isTransparent);

FOUNDATION_EXPORT void OrgMapsforgeMapLayerTileLayer_initWithOrgMapsforgeMapLayerCacheTileCache_withOrgMapsforgeMapModelMapViewPosition_withOrgMapsforgeCoreGraphicsMatrix_withBoolean_withBoolean_(OrgMapsforgeMapLayerTileLayer *self, id<OrgMapsforgeMapLayerCacheTileCache> tileCache, OrgMapsforgeMapModelMapViewPosition *mapViewPosition, id<OrgMapsforgeCoreGraphicsMatrix> matrix, jboolean isTransparent, jboolean hasJobQueue);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerTileLayer)

#endif // _OrgMapsforgeMapLayerTileLayer_H_