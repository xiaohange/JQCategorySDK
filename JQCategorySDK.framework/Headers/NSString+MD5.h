//
//  NSString+MD5.h
//  HanJunqiang
//
//  Created by HaRi on 16/7/3.
//  Copyright © 2016年 HanJunqiang. All rights reserved. iOS开发QQ群：446310206
//

#import <Foundation/Foundation.h>

@interface NSString (MD5)

+(NSString* )convertToMD5:(NSString* )conStr;


/**
 *  SHA1 加密
 *
 *  @return <#return value description#>
 */
- (NSString *)sha1;
@end
