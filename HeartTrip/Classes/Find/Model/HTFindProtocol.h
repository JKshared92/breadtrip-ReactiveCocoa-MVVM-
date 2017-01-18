//
//  HTFindProtocol.h
//  HeartTrip
//
//  Created by 熊彬 on 16/11/30.
//  Copyright © 2016年 BinBear. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HTFindProtocol <NSObject>

@optional
// 加载发现数据
- (RACSignal *)requestFindDataSignal:(NSString *)requestUrl;

// 加载发现更多数据
- (RACSignal *)requestFindMoreDataSignal:(NSString *)requestUrl;

// 加载探索视频数据
- (RACSignal *)requestExploreVideosDataSignal:(NSString *)requestUrl;

// 加载探索视频更多数据
- (RACSignal *)requestExploreVideosMoreDataSignal:(NSString *)requestUrl;

@end
