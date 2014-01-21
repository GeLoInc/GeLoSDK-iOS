//
//  GeLoNetworkRequest.h
//  GeLoSDK
//
//  Created by Tim Bugai on 6/26/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoNetworkRequest : NSObject<NSURLConnectionDataDelegate>

+ (id)requestWithDelegate:(NSObject *)delegate selector:(SEL)selector path:(NSString *)path, ...;
- (id)initWithDelegate:(NSObject *)delegate selector:(SEL)selector path:(NSString *)path, ...;

@end
