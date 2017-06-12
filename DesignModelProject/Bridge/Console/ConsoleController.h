//
//  ConsoleController.h
//  DesignModelProject
//
//  Created by Tibin Zhang on 2017/5/5.
//  Copyright © 2017年 Xueshan Financial Information Service Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "ConsoleEmulator.h"

@interface ConsoleController : NSObject
{
    
}

@property (nonatomic, strong) ConsoleEmulator *emulator;

- (void)setCommand:(ConsoleCommand)command;

@end