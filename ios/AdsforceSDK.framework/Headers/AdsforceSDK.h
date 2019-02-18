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

@interface AdsforceSDK : NSObject

#pragma mark - init

+ (void)initWithDevKey:(NSString *)devKey
             publicKey:(NSString *)publicKey
              trackUrl:(NSString *)trackUrl
             channelId:(NSString *)channelId
                 appId:(NSString *)appId;

#pragma mark - Deeplink

+ (void)getDeeplink:(void (^)(AdsforceDeeplinkModel *deeplinkModel))completionBlock;

#pragma mark - IAP

+ (void)appStoreWithProductPrice:(NSNumber *)productPrice
             productCurrencyCode:(NSString *)productCurrencyCode
               receiptDataString:(NSString *)receiptDataString
                          pubkey:(NSString *)pubkey
                          params:(NSDictionary *)params;

+ (void)thirdPayWithProductPrice:(NSNumber *)productPrice
             productCurrencyCode:(NSString *)productCurrencyCode
               productIdentifier:(NSString *)productIdentifier
                 productCategory:(NSString *)productCategory;

#pragma mark - CustomEvent

+ (void)enableCustomerEvent:(BOOL)enable;

+ (void)customEventWithKey:(NSString *)key stringValue:(NSString *)value;

+ (void)customEventWithKey:(NSString *)key arrayValue:(NSArray<NSString *> *)value;

+ (void)customEventWithKey:(NSString *)key dictionaryValue:(NSDictionary<NSString *,NSString *> *)value;

#pragma mark - DnsMappingServers

+ (void)enableDnsMode:(BOOL)enable;

+ (void)setDnsMappingServers:(NSArray <NSString *> *)dnsMappingServers host:(NSString *)host;

@end
