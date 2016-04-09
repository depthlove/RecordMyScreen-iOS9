/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DAVKit/AYOperation.h>

@class DAVSession, NSString;

@interface CalDAVGetResourceOperation : AYOperation {
	NSString* _uri;
	DAVSession* _session;
}
-(instancetype)initWithSession:(id)session URI:(id)uri;
// inherited: -(void)dealloc;
-(void)getResource;
@end
