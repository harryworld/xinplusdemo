//
//  XPChatViewController.h
//  XinPlus
//
//  Created by Harry Ng on 22/3/13.
//  Copyright (c) 2013 Harry Ng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface XPChatViewController : UIViewController
{
    UIImage *lastImage;
}

- (id)initWithAppKey:(NSString *)appKey;
- (void)addImage:(NSString *)imageName;

@property (nonatomic, strong) NSString *uuid;
@property (nonatomic, strong) NSString *staffId;
@property (nonatomic, strong) NSString *appKey;

@end
