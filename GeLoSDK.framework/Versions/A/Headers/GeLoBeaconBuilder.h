//
//  GeLoBeaconBuilder.h
//  GeLoSDK
//
//  Created by Zach Dennis on 11/12/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoBeacon.h"
#import <CoreBluetooth/CoreBluetooth.h>

@class GeLoCLBeacon;

@interface GeLoBeaconBuilder : NSObject

+ (id) withRequirements:(NSDictionary *) requirements;

- (id) initWithRequirements:(NSDictionary *) requirements;
- (GeLoBeacon *) buildWithConfiguration: (NSDictionary *) configuration;
- (GeLoCLBeacon *) buildWithCLBeaconConfiguration: (NSDictionary *) configuration;

@end
