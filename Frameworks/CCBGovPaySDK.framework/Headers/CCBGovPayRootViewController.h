//
//  CCBGovPayRootViewController.h
//  CCBGovPayRequest
//
//  Created by llbt on 2018/11/7.
//  Copyright © 2018 llbt. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CCBGovPayRootViewController : UIViewController
- (BOOL)isEmptyString:(NSString *)string;
- (NSString *)jsonStringFromDictionary:(NSDictionary *)dicJson;
- (void)setStatusBarBackgroundColor:(UIColor *)color;
- (void)clearStatusBarBgColor;
@end

NS_ASSUME_NONNULL_END
