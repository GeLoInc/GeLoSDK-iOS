//
//  GeLoSite.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/30/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GeLoMediaDownloading.h"

/**
 `GeLoSite` is a data model representing a site from the platform
 */
@interface GeLoSite : NSObject <GeLoMediaDownloading>

- (id)initWithSiteJSON:(NSDictionary *)site;
- (BOOL)updateNeeded:(NSDate *)updatedAt;

/**
 The identifier assigned by the platform.
 */
@property (nonatomic) NSNumber *siteId;

/**
 The site name.
 */
@property (nonatomic) NSString *name;

/**
 The remote url for the site logo.
 */
@property (nonatomic) NSString *logoImageURL;

/**
 The remote url for the background image.
 */
@property (nonatomic) NSString *backgroundImageURL;

/**
 The remote url for the splash screen background url.
 */
@property (nonatomic) NSString *splashBackgroundImageURL;

/**
 The description for the site.
 */
@property (nonatomic) NSString *description;

/**
 An array of tours associated with the site.
 */
@property (nonatomic) NSArray  *tours;

/**
 An array of sections associated with the site.
 */
@property (nonatomic) NSArray  *sections;

/**
 The background color for the site.
 */
@property (nonatomic) UIColor  *backgroundColor;

/**
 The last time that the site was update.
 */
@property (nonatomic) NSDate   *updatedAt;

# pragma mark - GeLoMediaDownloading

//@property (nonatomic, copy) NSNumber *percentageOfMediaDownloadsComplete;
//- (BOOL) mediaDownloadsAreComplete;

@end
