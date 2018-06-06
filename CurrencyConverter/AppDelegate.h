//
//  AppDelegate.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UITabBarController *mainTabController;
@property (strong, nonatomic) UIWindow *window;

- (NSURL *)applicationDocumentsDirectory;

@end
