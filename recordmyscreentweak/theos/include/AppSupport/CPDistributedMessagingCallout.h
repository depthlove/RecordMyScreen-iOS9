/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>


@interface CPDistributedMessagingCallout : NSObject {
	id _target;
	SEL _selector;
	BOOL _returnsVoid;
	BOOL _returnsVoidIsValid;
}
@property(readonly, retain, nonatomic) id target;
@property(readonly, assign, nonatomic) SEL selector;
@property(readonly, assign, nonatomic) BOOL returnsVoid;
-(instancetype)initWithTarget:(id)target selector:(SEL)selector;
// inherited: -(void)dealloc;
@end
