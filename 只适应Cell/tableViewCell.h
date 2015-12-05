//
//  tableViewCell.h
//  只适应Cell
//
//  Created by 李李贤军 on 15/12/5.
//  Copyright © 2015年 XH. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface tableViewCell : UITableViewCell
//用户名
@property(nonatomic,retain) UILabel *name;
//用户介绍
@property(nonatomic,retain) UILabel *introduction;
//用户头像
@property(nonatomic,retain) UIImageView *userImage;

//给用户介绍赋值并且实现自动换行
-(void)setIntroductionText:(NSString*)text;
//初始化cell类
-(id)initWithReuseIdentifier:(NSString*)reuseIdentifier;
@end
