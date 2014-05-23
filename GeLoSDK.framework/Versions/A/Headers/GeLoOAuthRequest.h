//
//  GeLoOAuthRequest.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 5/14/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^OAuthCallback)(NSDictionary *);
typedef void(^OAuthErrorCallback)(NSError *);

@interface GeLoOAuthRequest : NSObject<NSURLConnectionDataDelegate>

- (instancetype)initWithClientId:(NSString *)clientId username:(NSString *)username password:(NSString *)password;
- (void)authenticateWithCallback:(void(^)(NSDictionary *))callback error:(void (^)(NSError *))error;

@property (nonatomic, copy) OAuthCallback callback;
@property (nonatomic, copy) OAuthErrorCallback error;

@end
