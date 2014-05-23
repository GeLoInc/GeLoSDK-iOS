//
//  GeLoUrl.h
//  GeLoSDK
//
//  Created by Christopher Rittersdorf on 8/5/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoUrl : NSObject {
    NSString *baseUrl;
}

+(GeLoUrl*)sharedInstance;

-(GeLoUrl*) initWithEnv:(NSString*)env;
-(NSURL*) withPath:(NSString*)path;
- (NSURL *)forOAuth;

@property (nonatomic) NSString *baseUrl;


@end
