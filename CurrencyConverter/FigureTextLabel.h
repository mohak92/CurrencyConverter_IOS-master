//
//  FigureTextLabel.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FigureTextLabelDelegate;
@interface FigureTextLabel : UILabel <UIKeyInput>

@property (nonatomic) id<FigureTextLabelDelegate> delegate;
@property(nonatomic) BOOL clearsOnBeginEditing;
@property (nonatomic, strong) NSNumberFormatter *formatter;
@property (nonatomic, strong) NSNumber *number;
@end

@protocol FigureTextLabelDelegate <NSObject>

@optional
- (void)textLabelDidBeginEditing:(FigureTextLabel *)textLbl;
- (void)textLabelDidEndEditing:(FigureTextLabel *)textLbl;
- (void)textLabelDidChange:(FigureTextLabel *)textLbl;
@end