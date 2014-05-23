//
//  GeLoSiteMediaBuilder.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 3/13/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoMediaQueue.h"
#import "GeLoSite.h"
#import "GeLoTour.h"

@interface GeLoContentManager : NSObject

- (id)initWithMediaQueue:(GeLoMediaQueue *)mediaQueue andKnownMedia:(NSDictionary *)mediaCache;
- (NSArray *)loadSiteMedia:(GeLoSite *)site;
- (void)loadTourMedia:(GeLoTour *)tour;

@end
