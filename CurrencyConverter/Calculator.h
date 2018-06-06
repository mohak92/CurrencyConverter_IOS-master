//
//  Calculator.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Calculator : NSObject {
    
}

- (void)pushOperand:(NSNumber*)numberStr;
- (void)pushOperator:(NSString*)operStr;
- (void)changeOperator:(NSString*)operStr;
- (double)result;
+ (Calculator *)defaultCalculator;
- (void)reset;
- (void)runResult;
@end

@interface NSMutableArray (Stack)

- (id)pop;
@end