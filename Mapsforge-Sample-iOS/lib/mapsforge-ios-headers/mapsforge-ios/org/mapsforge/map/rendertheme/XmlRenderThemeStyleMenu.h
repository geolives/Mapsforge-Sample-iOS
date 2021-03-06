//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/XmlRenderThemeStyleMenu.java
//

#ifndef _OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu_H_
#define _OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class OrgMapsforgeMapRenderthemeXmlRenderThemeStyleLayer;
@protocol JavaUtilMap;

@interface OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)id_
                    withNSString:(NSString *)defaultLanguage
                    withNSString:(NSString *)defaultValue;

- (OrgMapsforgeMapRenderthemeXmlRenderThemeStyleLayer *)createLayerWithNSString:(NSString *)id_
                                                                    withBoolean:(jboolean)visible
                                                                    withBoolean:(jboolean)enabled;

- (NSString *)getDefaultLanguage;

- (NSString *)getDefaultValue;

- (NSString *)getId;

- (OrgMapsforgeMapRenderthemeXmlRenderThemeStyleLayer *)getLayerWithNSString:(NSString *)id_;

- (id<JavaUtilMap>)getLayers;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu)

FOUNDATION_EXPORT void OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu_initWithNSString_withNSString_withNSString_(OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu *self, NSString *id_, NSString *defaultLanguage, NSString *defaultValue);

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu *new_OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu_initWithNSString_withNSString_withNSString_(NSString *id_, NSString *defaultLanguage, NSString *defaultValue) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu)

#endif // _OrgMapsforgeMapRenderthemeXmlRenderThemeStyleMenu_H_
