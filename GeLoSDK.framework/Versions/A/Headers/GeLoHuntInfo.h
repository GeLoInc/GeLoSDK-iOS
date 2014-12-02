//
//  HuntInfo.h
//  GeLoSpaces
//
//  Created by Thomas Peterson on 2/17/14.
//  Copyright (c) 2014 GeLo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GeLoBeaconInfo.h"

@interface GeLoHuntInfo : GeLoBeaconInfo

@property (nonatomic) NSArray   *answers;
@property (nonatomic) NSString  *question;
@property (nonatomic) NSString  *buttonBackgroundImageURL;
@property (nonatomic) NSString  *buttonDisabledBackgroundImageURL;
@property (nonatomic) NSNumber  *correctAnswer;
@property (nonatomic) NSNumber  *buttonHeight;
@property (nonatomic) UIColor   *buttonColor;
@property (nonatomic) UIColor   *buttonDisabledColor;
@property (nonatomic) UIColor   *buttonTextColor;
@property (nonatomic) UIColor   *buttonDisabledTextColor;

@end
