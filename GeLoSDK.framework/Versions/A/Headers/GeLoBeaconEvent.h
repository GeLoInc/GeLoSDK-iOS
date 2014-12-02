//
//  GeLoBeaconEvent.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/18/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import "GeLoSDK.h"

@interface GeLoBeaconEvent : NSObject

- (id)initWithCache:(GeLoCacheManager *)cache;
- (void)recordEvent:(GeLoBeacon *)beacon;
- (void)writeEvents;
- (void)resetEvents;
- (unsigned long long)getCurrentRecordSize;

@end
