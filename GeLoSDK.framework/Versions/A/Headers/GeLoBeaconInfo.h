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
 Main body of content for the beacon
 */
@property (nonatomic) NSString *description;

/**
 Signal falloff for the beacon
 */
@property (nonatomic) NSNumber *signalFalloff;

/**
 Image content associated with a beacon
 */
@property (nonatomic) NSArray  *images;

/**
 Audio content associated with a beacon
 */
@property (nonatomic) NSArray *audios;

/**
 URL for a tour map of this beacon within a tour
 */
@property (nonatomic) NSString *mapUrl;


@property (nonatomic) NSString *bannerAdPhoneUrl;
@property (nonatomic) NSString *bannerAdTabletUrl;
@property (nonatomic) NSString *bannerAdUrl;

+ (id)beaconInfoFromJson:(NSDictionary *)dictionary;
- (id)initWithJson:(NSDictionary *)dictionary;

@end