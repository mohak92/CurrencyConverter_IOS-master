//
//  CalculatorTextLabel.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import "FigureTextLabel.h"
#import "CalculatorInput.h"

@interface CalculatorTextLabel : FigureTextLabel<CalculatorInput> {
    BOOL shouldClearBeforeInsert;
    BOOL couldChangeOperator;
    NSString *previousText;
}
- (void)initialize;
@property (nonatomic, readwrite, strong) UIView *inputView;
@property (nonatomic, readwrite, strong) UIView *inputAccessoryView;

@end

