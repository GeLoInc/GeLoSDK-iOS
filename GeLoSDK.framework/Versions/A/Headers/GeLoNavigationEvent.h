//
//  GeLoNavigationEvent.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/18/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import "GeLoSDK.h"

@interface GeLoNavigationEvent : NSObject

- (id)initWithCache:(GeLoCacheManager *)cache;
- (void)recordEvent:(NSString *)localEvent view:(NSString *)view destinationIdentifier:(NSString *)identifier;
- (void)writeEvents;
- (void)resetEvents;

@end
