//
//  MMOperateMenuView.h
//  MomentKit
//
//  Created by LEA on 2017/12/15.
//  Copyright © 2017年 LEA. All rights reserved.
//
//  朋友圈动态 > 评论/赞操作视图
//

#import <UIKit/UIKit.h>

@interface MMOperateMenuView : UIView

@property (nonatomic, assign) BOOL show;

// 赞
@property (nonatomic, copy) void (^likeMoment)();
// 评论
@property (nonatomic, copy) void (^commentMoment)();

@end
