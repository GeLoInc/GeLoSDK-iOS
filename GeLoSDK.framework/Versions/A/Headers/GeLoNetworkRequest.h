//
//  GeLoNetworkRequest.h
//  GeLoSDK
//
//  Created by Tim Bugai on 6/26/13.
//  Copyright (c) 2013 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Called on the completion of a network request
 @returns the requested NSData
 */
typedef void(^NetworkRequestCallback)(NSData *);

/**
 Called on network request error
 @returns the error
 */
typedef void(^NetworkRequestErrorCallback)(NSError *);

@interface GeLoNetworkRequest : NSObject<NSURLConnectionDataDelegate>

+ (instancetype)requestWithToken:(NSString *)token platformPath:(NSString *)path callback:(void(^)(NSData *))callback error:(void(^)(NSError *))error;
+ (instancetype)requestWithExternalUrl:(NSURL *)url callback:(void(^)(NSData *))callback error:(void(^)(NSError *))error;

@property (nonatomic, copy) NetworkRequestCallback callback;
@property (nonatomic, copy)	NetworkRequestErrorCallback error;

@end
