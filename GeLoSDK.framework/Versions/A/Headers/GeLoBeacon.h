//
//  GeLoBeacon.h
//  GeLoSDK
//
//  Created by Tim Bugai on 1/21/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GeLoBeaconInfo;

/**
 `GeLoBeacon` is a data model containting information associated with a physical GeLo beacon
 */
@interface GeLoBeacon : NSObject  {
	NSUInteger			beaconId;
	NSInteger           signalStrength;
	NSInteger           receivedRSSI;
	NSUInteger			timeToLive;
	NSInteger           txPower;
	NSInteger           version;
}

- (id)initWithId:(NSUInteger)_id signalStrength:(NSInteger)_signal timeToLive:(NSUInteger)_ttl txPower:(int8_t)_tx;
- (id)initWithData:(NSData *)_data signalStrength:(NSInteger)_signal timeToLive:(NSUInteger)_ttl;
- (void)addSignalStrength:(NSNumber *)signalStrength;
- (void)resetTimeToLive:(NSUInteger)ttl;

/**
 The identifier of the `GeLoBeacon`
 */
@property (readonly, assign) NSUInteger beaconId;

/**
 The signal strength of the  beacon
 */
@property (readonly, assign) NSInteger signalStrength;

/**
 The filtered received signal strength indication
 */
@property (readonly, assign) NSInteger receivedRSSI;

/**
 The length of time the beacon will be visible after being found
 */
@property (readonly, assign) NSUInteger timeToLive;
/**
 The transmision power of the beacon.
 3: iBeacon (TX Power unknown)
 2: High
 1: Medium
 0: Low
 */
@property (readonly, assign) NSInteger txPower;

@property (readonly, assign) NSInteger version;

/**
* A dictionary representation of the beacon's properties.
*/
@property (readonly) NSDictionary *dictionary;

///---------------------------------------------------
/// @name Retrieving information for a physical beacon
///---------------------------------------------------
/**
 Information from the GeLoCMS associated with the beacon
 */
- (GeLoBeaconInfo *)info;

@end