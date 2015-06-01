//
//  HKDeeplink+Private.h
//  Hoko
//
//  Created by Hoko, S.A. on 23/07/14.
//  Copyright (c) 2015 Hoko, S.A. All rights reserved.
//

#import "HKDeeplink.h"

extern NSString *const HKDeeplinkSmartlinkIdentifierKey;

@interface HKDeeplink (Private)

+ (HKDeeplink *)deeplinkWithURLScheme:(NSString *)urlScheme
                                route:(NSString *)route
                      routeParameters:(NSDictionary *)routeParameters
                      queryParameters:(NSDictionary *)queryParameters
                    sourceApplication:(NSString *)sourceApplication;

- (void)postWithToken:(NSString *)token;

@property (nonatomic, strong, readonly) NSString *urlScheme;
@property (nonatomic, strong, readonly) NSString *sourceApplication;
@property (nonatomic, strong, readonly) id generateSmartlinkJSON;

@property (nonatomic, strong, readonly) NSString *smartlinkIdentifier;

@property (nonatomic, readonly) BOOL isSmartlink;
@property (nonatomic, readonly) BOOL hasURLs;

@end