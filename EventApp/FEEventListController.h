//
//  FEEventListController.h
//  EventApp
//
//  Created by zhenglin li on 12-7-19.
//  Copyright (c) 2012年 snda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"
#import "EGORefreshTableHeaderView.h"
#import "EGORefreshTableFooterView.h"

@interface FEEventListController : UITableViewController <ASIHTTPRequestDelegate, EGORefreshTableHeaderDelegate, EGORefreshTableFooterDelegate>


@property(nonatomic, retain) NSOperationQueue *downloadQueue;
@property(nonatomic, retain) NSMutableArray *eventData;

- (void)loadEvent;

@end
