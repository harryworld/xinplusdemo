//
//  XinPlus.h
//  XinPlusFramework
//
//  Created by Harry Ng on 2/5/13.
//  Copyright (c) 2013 XinPlus. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "XinPlusLibrary.h"

@interface XinPlus : NSObject

+ (XinPlusLibrary *)startSession:(NSString *)withAppKey;
+ (void)buttonWithAppKey:(NSString *)kAppKey;

+ (NSString *)version;

@property (nonatomic, retain) NSString *appKey;

@end
