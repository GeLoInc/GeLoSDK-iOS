//
//  DynamicObjectBuilder.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 2/6/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SpacesDynamicObject.h"
#import "SpacesView.h"
#import "SpacesTextView.h"
#import "SpacesImageView.h"
#import "SpacesLabel.h"
#import "SpacesButton.h"

@interface GeLoDOBuilder : NSObject

@property (nonatomic) CGFloat screenWidth;
@property (nonatomic) CGFloat screenHeight;

- (id)buildView:(NSDictionary *)dictionary;

@end
