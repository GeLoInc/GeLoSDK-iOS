//
//  GeLoSection.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 1/20/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SpacesDynamicObject.h"
#import "SpacesView.h"
#import "SpacesTextView.h"
#import "SpacesImageView.h"
#import "SpacesLabel.h"
#import "SpacesButton.h"

/**
 `GeLoSection` is a data model that represents section information from the CMS
 */
@interface GeLoSection : NSObject

- (id)initWithJSON:(NSDictionary *)dict;
- (id)initWithUpdatedJSON:(NSDictionary *)dict;

/**
 The type of the section.
 */
@property (nonatomic) NSString *type;

/**
 The title for the section.
 */
@property (nonatomic) NSString *title;

/**
 The background color the section.
 */
@property (nonatomic) UIColor  *backgroundColor;

/**
 The text color for the section.
 */
@property (nonatomic) UIColor  *fontColor;

/**
 The alignment for the text.
 */
@property (nonatomic) UIControlContentHorizontalAlignment alignment;

/**
 The background image for the section.
 */
@property (nonatomic) NSString *backgroundImageURL;

/**
 Unused.
 */
@property (nonatomic) NSArray  *dynamicObjects;

/**
 The tour id for tour type secitons.
 */
@property (nonatomic) NSInteger tourId;

/**
 The url for web type sections.
 */
@property (nonatomic) NSString *url;

@end
