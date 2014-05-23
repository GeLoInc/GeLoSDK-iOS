//
//  GeLoTour.h
//  GeLoSDK
//
//  Created by Tim Bugai on 5/22/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoMediaDownloading.h"
#import <UIKit/UIKit.h>

/**
 `GeLoTour` is a data model that represents tour information from the CMS
 */
@interface GeLoTour : NSObject <GeLoMediaDownloading>

/**
 The identifier assigned by the platform.
 */
@property (nonatomic) NSNumber *tourId;


@property (nonatomic) NSNumber *siteId;
/**
 The name of the tour.
 */
@property (nonatomic) NSString *name;

/**
 An image associated with the tour.
 */
@property (nonatomic) NSString *imageURL;

/**
 The color used by Spaces for bar background color.
 */
@property (nonatomic) UIColor *barColor;

/**
 The text color for the tour.
 */
@property (nonatomic) UIColor *textColor;

/**
 The color for section text.
 */
@property (nonatomic) UIColor *sectionTextColor;

/**
 An array of beacon infos associated with the tour.
 */
@property (nonatomic) NSMutableDictionary *beaconInfos;

/**
 The last time that the tour was updated.
 */
@property (nonatomic) NSDate   *updatedAt;

- (id)initWithTourJSON:(NSDictionary *)json;
- (id)initWithPartialTourJSON:(NSDictionary *)tour;
- (void)withAdditionalJSON:(NSDictionary *)JSON;
- (BOOL)containsBeaconId:(NSInteger)beaconId;
- (BOOL)updateNeeded:(NSDate *)updatedAt;

# pragma mark - GeLoMediaDownloading

//@property (nonatomic) NSNumber *percentageOfMediaDownloadsComplete;
//- (BOOL) mediaDownloadsAreComplete;

@end