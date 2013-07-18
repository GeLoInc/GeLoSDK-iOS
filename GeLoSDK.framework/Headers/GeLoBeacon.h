//
//  GeLoBeacon.h
//  GeLoSDK
//
//  Created by Tim Bugai on 1/21/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GeLoBeaconInfo;

@interface GeLoBeacon : NSObject {
	NSUInteger			beaconId;
	NSMutableArray  *signalStrengths;
	NSUInteger			timeToLive;
}

+ (id)beaconWithData:(NSData *)_data signalStrength:(NSInteger)_signal timeToLive:(NSUInteger)_ttl;

- (id)initWithId:(NSUInteger)_id signalStrength:(NSInteger)_signal timeToLive:(NSUInteger)_ttl;
- (id)initWithId:(NSUInteger)_id signalStrengths:(NSArray *)_signals timeToLive:(NSUInteger)_ttl;
- (id)initWithData:(NSData *)_data signalStrength:(NSInteger)_signal timeToLive:(NSUInteger)_ttl;

- (void)addSignalStrength:(NSNumber *)signalStrength;
- (void)resetTimeToLive:(NSUInteger)ttl;

- (NSUInteger)beaconId;
- (NSInteger)signalStrength;
- (NSUInteger)timeToLive;
- (NSUInteger)signalCount;

- (GeLoBeaconInfo *)info;

@end
