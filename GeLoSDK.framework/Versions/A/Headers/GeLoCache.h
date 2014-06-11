#import <UIKit/UIKit.h>
#import "GeLoSiteLoader.h"
#import "GeLoMediaQueueItem.h"

@class GeLoTour;

/**
`GeLoCache` stores and serves content from the GeLo CMS.
 
Example:
 
    -(void)viewDidLoad {
 
        [[NSNotificationCenter defaultCenter] addObserver:self
                                                 selector:@selector(toursLoaded:)
                                                     name:kGeLoCacheToursLoaded
                                                   object:nil];
 
        tours = [[GeLoCache sharedCache] loadTours]; //since the tours have not loaded yet, the return will be nil
    }
 
    -(void) toursLoaded {
        tours = [[GeLoCache sharedCache] loadTours];
    }
 
While `GeLoCache` can emit the following notifications:
 
 - `kGeLoCacheToursLoaded`
 - `kGeLoCacheBeaconListLoaded`
 - `kGeLoCacheTourLoaded`
 - `kGeLoCacheTourUpdated`
 - `kGeLoCacheSiteLoaded`
 - `kGeLoCacheSiteUpdated`
 - `kGeLoBeaconImageLoaded`
 - `kGeLoBeaconMediaLoaded`
*/

@interface GeLoCache : NSObject 

+ (GeLoCache *)sharedCache;

/**
 Path on the device where cache data is stored
 */
+ (NSString *)cacheDirectory;

/**
Clears the cache
 */
- (void)clearCache;

///---------------------
///@name Loading Content
///---------------------
/**
 Fetches and caches a list of available tours.
 
 @return array of tours if tours are cached, otherwise `nil`
 */
- (NSArray *)loadTours;

/**
 Fetches and caches a single tour.
 
 @param tourId id of a GeLoTour
 @returns a `GeLoTour` if the tour is cached, otherwise `nil`
 */
- (GeLoTour *)loadTour:(NSNumber *)tourId;

/**
 Fetches and caches a list of available sites.
 
 @return array of sites if sites are cached, otherwise `nil`
 */
- (NSArray *)loadSites;

/**
 Fetches and caches a single `GeLoSite`.
 
 @param siteId id of a `GeLoSite`
 @returns a `GeLoSite` if the site is cached, otherwise `nil`
 */
- (GeLoSite *)loadSite:(NSNumber *)siteId;

/**
 Fetches and caches a single image belonging to a GeLoBeacon
 
 @param imageUrl url for an image from the GeLo CMS
 @returns the image if it is cached, otherwise `nil`
 */
- (UIImage *)loadImage:(NSString *)imageUrl;

/**
 Fetches and caches a single audio belonging to a GeLoBeacon
 
 @param audioUrl url for an audio from the GeLo CMS
 @returns the audio data if it is cached, otherwise `nil`
 */
- (NSData *)loadAudio:(NSString *)audioUrl;

/**
 Fetches and caches a list of `GeLoBeacons`
 
 @returns dictionary of beacons if it is cached, otherwise `nil`
 */
- (NSDictionary *)loadBeaconList;

/**
 Fetches and returns the siteId for the given beaconId

 @param beaconId The id for the given beacon.
 @returns NSInteger siteId
 */
- (NSInteger) siteForBeaconId:(NSInteger) beaconId;

@property (nonatomic) NSNotificationCenter *notificationCenter;

@end