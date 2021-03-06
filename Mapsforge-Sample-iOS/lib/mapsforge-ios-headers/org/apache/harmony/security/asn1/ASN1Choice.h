//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/ASN1Choice.java
//

#ifndef _OrgApacheHarmonySecurityAsn1ASN1Choice_H_
#define _OrgApacheHarmonySecurityAsn1ASN1Choice_H_

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/ASN1Type.h"

@class IOSObjectArray;
@class OrgApacheHarmonySecurityAsn1BerInputStream;
@class OrgApacheHarmonySecurityAsn1BerOutputStream;

@interface OrgApacheHarmonySecurityAsn1ASN1Choice : OrgApacheHarmonySecurityAsn1ASN1Type {
 @public
  IOSObjectArray *type_;
}

#pragma mark Public

- (instancetype)initWithOrgApacheHarmonySecurityAsn1ASN1TypeArray:(IOSObjectArray *)type;

- (jboolean)checkTagWithInt:(jint)identifier;

- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(OrgApacheHarmonySecurityAsn1BerInputStream *)inArg;

- (void)encodeASNWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

- (jint)getIndexWithId:(id)object;

- (id)getObjectToEncodeWithId:(id)object;

- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(OrgApacheHarmonySecurityAsn1BerOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1ASN1Choice)

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1ASN1Choice, type_, IOSObjectArray *)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1ASN1Choice_initWithOrgApacheHarmonySecurityAsn1ASN1TypeArray_(OrgApacheHarmonySecurityAsn1ASN1Choice *self, IOSObjectArray *type);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1ASN1Choice)

#endif // _OrgApacheHarmonySecurityAsn1ASN1Choice_H_
