//
//  GeLoAppInfo.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/18/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

/**
 `GeLoAppInfo` handles retrieving information about the application session.
 */
@interface GeLoAppInfo : NSObject

+ (NSNumber *)getSessionId;
+ (NSString *)getVersion;
+ (NSString *)getUDID;

@end
