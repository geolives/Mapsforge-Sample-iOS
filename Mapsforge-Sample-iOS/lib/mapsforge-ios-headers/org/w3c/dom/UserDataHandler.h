//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/UserDataHandler.java
//

#ifndef _OrgW3cDomUserDataHandler_H_
#define _OrgW3cDomUserDataHandler_H_

#include "J2ObjC_header.h"

@protocol OrgW3cDomNode;

#define OrgW3cDomUserDataHandler_NODE_CLONED 1
#define OrgW3cDomUserDataHandler_NODE_IMPORTED 2
#define OrgW3cDomUserDataHandler_NODE_DELETED 3
#define OrgW3cDomUserDataHandler_NODE_RENAMED 4
#define OrgW3cDomUserDataHandler_NODE_ADOPTED 5

@protocol OrgW3cDomUserDataHandler < NSObject, JavaObject >

- (void)handleWithShort:(jshort)operation
           withNSString:(NSString *)key
                 withId:(id)data
      withOrgW3cDomNode:(id<OrgW3cDomNode>)src
      withOrgW3cDomNode:(id<OrgW3cDomNode>)dst;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomUserDataHandler)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomUserDataHandler, NODE_CLONED, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomUserDataHandler, NODE_IMPORTED, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomUserDataHandler, NODE_DELETED, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomUserDataHandler, NODE_RENAMED, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomUserDataHandler, NODE_ADOPTED, jshort)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomUserDataHandler)

#endif // _OrgW3cDomUserDataHandler_H_