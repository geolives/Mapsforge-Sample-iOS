//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/RenderThemeFuture.java
//

#ifndef _OrgMapsforgeMapRenderthemeRuleRenderThemeFuture_H_
#define _OrgMapsforgeMapRenderthemeRuleRenderThemeFuture_H_

#include "J2ObjC_header.h"
#include "java/util/concurrent/FutureTask.h"

@class OrgMapsforgeMapModelDisplayModel;
@protocol OrgMapsforgeCoreGraphicsGraphicFactory;
@protocol OrgMapsforgeMapRenderthemeXmlRenderTheme;

@interface OrgMapsforgeMapRenderthemeRuleRenderThemeFuture : JavaUtilConcurrentFutureTask

#pragma mark Public

- (instancetype)initWithOrgMapsforgeCoreGraphicsGraphicFactory:(id<OrgMapsforgeCoreGraphicsGraphicFactory>)graphicFactory
                  withOrgMapsforgeMapRenderthemeXmlRenderTheme:(id<OrgMapsforgeMapRenderthemeXmlRenderTheme>)xmlRenderTheme
                          withOrgMapsforgeMapModelDisplayModel:(OrgMapsforgeMapModelDisplayModel *)displayModel;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleRenderThemeFuture)

FOUNDATION_EXPORT void OrgMapsforgeMapRenderthemeRuleRenderThemeFuture_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapRenderthemeXmlRenderTheme_withOrgMapsforgeMapModelDisplayModel_(OrgMapsforgeMapRenderthemeRuleRenderThemeFuture *self, id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, id<OrgMapsforgeMapRenderthemeXmlRenderTheme> xmlRenderTheme, OrgMapsforgeMapModelDisplayModel *displayModel);

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRuleRenderThemeFuture *new_OrgMapsforgeMapRenderthemeRuleRenderThemeFuture_initWithOrgMapsforgeCoreGraphicsGraphicFactory_withOrgMapsforgeMapRenderthemeXmlRenderTheme_withOrgMapsforgeMapModelDisplayModel_(id<OrgMapsforgeCoreGraphicsGraphicFactory> graphicFactory, id<OrgMapsforgeMapRenderthemeXmlRenderTheme> xmlRenderTheme, OrgMapsforgeMapModelDisplayModel *displayModel) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleRenderThemeFuture)

#endif // _OrgMapsforgeMapRenderthemeRuleRenderThemeFuture_H_
