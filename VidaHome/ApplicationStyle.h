//
//  ApplicationStyle.h
//  Vida
//
//  Created by Wenqi Zhou on 2014-10-28.
//  Copyright (c) 2014 Vida. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ApplicationStyle : NSObject

+(void)initializeApplicationStyle;

@end

@interface ApplicationStyle (String)

+(NSString *)baseURLString;

@end

@interface ApplicationStyle (Sizes)

+ (CGFloat)extraLargeTextSize;
+ (CGFloat)largeTextSize;
+ (CGFloat)mediumTextSize;
+ (CGFloat)regularTextSize;
+ (CGFloat)smallTextSize;

+ (CGFloat)sidebarWidth;

+ (CGFloat)buttonSpaceInset;
+ (CGFloat)buttonWidth;
+ (CGFloat)buttonHeight;

@end

@interface ApplicationStyle (Colors)

+ (UIColor *)backgroundColor;

@end

@interface ApplicationStyle (NavigationBar)

+ (UIColor *)navigationBarBackgroundColor;
+ (UIColor *)navigationBarTitleColor;
+ (UIFont *)navigationBarTitleFont;
+ (UIFont *)navigationBarRightButtonFont;
+ (UIColor *)navigationBarButtonDisabledColor;
+(void)customizeLeftButton:(UIViewController *)target hander:(SEL) handler withImage: (UIImage *)image;

@end