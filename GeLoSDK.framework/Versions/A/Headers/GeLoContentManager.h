//
//  GeLoSiteMediaBuilder.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 3/13/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoCacheManager.h"
#import "GeLoMediaQueue.h"
#import "GeLoSite.h"
#import "GeLoTour.h"

@interface GeLoContentManager : NSObject

- (id)initWithMediaQueue:(GeLoMediaQueue *)mediaQueue cache:(GeLoCacheManager *)cache;
- (void)loadSiteMedia:(GeLoSite *)site;
- (void)loadTourMedia:(GeLoTour *)tour;

@end
