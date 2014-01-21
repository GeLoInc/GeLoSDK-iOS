//
//  GeLoMediaDownloading.h
//  GeLoSDK
//
//  Created by Zach Dennis on 11/15/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
/**
 A protocol that describes the current progress of media downloads.
 */
@protocol GeLoMediaDownloading <NSObject>

/**
 Number of content items (images and audios) associated with this object.
 */
- (NSInteger)mediaCount;

/**
 Sets the percentage of media assets that have been downloaded.
 @param number the percentage value
 */
- (void) setPercentageOfMediaDownloadsComplete: (NSNumber *) number;

/**
 @returns the percentage of media assets that have been downloaded
 */
- (NSNumber *) percentageOfMediaDownloadsComplete;

/**
 @returns TRUE|FALSE depending on if all media downloads are completed.
 */
- (BOOL) mediaDownloadsAreComplete;

@end
