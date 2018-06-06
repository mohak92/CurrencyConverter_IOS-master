//
//  NumPad.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorInput.h"

@interface NumPad : UIView {

}

@property (nonatomic) id<CalculatorInput> input;

+ (NumPad *)defaultNumPad;

@end
