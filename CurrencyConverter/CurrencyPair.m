//
//  CurrencyPair.m
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import "CurrencyPair.h"

@implementation CurrencyPair
@synthesize baseCurrency;
@synthesize targetCurrency;
@synthesize baseValue;
@synthesize targetValue;

- (id)initWithBaseCurrency:(Currency *)aBaseCurrency targetCurrency:(Currency *)aTargetCurrecy baseVaule:(double)aValue {
    self = [super init];
    if (self) {
        baseCurrency = aBaseCurrency;
        targetCurrency = aTargetCurrecy;
        baseValue = aValue;
    }
    return self;
    
}

- (double)targetValue {
    return [targetCurrency rateAgainstCurrency:baseCurrency] * baseValue;
}
@end
