//
//  XHAlbumTableViewCell.h
//  MessageDisplayExample
//
//  Created by HUAJIE-1 on 14-5-19.
//  Copyright (c) 2014年 嗨，我是曾宪华(@xhzengAIB)，曾加入YY Inc.担任高级移动开发工程师，拍立秀App联合创始人，热衷于简洁、而富有理性的事物 QQ:543413507 主页:http://zengxianhua.com All rights reserved.
//

#import <UIKit/UIKit.h>

#import <MessageDisplayKit/XHBaseTableViewCell.h>

#import "XHAlbum.h"

@protocol XHAlbumTableViewCellDelegate <NSObject>

@optional
- (void)didShowOperationView:(UIButton *)sender indexPath:(NSIndexPath *)indexPath;

@end

@interface XHAlbumTableViewCell : UITableViewCell

@property (nonatomic, weak) id <XHAlbumTableViewCellDelegate> delegate;

@property (nonatomic, strong) NSIndexPath *indexPath;
@property (nonatomic, strong) XHAlbum *currentAlbum;

+ (CGFloat)calculateCellHeightWithAlbum:(XHAlbum *)currentAlbum;

@end
