//
//  GeLoNotification.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 7/31/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoNotification : NSObject <NSCoding>

@property (nonatomic) NSNumber *notificationId;
@property (nonatomic) NSString *body;
@property (nonatomic) NSString *type;

- (id)initWithNotificationJSON:(NSDictionary *)json;
- (id)initWithCoder:(NSCoder *)decoder;
- (void)encodeWithCoder:(NSCoder *)encoder;

@end