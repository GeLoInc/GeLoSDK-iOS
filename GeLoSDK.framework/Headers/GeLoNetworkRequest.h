//
//  GeLoNetworkRequest.h
//  GeLoSDK
//
//  Created by Tim Bugai on 6/26/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoNetworkRequest : NSObject<NSURLConnectionDataDelegate>

FOUNDATION_EXPORT NSString *const kGeLoNetworkRequestStarted;
FOUNDATION_EXPORT NSString *const kGeLoNetworkRequestFinished;
FOUNDATION_EXPORT NSString *const kGeLoNetworkRequestErrored;

+ (id)requestWithDelegate:(NSObject *)delegate selector:(SEL)selector path:(NSString *)path, ...;
- (id)initWithDelegate:(NSObject *)delegate selector:(SEL)selector path:(NSString *)path, ...;

@end
