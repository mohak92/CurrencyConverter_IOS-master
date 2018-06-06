//
//  CalculatorInput.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Calculator.h"

typedef enum {
    OperatorPlus = 1,
    OperatorMinus,
    OperatorMulti,
    OperatorDivide,
    
}Operator;

@protocol CalculatorInput <UIKeyInput>

@property (nonatomic, strong) Calculator *calculator;
- (void)operates:(Operator)oper;
- (void)equalsTo;
- (void)clears;
@end