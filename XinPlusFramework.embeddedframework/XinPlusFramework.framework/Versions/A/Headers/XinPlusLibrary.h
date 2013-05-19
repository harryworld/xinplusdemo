//
//  XinPlusLibrary.h
//  XinPlusLibrary
//
//  Created by Harry Ng on 2/5/13.
//  Copyright (c) 2013 XinPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "XPChatViewController.h"

@interface XinPlusLibrary : NSObject

@property (strong, nonatomic) XPChatViewController *xpChatView;

+ (XinPlusLibrary *)sharedInstance;

+ (XinPlusLibrary *)startSession:(NSString *)withAppKey;

+ (NSString *)version;

@end
