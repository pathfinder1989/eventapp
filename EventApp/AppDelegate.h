//
//  AppDelegate.h
//  EventApp
//
//  Created by zhenglin li on 12-7-2.
//  Copyright (c) 2012年 snda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WrapController.h"
#import "FEStartViewController.h"
#import "IIViewDeckController.h"
#import "FEHostUser.h"

@class BOCenterViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) FEHostUser *selfUser;

@property (strong, nonatomic) UINavigationController *navigationController;
@property (strong, nonatomic) IIViewDeckController *viewDeckController;


- (void)startMainView;
- (void)logout;

+ (AppDelegate *)sharedDelegate;

@end
