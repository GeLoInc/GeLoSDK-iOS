#Using the GeLoSDK

##Notifications
The GeLoSDK uses the iOS notification center to alert you to updates and events.  

- **kGeLoBeaconFound** - Sent when a beacon that is not already known is discovered.  The _userInfo_ parameter of the notification will contain an instance of the new beacon under the _beacon_ key. 

- **kGeLoBeaconExpired** - Sent when a beacons' "time to live" has expired.

- **kGeLoBeaconAgedGracefully** - Sent for every second that a beacon has been known without being discovered again.

- **kGeLoNearestBeaconChanged** - Sent when a beacon has been discovered that has a stronger signal strength then any of the other known beacons.  The _userInfo_ parameter of the notification will contain an instance of the nearest beacon under the _beacon_ key.

- **kGeLoNearestBeaconExpired** - Sent when the nearest beacons' "time to live" has expired.

- **kGeLoSiteLoaded** - Sent when the requested site has been loaded from the remote source.  The _userInfo_ parameter of the notification will contain an instance of the site under the _site_ key.

- **kGeLoCacheSitesLoaded** - Sent when a list of sites has been obtained from the remote source by the caching system.  The _userInfo_ parameter of the notification will contain an array of GeLoSite objects under the _sites_ key.

- **kGeLoCacheSiteLoaded** - Sent when a site has been loaded from the caching system.  The _userInfo_ parameter of the notification will contain an instance of the GeLoSite under the _site_ key.
 
- **kGeLoCacheSiteUpdated** - Sent when a site has been updated from the remote source.  The _userInfo_ parameter of the notification will contain an instance of the updated GeLoSite under the _site_ key.

##Classes

###GeLoBeaconManager

The GeLoBeaconManager is a singleton and should be accessed through its **sharedInstance** class method.
  	
	[GeLoBeaconManager sharedInstance];
		

#####- (void)startScanningForBeacons
Used to start the beacon manager scanning for GeLo Beacons in the area.  Beacons that are discovered are reported through the **kGeLoBeaconFound** notification.

	[[GeLoBeaconManager sharedInstance] startScanningForBeacons];

#####- (void)stopScanningForBeacons
Used to stop the beacon manager from scanning for more GeLo Beacons.

	[[GeLoBeaconManager sharedInstance] stopScanningForBeacons];

#####- (BOOL)isScanning
Returns a boolean to indicate whether or not the beacon manager is actively scanning for more beacons.

	BOOL value = [[GeLoBeaconManager sharedInstance] isScanning];

#####- (NSArray *)knownSites
Returns an array of all the sites the beacon manager knows about.

	NSArray *sites = [[GeLoBeaconManager sharedInstance] knownSites];

#####- (GeLoSite *)currentSite
Returns the instance of the site that the beacon manager is currently using while scanning for beacons.
	
	GeLoSite *site = [[GeLoBeaconManager sharedInstance] currentSite];

#####- (NSArray *)knownBeacons
Returns an array of all the beacons that are in the current area that the beacon manager knows about.

	NSArray *beacons = [[GeLoBeaconManager sharedInstance] knownBeacons];

#####- (GeLoBeacon *)nearestBeacon
Returns the instance of the beacon that is closest to the device.

	GeLoBeacon *nearest = [[GeLoBeaconManager sharedInstance] nearestBeacon];

		
###GeLoSite
Instance variables:

- id
- name
- map
- updatedAt
- beaconInfo

#####+ (id)siteFromJson:(NSDictionary *)json
Class method to create a GeLoSite instance from a json blob.

	[GeLoSite siteFromJson:jsonData];
	
#####+ (id)siteFromFile:(NSString *)filePath
Class method to create a GeLoSite instance from file.

	[GeLoSite siteFromFile:@"/path/to/file"];
	
#####- (id)initWithJson:(NSDictionary *)json
Instance method to create a GeLoSite instance from a json blob.

	[instance initWithJson:jsonData];
	
#####- (id)initWithFile:(NSString *)filePath
Instance method to create a GeLoSite instance from file.

	[instance initWithFile:@"/path/to/file"];

###GeLoBeacon
Instance variables:

