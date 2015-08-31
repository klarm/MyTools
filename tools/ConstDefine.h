//
//  ConstDefine.h
//  tools
//
//  Created by xionghao on 15/7/16.
//  Copyright (c) 2015年 klarm. All rights reserved.
//

#ifndef tools_ConstDefine_h
#define tools_ConstDefine_h
#define BLog(formatString, ...) NSLog((@"%s " formatString), __PRETTY_FUNCTION__, ##__VA_ARGS__);
#endif

#ifdef DEBUG
#    define DLog(...) NSLog(__VA_ARGS__)
#else
#    define DLog(...) /* */
#endif
#define ALog(...) NSLog(__VA_ARGS__)
