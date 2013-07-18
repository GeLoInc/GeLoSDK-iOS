//
//  GeLoBeaconManager.h
//  GeLoSDK
//
//  Created by Tim Bugai on 1/21/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#import "GeLoBeacon.h"
#import "GeLoSite.h"

FOUNDATION_EXPORT NSString *const kGeLoBeaconFound;
FOUNDATION_EXPORT NSString *const kGeLoBeaconExpired;
FOUNDATION_EXPORT NSString *const kGeLoBeaconAgedGracefully;
FOUNDATION_EXPORT NSString *const kGeLoNearestBeaconChanged;
FOUNDATION_EXPORT NSString *const kGeLoNearestBeaconExpired;
FOUNDATION_EXPORT NSString *const kGeLoSiteLoaded;
FOUNDATION_EXPORT NSString *const kGeLoSitesLoaded;

@interface GeLoBeaconManager : NSObject<CBCentralManagerDelegate> {
	NSNotificationCenter	*notificationCenter;
	NSMutableDictionary		*sites;
	NSMutableDictionary		*knownBeacons;
	NSMutableDictionary   *falloffs;
	NSInteger							falloff;
	NSUInteger						timeToLive;
	NSInteger             signalCeiling;
	GeLoBeacon						*nearestBeacon;
	GeLoSite							*currentSite;
	BOOL									includeBetas;
}

+ (GeLoBeaconManager *)sharedInstance;

- (void)startScanningForBeacons;
- (BOOL)isScanning;
- (void)stopScanningForBeacons;

- (NSArray *)knownBeacons;
- (GeLoBeacon *)nearestBeacon;

- (NSArray *)knownSites;
- (GeLoSite *)currentSite;
- (void)loadSiteById:(NSNumber *)siteId;

- (GeLoBeaconInfo *)infoForBeaconId:(NSNumber *)beaconId;

- (void)setFalloff:(NSInteger)falloff forId:(NSUInteger)_id;
- (void)setDefaultFalloff:(NSInteger)falloff;
- (void)setDefaultTimeToLive:(NSUInteger)ttl;
- (void)setDefaultSignalCeiling:(NSInteger)ceiling;
- (void)setCurrentSite:(GeLoSite *)site;

- (void)includeBetaSites;

@end
