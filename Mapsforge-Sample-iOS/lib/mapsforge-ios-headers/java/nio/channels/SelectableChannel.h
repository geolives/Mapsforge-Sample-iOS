//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/SelectableChannel.java
//

#ifndef _JavaNioChannelsSelectableChannel_H_
#define _JavaNioChannelsSelectableChannel_H_

#include "J2ObjC_header.h"
#include "java/nio/channels/Channel.h"
#include "java/nio/channels/spi/AbstractInterruptibleChannel.h"

@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSelector;
@class JavaNioChannelsSpiSelectorProvider;

@interface JavaNioChannelsSelectableChannel : JavaNioChannelsSpiAbstractInterruptibleChannel < JavaNioChannelsChannel >

#pragma mark Public

- (id)blockingLock;

- (JavaNioChannelsSelectableChannel *)configureBlockingWithBoolean:(jboolean)block;

- (jboolean)isBlocking;

- (jboolean)isRegistered;

- (JavaNioChannelsSelectionKey *)keyForWithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel;

- (JavaNioChannelsSpiSelectorProvider *)provider;

- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSelector:(JavaNioChannelsSelector *)selector
                                                               withInt:(jint)operations;

- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel
                                                               withInt:(jint)ops
                                                                withId:(id)att;

- (jint)validOps;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSelectableChannel)

FOUNDATION_EXPORT void JavaNioChannelsSelectableChannel_init(JavaNioChannelsSelectableChannel *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSelectableChannel)

#endif // _JavaNioChannelsSelectableChannel_H_
