//
//  PuBuLiuLayout.h
//  PuBuLiu
//
//  Created by Tony on 16/7/1.
//  Copyright © 2016年 Tony. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PuBuLiuLayoutDelegate <NSObject>

// cell的高度
- (CGFloat)puBuLiuLayoutHeightForItemAtIndex:(NSIndexPath *)index;

@end

@interface PuBuLiuLayout : UICollectionViewFlowLayout

// 列数
@property (nonatomic, assign) NSInteger columnNumber;

// 间隔
@property (nonatomic, assign) CGFloat padding;

// 集合视图整体的边距
@property (nonatomic, assign) UIEdgeInsets edgeInsets;

// 代理
@property (nonatomic, weak) id <PuBuLiuLayoutDelegate> delegate;

@end
