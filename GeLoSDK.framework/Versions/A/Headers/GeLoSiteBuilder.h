//
//  siteBuilder.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 1/27/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoSite.h"
#import "GeLoTour.h"
#import "GeLoSection.h"

@interface GeLoSiteBuilder : NSObject

+ (GeLoSite *)buildSiteFromCache:(NSDictionary *)cache;

@end
