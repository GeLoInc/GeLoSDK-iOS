//
//  SpacesDynamicObject.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 2/7/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SpacesDynamicObject : NSObject

@property (nonatomic) NSString *type;

- (id)initWithDictionary:(NSDictionary *)dictionary;
- (NSString *)getType;

@end
