//
//  FEServerAPI.h
//  EventApp
//
//  Created by zhenglin li on 12-7-4.
//  Copyright (c) 2012年 snda. All rights reserved.
//

#import <Foundation/Foundation.h>


static NSString *const API_BASE = @"http://10.0.2.1:8888/eventserver";
static NSString *const API_LOGIN = @"/user/login";
static NSString *const API_LOGOUT = @"/user/logout";
static NSString *const API_REGISTER = @"/user/register";
static NSString *const API_UPLOAD = @"/upload";
static NSString *const API_EVENT_CREATE = @"/event/create_event";
static NSString *const API_EVENT_PUBLIC = @"/event/public_event";
static NSString *const API_EVENT_OWNER = @"/event/owner_event";
static NSString *const API_EVENT_ATTEND = @"/event/user_event";