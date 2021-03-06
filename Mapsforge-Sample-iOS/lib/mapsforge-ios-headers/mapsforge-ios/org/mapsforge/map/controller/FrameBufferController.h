//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/controller/FrameBufferController.java
//

#ifndef _OrgMapsforgeMapControllerFrameBufferController_H_
#define _OrgMapsforgeMapControllerFrameBufferController_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/model/common/Observer.h"

@class OrgMapsforgeMapModelModel;
@class OrgMapsforgeMapViewFrameBuffer;

@interface OrgMapsforgeMapControllerFrameBufferController : NSObject < OrgMapsforgeMapModelCommonObserver >

#pragma mark Public

+ (OrgMapsforgeMapControllerFrameBufferController *)createWithOrgMapsforgeMapViewFrameBuffer:(OrgMapsforgeMapViewFrameBuffer *)frameBuffer
                                                               withOrgMapsforgeMapModelModel:(OrgMapsforgeMapModelModel *)model;

- (void)destroy;

- (void)onChange;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapControllerFrameBufferController)

FOUNDATION_EXPORT OrgMapsforgeMapControllerFrameBufferController *OrgMapsforgeMapControllerFrameBufferController_createWithOrgMapsforgeMapViewFrameBuffer_withOrgMapsforgeMapModelModel_(OrgMapsforgeMapViewFrameBuffer *frameBuffer, OrgMapsforgeMapModelModel *model);

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapControllerFrameBufferController)

#endif // _OrgMapsforgeMapControllerFrameBufferController_H_
