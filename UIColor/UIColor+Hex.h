//
//  UIColor+Hex.h
//  Additions
//
//  Created by Matthias Bauch on 24.11.10.
//  Copyright 2010 Matthias Bauch. All rights reserved.
//

#import <Foundation/Foundation.h>
#define HEXCOLOR(hexString) [UIColor colorWithHexString:(hexString)]

@interface UIColor (Hex)

+ (UIColor *)colorWithHex:(UInt32)col;
+ (UIColor *)colorWithHexString:(NSString *)str;

@end