//
//  GJGCInformationTextCell.h
//  ZYChat
//
//  Created by ZYVincent QQ:1003081775 on 14-11-6.
//  Copyright (c) 2014年 ZYV. All rights reserved.
//

#import "GJGCInformationBaseCell.h"
#import "GJGCInformationCellContentModel.h"

@class GJGCTagView;
@class GJGCCommonAttributedStringStyle;

@interface GJGCInformationTextCell : GJGCInformationBaseCell

@property (nonatomic,strong)GJCFCoreTextContentView *tagLabel;

@property (nonatomic,strong)GJCFCoreTextContentView *contentLabel;

@property (nonatomic,assign)CGFloat tagBoradMargin;

@property (nonatomic,assign)CGFloat topBordMargin;

@property (nonatomic,assign)CGFloat contentMargin;

/**
 *  特性视图 
 *  显示 美女群主/妹子多
 */
@property (nonatomic,strong) GJGCTagView *groupAttrTagView;

@end
