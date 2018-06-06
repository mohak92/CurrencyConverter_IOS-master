//
//  CCApiTask.m
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import "CCApiTask.h"
#import "JSONParser.h"

@implementation CCApiTask

- (id)initWithURL:(NSURL *)url delegate:(id<HttpTaskDelegate>)delegate {
    self = [self initWithURL:url delegate:delegate parser:[JSONParser parser]];
    if (self) {
        
    }
    return self;
}

- (void)taskDidFinish {
    if (![self.result valueForKey:@"error"]) {
        _apiStatus = ApiStatusError;
    }
}


- (ApiStatus)apiStatus {
    return _apiStatus;
}

@end
