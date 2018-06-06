//
//  WebViewController.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController<UIWebViewDelegate> {
    IBOutlet UIWebView *_webView;
    IBOutlet UIActivityIndicatorView *_indicator;
}

- (void)loadURl:(NSURL*)url;
@end
