//
//  GeLoSoftwareBeaconManager.h
//  GeLoSDK
//
//  Created by Zach Dennis on 12/10/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoSoftwareBeacon.h"

/** GeLoSoftwareBeaconManager is responsible for managing
 software beacons.

 It is responsible for starting and stopping advertising of a software beacon.
 You can only advertise as one software beacon at a time. To switch beacons
 you call setCurrentBeacon.

 The following notifications will be sent to the default NSNotificationCenter
 when GeLoSoftwareBeaconManager detects the state of Bluetooth on the device:

 * kGeLoBTLEPoweredOn
 * kGeLoBTLEUnsupported
 * kGeLoBTLEPoweredOff
 * kGeLoBTLEStateUnknown

 The following notifications will be sent when advertising starts/stops:

 * kGeLoSoftwareBeaconAdvertisingStarted
 * kGeLoSoftwareBeaconAdvertisingStopped

 */
@interface GeLoSoftwareBeaconManager : NSObject <CBPeripheralManagerDelegate>

+ (GeLoSoftwareBeaconManager *) instance;

- (GeLoSoftwareBeacon *) beaconForCBUUID: (CBUUID *) serviceCBUUID;

- (void) startAdvertising;
- (void) stopAdvertising;
- (BOOL) isAdvertising;

@property NSArray *beacons;
@property BOOL btlePoweredOn;
@property (nonatomic, strong) GeLoSoftwareBeacon *currentBeacon;

@end
