//
//  TSZip.h
//  ThisService
//
//  Created by Jesper on 2007-04-23.
//  Copyright 2007-2012 waffle software. All rights reserved.
//  BSD licensed - see license.txt for more information.
//

#import <Cocoa/Cocoa.h>


@interface TSZip : NSObject
+ (NSData *)zip:(id)raw;
@end
