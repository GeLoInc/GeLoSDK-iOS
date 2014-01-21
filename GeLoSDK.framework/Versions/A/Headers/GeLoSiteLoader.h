//
//  GeLoSiteLoader.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 11/14/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoSite.h"
#import "GeLoTour.h"

@interface GeLoSiteLoader : NSObject

- (id)initWithCache:(NSDictionary *)cache andQueue:(NSMutableArray *)queue;

- (void)loadSite:(GeLoSite *)site;
- (void)loadTour:(GeLoTour *)tour;

@end