- beaconId
- signalStrength
- timeToLive
- signalCount
- info

######+ (id)beaconWithData:(NSData *)data signalStrength:(NSInteger)strength timeToLive:(NSUInteger)ttl
Class method to create a new GeLoBeacon instance from a data blob, signal strength, and time to live.

	[GeLoBeacon beaconWithData:data signalStrength:-90 timeToLive:15];
	
######- (id)initWithId:(NSUInteger)_id signalStrength:(NSInteger)strength timeToLive:(NSUInteger)ttl
Initialize a new GeLoBeacon instance with its id, signal strength, and time to live.

	[instance initWithId:42 signalStrength:-90 timeToLive:15];

######- (id)initWithId:(NSUInteger)_id signalStrengths:(NSArray *)strengths timeToLive:(NSUInteger)ttl
Initialize a new GeLoBeacon instance with id and time to live.  The array of signal strengths are used to prepopulate the beacons signal cache.

	[instance initWithId:42 signalStrength:@[@-90] timeToLive:15];
	
######- (id)initWithData:(NSData *)data signalStrength:(NSInteger)strength timeToLive:(NSUInteger)ttl
Initialize a new GeLoBeacon instance from a data blob, signal strength, and time to live.

	[instance initWithData:data signalStrength:-90 timeToLive:15];
	
#####- (void)addSignalStrength:(NSNumber *)signalStrength
Adds a signal strength to the beacon.  5 signal strengths are used to find an average.  This average signal strength is used to determine the nearest beacon.

	[instance addSignalStrength:@-85];

#####- (void)resetTimeToLive:(NSUInteger)ttl
Resets the time to live on the GeLoBeacon instance

	[instance resetTimeToLive:15];

###GeLoBeaconInfo
Instance variables:

- remoteId
- updatedAt
- beaconId
- name
- description
- signalFalloff
- images
- mapUrl

#####+ (id)beaconInfoFromJson:(NSDictionary *)dictionary
Class method to create a GeLoBeaconInfo instance from a json blob

	[GeLoBeaconInfo beaconInfoFromJson:jsonData];
	
#####- (id)initWithJson:(NSDictionary *)dictionary
Instance method to create a GeLoBeaconInfo instance from a json blob

	[instance initWithJson:jsonData];

###GeLoCache

The GeLoCache is a singleton and should be accessed through its **sharedCache** class method.
		
	[GeLoCache sharedCache];
		
#####- (NSArray *)loadSites
To get an array of the sites that are in the cache, call **loadSites**.  It will attempt to pull more sites from the remote source if the user has an internet connection.

	[[GeLoCache sharedCache] loadSites];

#####- (GeLoSite *)loadSite:(NSNumber *)siteId		
To load a site from the cache, call the **loadSite** with the site id as its only parameter.  If the site isn't in the cache, it will be retreived from the remote source and cached for future use.  Updates are checked for if a network connection is available.
		
	[[GeLoCache sharedCache] loadSite:@52];
		
#####- (UIImage *)loadImage:(NSString *)url
The SDK provides an image cache to go along with the sites.  Call **loadImage** with the url of the desired image.  It will load it from cache if possible, falling back to loading it from a remote source.  If it did have to load from a remote source, it will cache the new image for future use.

	[[GeLoCache shareCache] loadImage:@"logo.png"];
	
#####- (void)clearCache
If you need to clear the cache for any reason, you may do so by calling **clearCache**.

	[[GeLoCache sharedCache] clearCache];


###Simple Example
	- (void)viewWillAppear:(BOOL)animated {
		GeLoBeaconManager *mgr = [GeLoBeaconManager sharedInstance];
		
		[[NSNotificationCenter defaultCenter] addObserver:self name:kGeLoBeaconFound selector:@selector(foundBeacon:) object:nil];
		[mgr startScanningForBeacons];
	}
	
	- (void)viewWillDisappear:(BOOL)animated {
		[[NSNotificationCenter defaultCenter] removeObserver:self name:kGeLoBeaconFound object:nil];
	}
	
	- (void)foundBeacon:(NSNotification *)sender {
		// do something with the discovered beacon here
	}
