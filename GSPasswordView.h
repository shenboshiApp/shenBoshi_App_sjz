//
//  GSPasswordView.h
//  GreenStoneUser
//
//  Created by greenstone on 15/5/27.
//  Copyright (c) 2015年 greenStone. All rights reserved.
//

#import <UIKit/UIKit.h>
@class GSPasswordView;
@protocol passwordDelegate <NSObject>

@optional
//点击确定的时候的触发方法
- (void)ClickPasswordSureButton:(NSString *)password;
//点击取消的时候的触发方法
- (void)ClickPasswordCancleButton;
@end

@interface GSPasswordView : UIView <UITextFieldDelegate>
@property (nonatomic,strong) UITextField *passwordField;
@property (nonatomic,strong) UIImageView *passwordView;
@property (nonatomic,weak) id <passwordDelegate>delegate;
@end
