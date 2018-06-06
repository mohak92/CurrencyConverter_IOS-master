//
//  CurrencyPair.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Currency.h"

@interface CurrencyPair : NSObject

@property (nonatomic,strong) Currency *baseCurrency;
@property (nonatomic,strong) Currency *targetCurrency;
@property (nonatomic,assign) double baseValue;
@property (nonatomic,readonly) double targetValue;

- (id)initWithBaseCurrency:(Currency *)baseCurrency targetCurrency:(Currency *)targetCurrecy baseVaule:(double)value;
@end
