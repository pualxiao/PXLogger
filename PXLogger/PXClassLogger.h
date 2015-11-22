//
//  PXClassLogger.h
//  TestTwo
//
//  Created by 习波 肖 on 15/11/21.
//  Copyright © 2015年 LK. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PXClassLogger : NSObject

+(void)addClass:(Class)class;
+(void)addClasses:(NSArray*)classes;
+(void)addClassWithName:(NSString*)class;

@end
