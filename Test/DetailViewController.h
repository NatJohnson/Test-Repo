//
//  DetailViewController.h
//  Test
//
//  Created by Nat Johnson on 6/07/13.
//  Copyright (c) 2013 Nat Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
