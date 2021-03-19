//
//  CCBGovPayWebViewController
//  CCBGovPayRequest
//
//  Created by llbt on 2018/11/12.
//  Copyright © 2018 llbt. All rights reserved.
//

/* 参数说明：
 loadType：1：直接传输URL  2：对参数加密后传输
 mainServiceHttp：接入地址
 postDict：若loadType传2，则需要将提交内容加密后的内容放入此字典
 
 * myBlock：回调结果
 * 回调结果说明：ResultBlock返回字典格式如下：
 @{
    @"pyFTpCd":@"3",@"ordrStCd":@"2"
 }
 备注：
 pyFTpCd：缴费类型类型 @{@"1":@"便民",@"2":@"政务",@"3":@"非税"}
 ordrStCd:订单状态 @{@"1":@"待缴费",@"2":@"成功",@"3":@"失败",@"4":@"全部退款",@"5":@"部分退款",@"6":@"失效",@"9":@"取消",@"a":@"处理中",@"b":@"待冲正",@"d":@"未知状态"}
 */


#import "CCBGovPayRootViewController.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^ResultBlock)(NSDictionary *resultDict);

@interface CCBGovPayWebViewController : CCBGovPayRootViewController
@property (nonatomic, copy) NSString *loadType; // 1：直接传输URL  2：对参数加密后传输
@property (nonatomic, copy) NSString *mainServiceHttp; //加载画URL
@property (nonatomic, strong) NSDictionary *postDict;
@property (nonatomic, copy) ResultBlock myBlock;

/** 是否隐藏浮动关闭按钮（若不设置，则默认显示）*/
@property (nonatomic, assign) BOOL hiddenCloseBtn;

/** 设置浮动关闭按钮图片（若不设置，则为默认样式）*/
- (void)configCloseBtnImage:(UIImage *)image;

@end

NS_ASSUME_NONNULL_END
