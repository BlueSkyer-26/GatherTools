//
//  BaseViewController.h
//  GatherTools
//
//  Created by SunBoy on 17/2/14.
//  Copyright © 2017年 JDL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Define.h"
#import "UIImage+Color.h"
#import "Reachability.h"

@protocol BaseViewControllerDataSource <NSObject>

@optional
-(NSMutableAttributedString*)setTitle;
-(UIButton*)set_leftButton;
-(UIButton*)set_rightButton;
-(UIColor*)set_colorBackground;
-(CGFloat)set_navigationHeight;
-(UIView*)set_bottomView;
-(UIImage*)navBackgroundImage;
-(BOOL)hideNavigationBottomLine;
-(UIImage*)set_leftBarButtonItemWithImage;
-(UIImage*)set_rightBarButtonItemWithImage;

@end

@protocol BaseViewControllerDelegate <NSObject>

@optional
-(void)left_button_event:(UIButton*)sender;
-(void)right_button_event:(UIButton*)sender;
-(void)title_click_event:(UIView*)sender;
@end

@interface BaseViewController : UIViewController<BaseViewControllerDataSource,BaseViewControllerDelegate>

-(void)changeNavigationBarTranslationY:(CGFloat)translationY;
-(void)set_Title:(NSMutableAttributedString *)title;

@end
