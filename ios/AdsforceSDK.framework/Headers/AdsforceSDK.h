//
//  AdsforceSDK.h
//  AdsforceSDK
//
//  Created by liuguojun on 2018/4/12.
//  Copyright © 2018 Adsforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdsforceSDKVersion.h"
#import "AdsforceDeeplinkModel.h"
#import "AdsforceSDKTracker.h"

@interface AdsforceSDK : NSObject

#pragma mark - init

+ (void)initWithDevKey:(NSString *)devKey
             publicKey:(NSString *)publicKey
              trackUrl:(NSString *)trackUrl
             channelId:(NSString *)channelId
                 appId:(NSString *)appId;

#pragma mark - Onelink

+ (void)setOnelinkCallback:(void (^)(NSString *link))completionBlock;

#pragma mark - IAP

+ (void)appStoreWithProductPrice:(NSNumber *)productPrice
             productCurrencyCode:(NSString *)productCurrencyCode
               receiptDataString:(NSString *)receiptDataString
                          pubkey:(NSString *)pubkey
                          params:(NSDictionary <NSString *,NSString *> *)params;

+ (void)thirdZFLogReportWithProductPrice:(NSNumber *)productPrice
                     productCurrencyCode:(NSString *)productCurrencyCode
                       productIdentifier:(NSString *)productIdentifier
                         productCategory:(NSString *)productCategory;

#pragma mark - CustomEvent

+ (void)customEventWithKey:(NSString *)key stringValue:(NSString *)value;

+ (void)customEventWithKey:(NSString *)key arrayValue:(NSArray<NSString *> *)value;

+ (void)customEventWithKey:(NSString *)key dictionaryValue:(NSDictionary<NSString *,NSString *> *)value;

#pragma mark - DnsMappingServers

+ (void)enableDnsMode:(BOOL)enable;

+ (void)setDnsMappingServers:(NSArray <NSString *> *)dnsMappingServers host:(NSString *)host;

#pragma mark - CustomId

+ (void)setCustomId:(NSString *)cuid;

#pragma mark - AutoLog

+ (void)setAutoLogAppEventsEnabled:(BOOL)enabled;

+ (void)setAutoLogIapPublicKey:(NSString *)publicKey;

@end
