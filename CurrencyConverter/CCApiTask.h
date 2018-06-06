//
//  CCApiTask.h
//  CurrencyConverter
//
//  Created by Mohak Tamhane on 5/25/14.
//  Copyright (c) 2014 Mohak Tamhane. All rights reserved.
//

#import "HttpTask.h"

typedef enum {
    ApiStatusNotReached = -2,
    ApiStatusError,
    ApiStatusSucceed,
    ApiStatusNotModified
}ApiStatus;

@interface CCApiTask : HttpTask {
    ApiStatus _apiStatus;
}
@property (nonatomic, readonly) ApiStatus apiStatus;
@end
