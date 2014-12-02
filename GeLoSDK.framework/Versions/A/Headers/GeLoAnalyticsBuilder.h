//
//  GeLoAnalyticsBuilder.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 8/15/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoAnalyticsBuilder : NSObject

+ (NSDictionary *)eventsJSON:(NSDictionary *)events;

@end
