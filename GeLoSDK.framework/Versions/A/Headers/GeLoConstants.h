//
//  GeLoConstants.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 9/6/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#ifndef GeLoSDK_GeLoConstants_h
#define GeLoSDK_GeLoConstants_h

// Bluetooth LE Notifications
#define kGeLoBTLEUnsupported        @"GeLoBTLEUnsupported"
#define kGeLoBTLEPoweredOff         @"GeLoBTLEPoweredOff"
#define kGeLoBTLEPoweredOn          @"GeLoBTLEPoweredOn"
#define kGeLoBTLEStateUnknown       @"GeLoBTLEStateUnknown"

// Manager Notifications
#define kGeLoBeaconFound            @"GeLoBeaconFound"
#define kGeLoBeaconExpired          @"GeLoBeaconExpired"
#define kGeLoBeaconAgedGracefully   @"GeLoBeaconAgedGracefully"
#define kGeLoNearestBeaconChanged   @"GeLoNearestBeaconChanged"
#define kGeLoNearestBeaconExpired   @"GeLoNearestBeaconExpired"
#define kGeLoScanningPaused         @"GeloscanningPaused"
#define kGeLoScanningResumed        @"GeLoScanningResumed"

// Network Request Notifications
#define kGeLoNetworkRequestAuthenticated  @"GeLoNetworkRequestAuthenticated"
#define kGeLoNetworkRequestStarted        @"GeLoNetworkRequestStarted"
#define kGeLoNetworkRequestFinished       @"GeLoNetworkRequestFinished"
#define kGeLoNetworkRequestErrored        @"GeLoNetworkRequestErrored"

// Sites and Tour Notifications
#define kGeLoTourLoaded             @"GeLoTourLoaded"
#define kGeLoToursLoaded            @"GeLoToursLoaded"
#define kGeLoTourNeedsUpdate        @"GeLoTourNeedsUpdate"
#define kGeLoTourUpToDate           @"GeLoTourUpToDate"
#define kGeLoSiteLoaded             @"GeLoSiteLoaded"
#define kGeLoSitesLoaded            @"GeLoSitesLoaded"
#define kGeLoSiteNeedsUpdate        @"GeLoSiteNeedsUpdate"
#define kGeLoSiteUpToDate           @"GeLoSiteUpToDate"
#define kGeLoMediaLoaded            @"GeLoMediaLoaded"

// Beacon Values
#define	kGeLoBeaconProximityUUID                  @"11E44F09-4EC4-407E-9203-CF57A50FBCE0"
#define kGeLoBeaconIdentifier                     @"com.gelo.ibeacon.region"
#define kGeLoBeaconHardwareCompanyIdentifier      0xC8
#define kGeLoBeaconSignalCeiling                  0
#define kGeLoPacketSize                           10

// Software/VirtualBeacon
#define kGeLoSoftwareBeaconServiceLocalName   @"GeLoSoftwareBeacon"

// Software/VirtualBeacon Notifications
#define kGeLoSoftwareBeaconAdvertisingStarted @"GeLoSoftwareBeacon:advertisingStarted"
#define kGeLoSoftwareBeaconAdvertisingStopped @"GeLoSoftwareBeacon:advertisingStopped"

#endif