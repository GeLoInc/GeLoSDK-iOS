//
//  GeLoBeaconNotification.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 9/23/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoNotification.h"

@interface GeLoBeaconNotification : GeLoNotification <NSCoding>

@property (nonatomic) NSArray *beaconIds;

@end
