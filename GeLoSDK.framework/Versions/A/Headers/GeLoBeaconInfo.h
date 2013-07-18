//
//  GeLoBeaconInfo.h
//  GeLoSDK
//
//  Created by Tim Bugai on 5/21/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoBeaconInfo : NSObject

@property (nonatomic) NSNumber *remoteId;
@property (nonatomic) NSDate	 *updatedAt;
@property (nonatomic) NSNumber *beaconId;
@property (nonatomic) NSString *name;
@property (nonatomic) NSString *description;
@property (nonatomic) NSNumber *signalFalloff;
@property (nonatomic) NSArray  *images;
@property (nonatomic) NSString *mapUrl;

+ (id)beaconInfoFromJson:(NSDictionary *)dictionary;
- (id)initWithJson:(NSDictionary *)dictionary;

@end
