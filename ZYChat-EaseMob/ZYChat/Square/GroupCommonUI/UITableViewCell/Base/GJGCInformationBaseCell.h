//
//  GJGCInformationBaseCell.h
//  ZYChat
//
//  Created by ZYVincent QQ:1003081775 on 14-11-6.
//  Copyright (c) 2014年 ZYV. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GJGCInformationBaseModel.h"
#import "GJGCInformationBaseCellDelegate.h"


@interface GJGCInformationBaseCell : UITableViewCell

@property (nonatomic,weak)id<GJGCInformationBaseCellDelegate> delegate;

@property (nonatomic,assign)GJGCInformationSeprateLineStyle seprateStyle;

@property (nonatomic,strong)UIImageView *baseSeprateLine;

@property (nonatomic,strong)UIImageView *accessoryIndicatorView;

@property (nonatomic,strong)UIImageView *topSeprateLine;

@property (nonatomic,assign)CGFloat baseSeprateLineShortMargin;

@property (nonatomic,assign)CGFloat baseLineToCellBottomMargin;

@property (nonatomic,assign)CGFloat topLineToCellTopMargin;

@property (nonatomic,strong)UIImageView *baseContentView;


- (void)setContentInformationModel:(GJGCInformationBaseModel *)contentModel;

- (CGFloat)heightForInformationModel:(GJGCInformationBaseModel *)contentModel;

@end
