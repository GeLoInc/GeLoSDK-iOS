//
//  GeLoSite.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/30/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoMediaDownloading.h"

/**
 `GeLoSite` is a data model representing a site from the CMS
 */
@interface GeLoSite : NSObject <GeLoMediaDownloading>

/**
 identifier for the site
 */
@property (nonatomic) NSNumber *siteId;

/**
 name of the site
 */
@property (nonatomic) NSString *name;

/**
 URL for a logo for the site
 */
@property (nonatomic) NSString *logo;

/**
 background image for the site
 */
@property (nonatomic) NSString *background;

/**
 date the site was last updated
 */
@property (nonatomic) NSDate   *updatedAt;

/**
 description of the site
 */
@property (nonatomic) NSString *description;

+ (id)siteFromJson:(NSDictionary *)dictionary;
- (id)initWithJson:(NSDictionary *)dictionary;

+ (id)siteFromFile:(NSString *)path;
- (id)initWithFile:(NSString *)path;

- (BOOL)updateNeeded:(NSDate *)updatedAt;


# pragma mark - GeLoMediaDownloading

@property (nonatomic, copy) NSNumber *percentageOfMediaDownloadsComplete;
- (BOOL) mediaDownloadsAreComplete;

@end
