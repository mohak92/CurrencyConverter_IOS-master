//
//  Currency.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Currency : NSObject

@property (nonatomic, readonly) NSString    *code;
@property (nonatomic, readonly) NSString    *currencyName;
@property (nonatomic, readonly) double     rate;   // Against USD
@property (nonatomic, readonly) UIImage     *flag;


- (double)rateAgainstCurrency:(Currency *)currency;
- (id)initWithCode:(NSString *)code;
- (id)initWithCode:(NSString *)aCode name:(NSString *)aName;
+ (Currency *)defaultBaseCurrency;
+ (Currency *)defaultTargetCurrency;
@end
