//
//  GeLoAnalyticsManager.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 7/25/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoCacheManager.h"
#import "GeLoSDK.h"

@interface GeLoAnalyticsManager : NSObject <GeLoCLGPSManagerDelegate>

+ (GeLoAnalyticsManager *)sharedInstance;
- (void)beaconEventsShouldBeEnabled:(BOOL)enable;
- (void)GPSEventsShouldBeEnabled:(BOOL)enable;
- (void)navigationEventShouldBeEnabled:(BOOL)enable;
- (void)navigationEvent:(NSString *)localEvent view:(NSString *)view destinationIdentifier:(NSString *)identifier;
- (void)beaconEvent:(GeLoBeacon *)beacon;
- (void)customEvent:(NSDictionary *)dictionary type:(NSString *)type;
- (NSDictionary *)handlePostRequest:(BOOL)override;
- (void)enableGPSAnalytics;
- (void)removeAnalytics:(NSString *)type;
- (void)removeCustomAnalytics;

@end