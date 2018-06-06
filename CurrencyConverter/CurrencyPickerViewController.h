//
//  CountryListViewController.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Currency.h"

@protocol CurrencyPickerViewControllerDelegate;
@interface CurrencyPickerViewController : UIViewController {
    NSArray *allCurrenciesList;
    NSArray *allCurrenciesIndexes;
    NSDictionary *currenciesDict;
}

@property (nonatomic,strong) IBOutlet UITableView *tableView;
@property (nonatomic, assign) id<CurrencyPickerViewControllerDelegate> currencyPickerDelegate;
@end


@protocol CurrencyPickerViewControllerDelegate <NSObject>
// delegate is responsible for dismissing the picker

- (void)currencyPickerViewController:(CurrencyPickerViewController *)picker didSelectCurrency:(Currency *)currency;


- (void)currencyPickerViewControllerDidCancel:(CurrencyPickerViewController *)picker;

@end