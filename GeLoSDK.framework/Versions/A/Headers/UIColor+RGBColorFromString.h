//
//  UIColor+RGBColorFromString.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 2/10/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (RGBColorFromString)

+ (UIColor *) RGBColorFromString: (NSString *) hexString;

@end
