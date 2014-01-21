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
#define kGeLoNetworkRequestStarted  @"GeLoNetworkRequestStarted"
#define kGeLoNetworkRequestFinished @"GeLoNetworkRequestFinished"
#define kGeLoNetworkRequestErrored  @"GeLoNetworkRequestErrored"

// Sites and Tour Notifications
#define kGeLoTourLoaded             @"GeLoTourLoaded"
#define kGeLoToursLoaded            @"GeLoToursLoaded"
#define kGeLoSiteLoaded             @"GeLoSiteLoaded"
#define kGeLoSitesLoaded            @"GeLoSitesLoaded"
#define kGeLoCacheToursLoaded       @"GeLoCacheToursLoaded"
#define kGeLoCacheTourLoaded        @"GeLoCacheTourLoaded"
#define kGeLoCacheTourUpdated       @"GeLoCacheTourUpdated"
#define kGeLoCacheSitesLoaded       @"GeLoCacheSitesLoaded"
#define kGeLoCacheSiteLoaded        @"GeLoCacheSiteLoaded"
#define kGeLoCacheSiteUpdated       @"GeLoCacheSiteUpdated"
#define kGeLoBeaconListLoaded       @"GeLoBeaconListLoaded"
#define kGeLoCacheBeaconListLoaded  @"GeLoCacheBeaconListLoaded"
#define kGeLoBeaconImageLoaded      @"GeLoBeaconImageLoaded"
#define kGeLoBeaconAudioLoaded      @"GeLoBeaconAudioLoaded"
#define kGeLoBeaconMediaLoaded      @"GeLoBeaconMediaLoaded"

// Beacon Values
#define kGeLoBeaconHardwareCompanyIdentifier      0xC8
#define kGeLoBeaconSignalCeiling                  -40
#define kGeLoPacketSize                           10

// Software/VirtualBeacon
#define kGeLoSoftwareBeaconServiceLocalName   @"GeLoSoftwareBeacon"

// Software/VirtualBeacon Notifications
#define kGeLoSoftwareBeaconAdvertisingStarted @"GeLoSoftwareBeacon:advertisingStarted"
#define kGeLoSoftwareBeaconAdvertisingStopped @"GeLoSoftwareBeacon:advertisingStopped"

#endif