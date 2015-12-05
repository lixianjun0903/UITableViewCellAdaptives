//
//  UserModel.h
//  只适应Cell
//
//  Created by 李李贤军 on 15/12/5.
//  Copyright © 2015年 XH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserModel : NSObject
//用户名
@property (nonatomic,copy) NSString *username;
//介绍
@property (nonatomic,copy) NSString *introduction;
//头像图片路径
@property (nonatomic,copy) NSString *imagePath;
@end
