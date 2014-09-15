//
//  GeLoPlatformManager.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 3/13/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoMediaQueue.h"
#import "GeLoSDK.h"
#import "GeLoSite.h"
#import "GeLoTour.h"
#import "GeLoBeaconInfo.h"

/**
 `GeLoPlatformManager` handles communication between the GeLo platform and the device

 Example:

 [GeLoBeaconManager sharedInstance] currentSite];
 [GeLoBeaconManager sharedInstance] currentTour];

 While `GeLoPlatformManager` is scanning, it can emit the following notifications:

 - kGeLoTourLoaded
 - kGeLoToursLoaded
 - kGeLoTourNeedsUpdate
 - kGeLoTourUpToDate
 - kGeLoSiteLoaded
 - kGeLoSitesLoaded
 - kGeLoSiteNeedsUpdate
 - kGeLoSiteUpToDate
 - kGeLoMediaLoaded
 */
@interface GeLoPlatformManager : NSObject <GeLoMediaQueueDelegate>

+ (id)sharedInstance;
- (void)setOAuth2ClientID:(NSString *)clientID username:(NSString *)username andPassword:(NSString *)password;
- (void)shouldCache:(BOOL)shouldCache;
- (void)authenticate;
- (GeLoSite *)currentSite;
- (GeLoTour *)currentTour;
- (GeLoSite *)loadSiteById:(NSInteger)siteId;
- (GeLoTour *)loadTourById:(NSInteger)tourId;
- (NSArray *)loadKnownSites;
- (NSArray *)loadKnownSpaces;
- (NSArray *)loadKnownTours;
- (void)setCurrentTour:(GeLoTour *)tour;
- (void)setCurrentSite:(GeLoSite *)site;
- (NSString *)getMediaPath:(NSString *)url;
- (GeLoBeaconInfo *)infoForBeaconId:(NSNumber *)beaconId;
//- (BOOL)postAnalytics:(BOOL)shouldForcePost withApplication:(UIApplication *)application;

@end
