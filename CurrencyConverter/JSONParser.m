//
//  JSONParser.m
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import "JSONParser.h"

@implementation JSONParser

+ (JSONParser *)parser {
    static JSONParser *ins = nil;
    if (ins == nil) {
        ins = [[JSONParser alloc] init];
    }
    return ins;
}

- (id)parseWithData:(NSData *)data {
    NSError *err = nil;
    id res = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:&err];
    if (err!=nil) {
        return nil;
    }
    
    return res;
}
@end
