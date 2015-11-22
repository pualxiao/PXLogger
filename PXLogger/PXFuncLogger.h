//
//  PXFuncLogger.h
//  TestTwo
//
//  Created by 习波 肖 on 15/11/21.
//  Copyright © 2015年 LK. All rights reserved.
//

#import <Foundation/Foundation.h>

#define FUNC_LOG [[PXFuncLogger alloc] initWithFunctionName:[[NSString alloc] initWithFormat:@"%@ %d",@(__FUNCTION__), __LINE__]]
#define FUNC_LOG_ARGS(format, ...) [[PXFuncLogger alloc] initWithFunctionName:[[NSString alloc] initWithFormat:@"%@ %d "format,@(__FUNCTION__), __LINE__, __VA_ARGS__]]

@interface PXFuncLogger : NSObject

-(id)initWithFunctionName:(NSString*)funcName;
@end
