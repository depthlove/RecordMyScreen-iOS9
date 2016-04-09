/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, CalDAVCacheManager, CalDAVAccount;

@interface CalDAVDeleteEntityOperation : NSObject {
	NSString* _filename;
	NSURL* _calendarURL;
	CalDAVAccount* _account;
	CalDAVCacheManager* _cache;
}
-(instancetype)initWithFilename:(id)filename calendarURL:(id)url account:(id)account cache:(id)cache;
// inherited: -(void)dealloc;
-(id)readableDescription;
-(void)performOperation:(BOOL)operation;
@end
