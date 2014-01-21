//
//  GeLoSoftwareBeacon.h
//  GeLoSoftwareBeacon
//
//  Created by Zach Dennis on 11/7/13.
//  Copyright (c) 2013 Zach Dennis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

/** GeLoSoftwareBeacon represents a virtual software beacon. It is the
 software equivalent to a GeLo hardware beacon.

 It is intended to allow developers to learn and develop against the GeLo
 platform when they don't have GeLo hardware beacons nearby.

 Due to the restrictions that Apple imposes on the advertising data that
 you can send from an iOS device acting as a peripheral the GeLoSoftwareBeacon
 works slightly differently than a hardware beacon although from the perspective
 of the GeLoSDK it's indistinguishable that there's a difference.
 */
@interface GeLoSoftwareBeacon : NSObject

+ (GeLoSoftwareBeacon *) withServiceUUID: (NSString *) serviceUUID andCharacteristicUUID: (NSString *) characteristicUUID andBeaconId: (NSUInteger) beaconId;

- (GeLoSoftwareBeacon *) initWithServiceUUID: (CBUUID *) serviceUUID andCharacteristicUUID: (CBUUID *) characteristicUUID andBeaconId: (NSUInteger) beaconId;

@property (readonly) NSUInteger beaconId;
@property (readonly) CBUUID *serviceUUID;
@property (readonly) CBUUID *characteristicUUID;
@property (nonatomic, copy, readonly) NSString *name;

- (NSData *) advertisementDataForCentral;

@end
