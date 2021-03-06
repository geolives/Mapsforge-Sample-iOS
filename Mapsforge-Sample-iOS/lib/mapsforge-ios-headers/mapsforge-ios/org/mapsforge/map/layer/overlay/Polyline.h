//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/layer/overlay/Polyline.java
//

#ifndef _OrgMapsforgeMapLayerOverlayPolyline_H_
#define _OrgMapsforgeMapLayerOverlayPolyline_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/layer/Layer.h"

@class OrgMapsforgeCoreModelBoundingBox;
@class OrgMapsforgeCoreModelPoint;
@protocol JavaUtilList;
@protocol OrgMapsforgeCoreGraphicsCanvas;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeCoreGraphicsPaint;

@interface OrgMapsforgeMapLayerOverlayPolyline : OrgMapsforgeMapLayerLayer

#pragma mark Public

- (instancetype)initWithOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintStroke
           withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory;

- (instancetype)initWithOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintStroke
           withOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                                          withBoolean:(jboolean)keepAligned;

- (void)drawWithOrgMapsforgeCoreModelBoundingBox:(OrgMapsforgeCoreModelBoundingBox *)boundingBox
                                        withByte:(jbyte)zoomLevel
              withOrgMapsforgeCoreGraphicsCanvas:(id<OrgMapsforgeCoreGraphicsCanvas>)canvas
                  withOrgMapsforgeCoreModelPoint:(OrgMapsforgeCoreModelPoint *)topLeftPoint;

- (id<JavaUtilList>)getLatLongs;

- (id<OrgMapsforgeCoreGraphicsPaint>)getPaintStroke;

- (void)setPaintStrokeWithOrgMapsforgeCoreGraphicsPaint:(id<OrgMapsforgeCoreGraphicsPaint>)paintStroke;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapLayerOverlayPolyline)

FOUNDATION_EXPORT void OrgMapsforgeMapLayerOverlayPolyline_initWithOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsGraphicFactory_(OrgMapsforgeMapLayerOverlayPolyline *self, id<OrgMapsforgeCoreGraphicsPaint> paintStroke, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory);

FOUNDATION_EXPORT OrgMapsforgeMapLayerOverlayPolyline *new_OrgMapsforgeMapLayerOverlayPolyline_initWithOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsGraphicFactory_(id<OrgMapsforgeCoreGraphicsPaint> paintStroke, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void OrgMapsforgeMapLayerOverlayPolyline_initWithOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsGraphicFactory_withBoolean_(OrgMapsforgeMapLayerOverlayPolyline *self, id<OrgMapsforgeCoreGraphicsPaint> paintStroke, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, jboolean keepAligned);

FOUNDATION_EXPORT OrgMapsforgeMapLayerOverlayPolyline *new_OrgMapsforgeMapLayerOverlayPolyline_initWithOrgMapsforgeCoreGraphicsPaint_withOrgMapsforgeCoreGraphicsGraphicFactory_withBoolean_(id<OrgMapsforgeCoreGraphicsPaint> paintStroke, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, jboolean keepAligned) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapLayerOverlayPolyline)

#endif // _OrgMapsforgeMapLayerOverlayPolyline_H_
