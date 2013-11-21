//
//  GeLoTour.h
//  GeLoSDK
//
//  Created by Tim Bugai on 5/22/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 `GeLoTour` is a data model that represents tour information from the CMS
 */
@interface GeLoTour : NSObject  {
    NSInteger recoveredMedia;
}

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

@property (nonatomic) NSString *bannerAdPhoneUrl;
@property (nonatomic) NSString *bannerAdTabletUrl;
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
- (void)addRecoveredMedia:(NSInteger)count;

/**
 Number of content items (images and audios) associated with the tour
 */
- (NSInteger)mediaCount;

/**
 Number of content items (images and audios) that need to be downloaded after the application fails to download them the first time
 */
- (NSInteger)recoveredMediaCount;

@end