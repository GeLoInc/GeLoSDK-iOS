//
//  NSDate+ISO_8601.h
//  GeLo
//
//  Created by Tim Bugai on 5/14/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (ISO_8601)

+ (NSDate *)dateFromISO8601:(NSString *)isoString;
+ (NSString *)ISO8601FromDate:(NSDate *)date;
@end
