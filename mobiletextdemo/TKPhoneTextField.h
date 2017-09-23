//
//  TKPhoneTextField.h
//  mobiletextdemo
//
//  Created by 王俊钢 on 2017/9/23.
//  Copyright © 2017年 wangjungang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TKPhoneTextField : UITextField<UITextFieldDelegate>
{
    NSString    *_previousTextFieldContent;
    UITextRange *_previousSelection;
}

@end
