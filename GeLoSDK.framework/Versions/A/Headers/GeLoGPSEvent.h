//
//  GeLoGPSEvent.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/18/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import "GeLoSDK.h"
#import <CoreLocation/CoreLocation.h>

@interface GeLoGPSEvent : NSObject

- (id)initWithCache:(GeLoCacheManager *)cache;
- (void)recordEvent:(CLLocation *)location;
- (void)writeEvents;
- (void)resetEvents;

@end
