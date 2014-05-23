//
//  GeLoCacheManager.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 3/13/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoSite.h"

@interface GeLoCacheManager : NSObject

- (NSString *)getMediaPath:(NSString *)url;
- (NSArray *)loadKnownSites;
- (NSArray *)loadKnownTours;
- (NSString *)cacheFile;
- (NSDictionary *)getMediaCache;
- (id)loadCacheObject:(NSString *)key;
- (void)seedCache;
- (void)writeObject:(id)object forKey:(NSString *)key;
- (NSString *)writeMedia:(NSData *)data withURL:(NSString *)url;
- (void)removeUnusedMedia:(NSArray *)usedMedia;

@end
