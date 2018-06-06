//
//  RateCell.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CurrencyPair.h"
#import "CalculatorTextLabel.h"

@interface RateCell : UITableViewCell {
    
    IBOutlet CalculatorTextLabel *valueLbl;
    IBOutlet UILabel *rateLbl;
    IBOutlet UILabel *codeLbl;
    
    IBOutlet UIImageView *flagImg;
}

@property (nonatomic) IBOutlet CalculatorTextLabel *valueLbl;
@property (nonatomic, getter = isValueEditing) BOOL valueEditing;
@property (nonatomic, strong) CurrencyPair *pair;

- (void)setTarget:(id)target action:(SEL)selector;

@end
