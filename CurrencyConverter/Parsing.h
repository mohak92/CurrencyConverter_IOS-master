//
//  Parsing.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Parsing <NSObject>

- (id)parseWithData:(NSData *)data;

@end
