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

@interface GeLoCLBeaconManager : NSObject <CLLocationManagerDelegate>

@property id<GeLoCLBeaconManagerDelegate> delegate;

+ (GeLoCLBeaconManager *)sharedInstance;
- (void)startScanningForCLBeacons;
- (void)stopScanningForCLBeacons;

@end
