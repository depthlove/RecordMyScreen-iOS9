/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class NSString, UIKBKeyplane, UIKBKeyboard, UIKBHandwritingView, UIKBCandidateView;

@interface UIKBKeyplaneView : UIView {
	UIKBKeyboard* m_keyboard;
	UIKBKeyplane* m_keyplane;
	NSString* m_visualStyle;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIKBHandwritingView* m_handwritingView;
	UIKBCandidateView* m_candidateView;
#endif
}
@property(retain, nonatomic) UIKBKeyplane* keyplane;
@property(readonly, assign, nonatomic) NSString* visualStyle;
-(instancetype)initWithFrame:(CGRect)frame keyboard:(id)keyboard keyplane:(id)keyplane;
// -(void)dealloc;
-(BOOL)validForKeyplane:(id)keyplane withVisualStyle:(id)visualStyle;
// -(void)drawRect:(CGRect)rect;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic) UIKBCandidateView* candidateView;
@property(assign, nonatomic) UIKBHandwritingView* handwritingView;
// -(id)hitTest:(CGPoint)test withEvent:(id)event;
#endif
@end
