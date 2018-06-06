//
//  CurrencyHelper.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//
//  Get the latest rates from api. If network fails, use the latest version from local.


#import <Foundation/Foundation.h>
#import "Currency.h"
#import "CCApiTask.h"

@interface CurrencyHelper : NSObject <HttpTaskDelegate> 

+ (CurrencyHelper *)sharedInstance;

- (NSArray *)currenciesList;
- (void)refreshRate;
- (NSDictionary *)dictionaryOfCurrencies;
- (NSDictionary *)dictionaryOfRates;
- (void)initialize;
@end