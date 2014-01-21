//
//  GeLoTour.h
//  GeLoSDK
//
//  Created by Tim Bugai on 5/22/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoMediaDownloading.h"

/**
 `GeLoTour` is a data model that represents tour information from the CMS
 */
@interface GeLoTour : NSObject <GeLoMediaDownloading> 

/**
 identifier of the tour
 */
@property (nonatomic) NSNumber  *tourId;

/**
 name of the tour
 */
@property (nonatomic) NSString  *name;

/**
 URL for a map of the tour.
 */
@property (nonatomic) NSString  *map;

/**
 URL for an iPhone banner ad
 */
@property (nonatomic) NSString *bannerAdPhoneImageUrl;

/**
 URL for an iPad banner ad
 */
@property (nonatomic) NSString *bannerAdTabletImageUrl;

/**
 A link that the banner ads can redirect to
 */
@property (nonatomic) NSString *bannerAdUrl;

/**
 Data the tour was last updated
 */
@property (nonatomic) NSDate	*updatedAt;

/**
 Dictionary of `GeLoBeaconInfos` associated with the tour
 */
@property (nonatomic, readonly) NSDictionary	*beaconInfo;

/**
 identifier of the site which the tour belongs to
 */
@property (nonatomic) NSNumber *siteId;

+ (id)tourFromJson:(NSDictionary *)dictionary;
- (id)initWithJson:(NSDictionary *)dictionary;

+ (id)tourFromFile:(NSString *)path;
- (id)initWithFile:(NSString *)path;

- (BOOL)updateNeeded:(NSDate *)updatedAt;

- (BOOL)containsBeaconId:(NSInteger)beaconId;


# pragma mark - GeLoMediaDownloading

@property (nonatomic) NSNumber *percentageOfMediaDownloadsComplete;
- (BOOL) mediaDownloadsAreComplete;

@end