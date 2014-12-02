//
//  GeLoVersionEvent.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/22/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoSDK.h"

@interface GeLoVersionEvent : NSObject

- (id)initWithCache:(GeLoCacheManager *)cache;
- (void)recordEvent;
- (void)writeEvents;
- (void)resetEvents;

@end
