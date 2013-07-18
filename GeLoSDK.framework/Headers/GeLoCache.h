//
//  GeLoCache.h
//  GeLoSDK
//
//  Created by Tim Bugai on 5/23/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//


#import <UIKit/UIKit.h>

FOUNDATION_EXPORT NSString *const kGeLoCacheSitesLoaded;
FOUNDATION_EXPORT NSString *const kGeLoCacheSiteLoaded;
FOUNDATION_EXPORT NSString *const kGeLoCacheSiteUpdated;

@class GeLoSite;

@interface GeLoCache : NSObject {
	NSMutableDictionary		*imageCache;
	NSMutableDictionary		*siteCache;
}

@property (nonatomic) NSNotificationCenter *notificationCenter;

+ (id)sharedCache;
+ (NSString *)cacheDirectory;

- (void)clearCache;

- (NSArray *)loadSites;
- (GeLoSite *)loadSite:(NSNumber *)siteId;
- (UIImage *)loadImage:(NSString *)imageUrl;

@end
