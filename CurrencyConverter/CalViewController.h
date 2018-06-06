//
//  CalViewController.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CurrencyPickerViewController.h"
#import "CalCurrencyView.h"
#import "CalculatorTextLabel.h"
#import "NumPad.h"

@interface CalViewController : UIViewController<CurrencyPickerViewControllerDelegate,FigureTextLabelDelegate,CalCurrencyViewDelegate> {
    
    IBOutlet CalCurrencyView        *currencyView;
    IBOutlet CalculatorTextLabel    *inputLbl;
    IBOutlet UILabel                *outputLbl;
    NumPad                          *numPad;
    CurrencySelected                currencyState;
    
}

@end
