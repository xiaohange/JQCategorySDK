//
//  UITextField+removeDelegate.h
//  HanJunqiang
//
//  Created by HaRi on 16/7/22.
//  Copyright © 2016年 HanJunqiang. All rights reserved. iOS开发QQ群：446310206
//

#import <UIKit/UIKit.h>
@protocol deleteTextFieldDelegate <UITextFieldDelegate>
@optional
- (void)textFieldDidDeleteBackward:(UITextField *)textField;
@end
@interface UITextField (removeDelegate)
@property (weak, nonatomic) id<deleteTextFieldDelegate> delegate;

extern NSString * const textFieldDidDeleteBackwardNotification;

@end
