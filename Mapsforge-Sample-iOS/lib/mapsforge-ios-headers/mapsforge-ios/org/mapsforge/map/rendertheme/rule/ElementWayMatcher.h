//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./org/mapsforge/map/rendertheme/rule/ElementWayMatcher.java
//

#ifndef _OrgMapsforgeMapRenderthemeRuleElementWayMatcher_H_
#define _OrgMapsforgeMapRenderthemeRuleElementWayMatcher_H_

#include "J2ObjC_header.h"
#include "org/mapsforge/map/rendertheme/rule/ElementMatcher.h"

@class OrgMapsforgeMapRenderthemeRuleElementEnum;

@interface OrgMapsforgeMapRenderthemeRuleElementWayMatcher : NSObject < OrgMapsforgeMapRenderthemeRuleElementMatcher >

#pragma mark Public

- (jboolean)isCoveredByWithOrgMapsforgeMapRenderthemeRuleElementMatcher:(id<OrgMapsforgeMapRenderthemeRuleElementMatcher>)elementMatcher;

- (jboolean)matchesWithOrgMapsforgeMapRenderthemeRuleElementEnum:(OrgMapsforgeMapRenderthemeRuleElementEnum *)element;

@end

J2OBJC_STATIC_INIT(OrgMapsforgeMapRenderthemeRuleElementWayMatcher)

FOUNDATION_EXPORT OrgMapsforgeMapRenderthemeRuleElementWayMatcher *OrgMapsforgeMapRenderthemeRuleElementWayMatcher_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(OrgMapsforgeMapRenderthemeRuleElementWayMatcher, INSTANCE_, OrgMapsforgeMapRenderthemeRuleElementWayMatcher *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMapsforgeMapRenderthemeRuleElementWayMatcher)

#endif // _OrgMapsforgeMapRenderthemeRuleElementWayMatcher_H_
