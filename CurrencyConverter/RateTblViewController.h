//
//  RateTblViewController.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Currency.h"
#import "CurrencyPickerViewController.h"
#import "FigureTextLabel.h"

@interface RateTblViewController : UITableViewController<CurrencyPickerViewControllerDelegate,FigureTextLabelDelegate> {
    Currency *_baseCurrency;
    double _baseValue;
    NSInteger _selectedRow;
}

@end
