

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreLocation/CoreLocation.h>
#import "GeLoCLBeaconManager.h"
#import "GeLoBeacon.h"
#import "GeLoTour.h"
#import "GeLoSite.h"

/**
`GeLoBeaconManager` scans for beacons and also maintains a list of beacons it can find.
 
 Example:
 
    [GeLoBeaconManager sharedInstance] startScanning];
    [GeLoBeaconManager sharedInstance] stopScanning];
 
While `GeLoBeaconManager` is scanning, it can emit the following notifications:
 
 - kGeLoBeaconFound
 - kGeLoBeaconExpired
 - kGeLoBeaconAgedGracefully
 - kGeLoNearestBeaconChanged
 - kGeLoNearestBeaconExpired
*/

@class GeLoCLBeacon;

@interface GeLoBeaconManager : NSObject <CBCentralManagerDelegate, GeLoCLBeaconManagerDelegate> 

+ (GeLoBeaconManager *)sharedInstance;

///-----------------------
/// @name Scanning Control
///-----------------------
- (void)startScanningForBeacons;
- (BOOL)isScanning;
- (void)stopScanningForBeacons;

///---------------------------
/// @name Configuring Scanning
///---------------------------
- (void)setFalloff:(NSInteger)falloff forId:(NSUInteger)_id;
- (void)setDefaultFalloff:(NSInteger)falloff;
- (void)setDefaultTimeToLive:(NSUInteger)ttl;
- (void)setDefaultSignalCeiling:(NSInteger)ceiling;

///----------------------
/// @name Utility Methods
///----------------------
- (void)unsetNearestBeacon;
- (NSArray *)knownBeacons;
- (NSArray *)knownTourBeacons;
- (GeLoBeacon *)nearestBeacon;

@end
