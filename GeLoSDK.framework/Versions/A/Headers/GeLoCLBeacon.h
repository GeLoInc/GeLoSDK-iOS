//
//  GeLoCLBeacon.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 2/13/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import "GeLoSDK.h"

@interface GeLoCLBeacon : GeLoBeacon

- (id)initWithMajor:(NSNumber *)_major minor:(NSNumber *)_minor proximityUUID:(NSString *)_proximityUUID signalStrength:(NSInteger)_signalStrength range:(NSString *)_range timeToLive:(NSUInteger)_ttl accuracy:(double)_accuracy;

@property (readonly, assign) double accuracy;
@property (readonly, assign) NSString *range;
@property (readonly, assign) NSNumber *major;
@property (readonly, assign) NSNumber *minor;

@end
