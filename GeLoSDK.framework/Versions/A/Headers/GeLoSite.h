//
//  GeLoSite.h
//  GeLoSDK
//
//  Created by Tim Bugai on 5/22/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoSite : NSObject

@property (nonatomic) NSNumber			*id;
@property (nonatomic) NSString			*name;
@property (nonatomic) NSString			*map;
@property (nonatomic) NSDate				*updatedAt;
@property (nonatomic, readonly) NSDictionary	*beaconInfo;

+ (id)siteFromJson:(NSDictionary *)dictionary;
- (id)initWithJson:(NSDictionary *)dictionary;

+ (id)siteFromFile:(NSString *)path;
- (id)initWithFile:(NSString *)path;

- (BOOL)updateNeeded:(NSDate *)updatedAt;

@end
