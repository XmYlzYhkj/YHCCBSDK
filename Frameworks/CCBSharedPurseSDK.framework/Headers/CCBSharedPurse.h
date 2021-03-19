//
//  CCBSPSDK.h
//  CCBSharedPurseSDK
//
//  Created by 陈启扬 on 2018/9/10.
//  Copyright © 2018年 陈启扬. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^CompletionBlock)(NSDictionary *dic);

@interface CCBSharedPurse : NSObject

/**
 *  创建支付单例服务
 *
 *  @return 返回单例对象
 */
+ (instancetype)defaultService;

/**
 *  获取当前版本号
 *
 *  @return 当前版本字符串
 */
- (NSString *)currentVersion;


/**
共享钱包支付接口
 
 @param orderStr        订单信息 以 key1=value1&key2=value2 拼接
 @param completionBlock 支付结果回调
 */
- (void)payOrder:(NSString *)orderStr
        callback:(CompletionBlock)completionBlock;

@end
