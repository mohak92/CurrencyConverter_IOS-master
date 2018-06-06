//
//  CalCurrencyView.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Currency.h"

typedef enum {
    CurrencySelectedFrom,
    CurrencySelectedTo
}CurrencySelected;

@protocol CalCurrencyViewDelegate;
@interface CalCurrencyView : UIView {
    IBOutlet UIButton *fromCurrencyBtn;
    IBOutlet UIButton *toCurrencyBtn;
    IBOutlet UIButton *switchBtn;
}

@property (nonatomic) id<CalCurrencyViewDelegate> delegate;
@property (nonatomic, strong) Currency *fromCurrency;
@property (nonatomic, strong) Currency *toCurrency;
@property (nonatomic, readonly) CurrencySelected currencySelected;

@end

@protocol CalCurrencyViewDelegate <NSObject>

- (void)currencyViewDidSwitch:(CalCurrencyView *)currencyView;
- (void)currencyView:(CalCurrencyView *)currencyView currencySelected:(CurrencySelected)selected;

@end