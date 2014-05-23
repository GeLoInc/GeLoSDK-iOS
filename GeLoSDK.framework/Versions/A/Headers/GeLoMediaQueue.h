//
//  GeLoMediaQueue.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 3/26/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeLoMediaQueueItem.h"

@protocol GeLoMediaQueueDelegate <NSObject>

- (void)mediaFinishedDownloading;
- (void)mediaFailedToFinishDownloading;
- (void)downloadedMedia:(NSData *)data fromUrl:(NSString *)url;

@end

@interface GeLoMediaQueue : NSObject

@property (nonatomic) id<GeLoMediaQueueDelegate> delegate;

- (NSInteger)count;
- (void)push:(GeLoMediaQueueItem *)item;
- (BOOL)contains:(GeLoMediaQueueItem *)item;
- (BOOL)completed:(GeLoMediaQueueItem *)item;
- (void)startDownloadingMedia;
- (void)stopDownloadingMedia;
- (BOOL)isActive;

@end
