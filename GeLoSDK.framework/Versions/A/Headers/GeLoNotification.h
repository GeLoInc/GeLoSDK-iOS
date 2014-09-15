//
//  GeLoNotification.h
//  GeLoSDK
//
//  Created by Thomas Peterson on 7/31/14.
//  Copyright (c) 2014 Collective Idea. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeLoNotification : NSObject

@property (nonatomic) NSNumber *notificationId;
@property (nonatomic) NSString *type;
@property (nonatomic) NSString *description;
@property (nonatomic) NSDate *fireDate;
@property (nonatomic) NSNumber *fireDelay;
@property (nonatomic) NSDictionary *userInfo;
@property (nonatomic) NSCalendarUnit interval;
@property (nonatomic) BOOL displayInForeground;

- (id)initWithNotificationJSON:(NSDictionary *)json;

@end