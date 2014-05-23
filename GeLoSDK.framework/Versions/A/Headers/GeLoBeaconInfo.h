#import <Foundation/Foundation.h>


/**
 `GeLoBeaconInfo is a data model that represents CMS information associated with a beacon
 */
@interface GeLoBeaconInfo : NSObject

/**
 Identifier for the beacon from the GeLo CMS
 */
@property (nonatomic) NSNumber *remoteId;

/**
 Date the beacon content was last updated
 */
@property (nonatomic) NSDate   *updatedAt;

/**
 Actual identifer for the beacon, e.g. the id printed on the back of the physical beacon
 */
@property (nonatomic) NSNumber *beaconId;

/**
 Display name of the beacon
 */
@property (nonatomic) NSString *name;

/**
 Signal falloff for the beacon
 */
@property (nonatomic) NSNumber *signalFalloff;

/**
 Image content associated with a beacon
 */
@property (nonatomic) NSArray  *mediaURLs;

/**
 URL for a tour map of this beacon within a tour
 */
@property (nonatomic) NSString *mapUrl;

/**
 URL for an iPhone banner image associated with a beacon
 */
@property (nonatomic) NSString *bannerAdPhoneImage;

/**
 URL for an iPad banner image associated with a beacon.
 */
@property (nonatomic) NSString *bannerAdTabletImage;

/**
 URL that is associated with the banner ad images.
 */
@property (nonatomic) NSString *bannerAdUrl;

/**
 The beacon header.
 */
@property (nonatomic) NSString *descriptionHeader;

/**
 The category that the beacon belongs to.
 */
@property (nonatomic) NSString *category;

/**
 The identifier for the category.
 */
@property (nonatomic) NSNumber *categoryId;
/**
 The beacon type.
 */
@property (nonatomic) NSString *type;

+ (id)beaconInfoFromJson:(NSDictionary *)dictionary;
- (id)initWithJson:(NSDictionary *)dictionary;

@end