# Adsforce SDK iOS Integration Document

## Project Configuration

Add `-ObjC` into `TARGETS` → `Build Setting` → `Linking` → `Other Linker Flags` .

## Init SDK

### Init

```objective-c
// Setting parameters
NSString *devKey = @"your devKey";
NSString *publicKey = @"your publicKey";
NSString *trackUrl = @"your trackUrl";
NSString *channelId = @"your channelId";
NSString *appid = @"your appid";

// init SDK
[AdsforceSDK initWithDevKey:devKey publicKey:publicKey trackUrl:trackUrl channelId:channelId appId:appid];
```

About the parameters of `devKey`、`publicKey`、`trackUrl`、`channelId`、`appid`,  please apply for them from the website.

### Initialization Time

The time to initialize SDK should be set in a relative earlier position. Such as in `AppDelegate`’s ` (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions`

## DeepLink

After initialization, relevant information about DeepLink can be fetched asynchronously  through this method.

```objective-c
[AdsforceSDK getDeeplink:^(AdsforceDeeplinkModel *deeplinkModel) {
    NSLog(@"%@",deeplinkModel);
}];
```

`AdsforceDeeplinkModel` includes the following parameters:

- `targetUrl`
- `linkArgs`

## IAP


After initialization, you should use this method to upload IAP information after IAP.

```objective-c
NSString *receiptDataString = @"your receipt data string";
NSNumber *productPrice = [NSNumber numberWithDouble:your price];
NSString *productCurrencyCode = @"your product currency code";
NSString *pubkey = @"your itunes connect pubkey";

[AdsforceSDK appStoreWithProductPrice:productPrice productCurrencyCode:productCurrencyCode receiptDataString:receiptDataString pubkey:pubkey params:nil];

```
Parameters are as follows:

- `receiptDataString` such as `your receipt data string`
- `productPrice` such as `6.00`
- `productCurrencyCode` such as `CNY`
- `pubkey` such as `48a07332496a4bcb9eea4d32e1234582`

## Third Pay

After initializating,  you should use this method to upload IAP information after Third Pay process.

```objective-c
NSNumber *productPrice = [NSNumber numberWithDouble:your price];
NSString *productCurrencyCode = @"your product currency code";
NSString *productIdentifier = @"your product id";
NSString *productCategory = @"your product category";

[AdsforceSDK thirdPayWithProductPrice:productPrice productCurrencyCode:productCurrencyCode productIdentifier:productIdentifier productCategory:productCategory];
```

Parameters are as follows:

- `productPrice` such as `6.00`
- `productCurrencyCode `such as `CNY`
