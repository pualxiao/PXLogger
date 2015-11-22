//
//  PXFuncLogger.m
//  TestTwo
//
//  Created by 习波 肖 on 15/11/21.
//  Copyright © 2015年 LK. All rights reserved.
//

#import "PXFuncLogger.h"

@interface PXFuncLogger()

@property (strong, nonatomic) NSString *funcName;

@end

@implementation PXFuncLogger

-(id)initWithFunctionName:(NSString*)funcName {
    self = [super init];
    _funcName = funcName;
    NSLog(@"%@ in", funcName);

    return self;
}

-(void)dealloc {
     NSLog(@"%@ out", _funcName);
}

@end
