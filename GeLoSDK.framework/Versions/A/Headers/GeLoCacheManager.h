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

+ (NSString *)cacheDirectory;
- (void)seedCache;
- (NSString *)getMediaPath:(NSString *)url;
- (NSString *)tableFilepath;
- (NSDictionary *)mediaCacheTable;
- (id)loadCacheObject:(NSString *)key;
- (NSArray *)loadKnownSites;
- (NSArray *)loadKnownTours;
- (void)writeObject:(id)object forKey:(NSString *)key;
- (NSString *)writeMedia:(NSData *)data withURL:(NSString *)url;
- (void)writeJson:(id)beaconEvents withContentType:(NSString *)type;
- (NSArray *)getJsonFromFilesContaining:(NSString *)eventType;
- (void)removeMedia;
- (void)removeFile:(NSString *)filePath withContentType:(NSString *)event;
- (NSArray *)getFilenamesContaining:(NSString *)eventType;
- (NSString *)filePathForContentType:(NSString *)eventType;

@end
