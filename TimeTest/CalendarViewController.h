//
//  CalarViewController.h
//  TimeTest
//
//  Created by LvJianfeng on 16/7/21.
//  Copyright © 2016年 LvJianfeng. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MonthModel;
//控制器
@interface CalendarViewController : UIViewController
@end

//CollectionViewHeader
@interface CalendarHeaderView : UICollectionReusableView
@end

//UICollectionViewCell
@interface CalendarCell : UICollectionViewCell
@property (weak, nonatomic) UILabel *dayLabel;

@property (strong, nonatomic) MonthModel *monthModel;
@end

//存储模型
@interface MonthModel : NSObject
@property (assign, nonatomic) NSInteger dayValue;
@property (strong, nonatomic) NSDate *dateValue;
@property (assign, nonatomic) BOOL isSelectedDay;
@end
