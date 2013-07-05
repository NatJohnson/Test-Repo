//
//  MasterViewController.h
//  Test
//
//  Created by Nat Johnson on 6/07/13.
//  Copyright (c) 2013 Nat Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
