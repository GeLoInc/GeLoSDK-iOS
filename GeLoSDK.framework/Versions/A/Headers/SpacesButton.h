//
//  SpacesButton.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 2/7/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpacesDynamicObject.h"

@interface SpacesButton : SpacesDynamicObject

@property (nonatomic) NSInteger objectId;
@property (nonatomic) CGFloat xOrigin;
@property (nonatomic) CGFloat yOrigin;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) UIColor *textColor;
@property (nonatomic) UIColor *backgroundColor;
@property (nonatomic) NSString *text;
@property (nonatomic) NSTextAlignment *alignment;

@end
