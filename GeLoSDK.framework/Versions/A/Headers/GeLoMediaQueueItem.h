//
//  GeLoMediaQueueItem.h
//  GeLoSDK
//
//  Created by Zach Dennis on 11/14/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoMediaQueueItem : NSObject

- (id) initWithDownloadUrl: (NSString *)url type:(NSString *)type andCallback: (void (^)())callback;

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *downloadUrl;
@property (nonatomic, copy) void (^downloadCallback)();

@end
