//
//  GeLoCLBeaconManaher.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 2/13/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@protocol GeLoCLBeaconManagerDelegate <NSObject>

- (void)geloCLBeaconsFound:(NSArray *)beacons;

@end

@protocol GeLoCLGPSManagerDelegate <NSObject>

- (void)GPSEvent:(CLLocation *)location;

@end

@interface GeLoCoreLocationManager : NSObject <CLLocationManagerDelegate>

@property id<GeLoCLBeaconManagerDelegate> beaconDelegate;
@property id<GeLoCLGPSManagerDelegate> gpsDelegate;

+ (GeLoCoreLocationManager *)sharedInstance;
- (void)changeMonitoredUUIDs:(NSArray *)uuids;
- (void)startMonitoringLocation;
- (void)stopMonitoringLocation;
- (void)startScanningForCLBeacons;
- (void)stopScanningForCLBeacons;
- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorization;

@end
