

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#import "GeLoBeacon.h"
#import "GeLoTour.h"
#import "GeLoSite.h"


/**
`GeLoBeaconManager` scans for beacons and also maintains a list of beacons it can find.
 
 Example:
 
    [GeLoBeaconManager sharedInstance] startScanning];
    [GeLoBeaconManager sharedInstance] pauseScanning];
    [GeLoBeaconManager sharedInstance] resumeScanning];
 
While `GeLoBeaconManager` is scanning, it can emit the following notifications:
 
 - kGeLoBeaconAgedGracefully
 - kGeLoBeaconExpired
 - kGeLoNearestBeaconExpired
 - kGeLoNearestBeaconChanged
 - kGeLoBeaconFound
 - kGeLoTourLoaded
 - kGeLoSiteLoaded
 - kGeLoToursLoaded
 - kGeLoSitesLoaded
 - kGeLoBeaconListLoaded
*/

@interface GeLoBeaconManager : NSObject<CBCentralManagerDelegate> {
    __block NSMutableDictionary	  *knownBeacons;
    __block NSMutableDictionary   *knownTourBeaconsDict;
    __block NSArray               *knownTourBeacons;
    __block GeLoBeacon			  *nearestBeacon;
            dispatch_queue_t      scanningQueue;
    
	        NSNotificationCenter  *notificationCenter;
        	NSMutableDictionary	  *tours;
            NSMutableDictionary   *sites;
            NSMutableDictionary   *falloffs;
            NSInteger			  falloff;
            NSUInteger			  timeToLive;
            NSInteger             signalCeiling;
            GeLoTour			  *currentTour;
            GeLoSite              *currentSite;
            BOOL				  includeBetas;
}

+ (GeLoBeaconManager *)sharedInstance;

///---------------------------
/// @name Configuring Scanning
///---------------------------
- (void)setFalloff:(NSInteger)falloff forId:(NSUInteger)_id;
- (void)setDefaultFalloff:(NSInteger)falloff;
- (void)setDefaultTimeToLive:(NSUInteger)ttl;
- (void)setDefaultSignalCeiling:(NSInteger)ceiling;
- (void)includeBetaTours;

///-----------------------
/// @name Scanning Control
///-----------------------
- (void)startScanningForBeacons;
- (void)resumeScanningForBeacons;
- (BOOL)isScanning;
- (BOOL)isPaused;
- (void)stopScanningForBeacons;
- (void)pauseScanningForBeacons;

///-------------------------
/// @name Known Surroundings
///-------------------------
- (NSArray *)knownBeacons;
- (NSArray *)knownTourBeacons;
- (GeLoBeacon *)nearestBeacon;
- (NSArray *)knownTours;
- (NSArray *)knownSites;
- (GeLoTour *)currentTour;
- (GeLoSite *)currentSite;
- (NSArray*)findKnownTourBeacons;

///------------------
/// @name Information
///------------------
- (GeLoBeaconInfo *)infoForBeaconId:(NSNumber *)beaconId;
- (NSInteger) siteForBeaconId:(NSInteger) beaconId;

///----------------------
/// @name Utility Methods
///----------------------
- (void)loadTourById:(NSNumber *)tourId;
- (void)loadSiteById:(NSNumber *)siteId;
- (void)setCurrentTour:(GeLoTour *)tour;
- (void)unsetNearestBeacon;


@end
