//
//  CustomEvent.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/20/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoSDK.h"

@interface GeLoCustomEvent : NSObject

- (id)initWithCache:(GeLoCacheManager *)cache;
- (void)recordEvent:(NSDictionary *)dictionary type:(NSString *)type;
- (void)writeEvents;
- (void)resetEvents;

@end
