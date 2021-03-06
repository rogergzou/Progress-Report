//
//  HCSViewController.h
//  Track Today
//
//  Created by Roger on 6/25/14.
//  Copyright (c) 2014 Roger Zou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HCSViewController : UIViewController

//for appdelegate
@property (nonatomic, readonly) BOOL isPaused;
@property (nonatomic, readonly) BOOL isStart;
@property (nonatomic) int seconds;


- (IBAction)myShortcutTextUnwindSegueCallback:(UIStoryboardSegue *)segue;
- (IBAction)myReminderSegueCallback:(UIStoryboardSegue *)segue;
- (void)endTimer;
- (void)beginTimer;
- (void)hideReminderLabel;

@end
