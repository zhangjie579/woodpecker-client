//
//  UpdateHistory.h
//  WoodPecker
//
//  Created by 张小刚 on 2018/6/3.
//  Copyright © 2018年 lifebetter. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UpdateHistory : NSObject

+ (UpdateHistory *)shared;
- (NSArray *)updationList;
- (BOOL)shouldShowUpdate;

@end
