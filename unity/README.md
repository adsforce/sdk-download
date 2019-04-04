# Adsforce Unity SDK Integration Documentation

## 1. Overview
Adsforce's SDK provides mobile app installation and event tracking functionality for Android and iOS.

You can track installs and updates and also track post-installs events (including in-app purchases, etc.) to evaluate ROI and user engagement levels.

Mobile apps, that are developed on the Unity platform, can enjoy integrating Adsforce's SDK once and tracking both Android and iOS generated apps. The following guide details how to integrate Adsforce's SDK into your Unity code for your iOS and Android apps.

## 2. Quick Start

### 2.1 Download 'adsforce_unity.unitypackage' file

Set out below are the integration instructions for using Adsforce’s Unity Plugin.

### 2.2 Installing the Plugin
Set out below are the installation instructions for the Adsforce's plugin:

Import the export_adsforce_both.unitypackage into your Unity project.
Go to Assets >> Import Package >> Custom Package
Select export_adsforce_both.unitypackage file.

## 3. SDK Initialization
Please register your application on portal. Then, in your Start / Init methods you set the your_dev_key, your_public_key, your_track_host, your_channel_id and unique app IDs used by iTunes.

```
void Start () {
#if UNITY_IOS && !UNITY_EDITOR
    AdsforceApi.initAdsforceSDK ("<your_dev_key>", "<your_public_key>",
    "<your_track_host>", "<your_channel_id>", "<your_appid>");

#elif UNITY_ANDROID && !UNITY_EDITOR
    AdsforceApi.initAdsforceSDK ("<your_dev_key>","<your_public_key>",
    "<your_track_host>", "<your_channel_id>", "");

#endif
}
```

## 4. Tracking Revenue

### 4.1 About IAP for Android
If the in-app purchase uses the google payment, you can call the following method to report this payment.
```
/**
 * In-app purchase record(Google-certified)
 *
 * @param price          Payment amount, recommended to take from the 'price' field of skudetail, can not be empty
 * @param currency       Payment currency，Payment amount, recommended to take from the 'price_currency_code' field of skudetail, can not be empty
 * @param publicKey      Public key of Google payment，can not be empty
 * @param dataSignature  Signature verification from GP payment, get from Purchase.getSignature()，can not be empty
 * @param purchaseData   Signature verification from GP payment, get from Purchase.getOriginalJson()，can not be empty
 * @param map            Other map, can be empty
 */

 AdsforceApi.googleZFReportWithProductPrice(string price, string currency, string publicKey, string dataSignature, string purchaseData, Dictionary<string, string> map)
```

### 4.2 About IAP for iOS
If the in-app purchase uses the appstore payment, you can call the following method to report this payment.
```
/**
 * In-app purchase record(iOS)
 *
 * @param productPrice          such as 6.00

 * @param productCurrencyCode   such as CNY
 * @param receiptDataString     such as your receipt data string
 * @param pubkey                such as 48a07332496a4bcb9eea4d32e1234582
 * @param map                   Other map, can be empty
 */

AdsforceApi.appStoreWithProductPrice(string productPrice, string productCurrencyCode, string receiptDataString, string pubkey, Dictionary<string, string> map)
```

### 4.3 About IAP for third-party
If the in-app purchase uses the third-party payment, you can call the following method to report this payment.
```
/**
 * In-app purchase record(custom)
 *
 * @param price        Payment amount, recommended to take from the 'price' field of skudetail, can not be empty
 * @param currency     Payment currency，Payment amount, recommended to take from the 'price_currency_code' field of skudetail, can not be empty
 * @param productId    Id of product，recommended to take from the 'productId' field of skudetail，can not be empty
 * @param productType  Type of product，recommended to take from the 'type' field of skudetail，can not be empty
 */

 AdsforceApi.thirdZFReportWithProductPrice(string price, string currency, string productId, string productType)
```

## 5. Tracking In-App Events
You can report the custom events that occur in the application.

If you want to report custom event, you should open the custom event report controller firstly.

> Note: Default custom event report controller is disable.

```java
AdsforceApi.enableCustomerEvent(true);
```

Or maybe you don't need to reprot custom event, you can disable the custom reporter.

```java
AdsforceApi.enableCustomerEvent(false);
```

Depending on the type of the reported parameters, you can select one of the following three methods for reporting.

```
/**
 * Custom event report
 *
 * @param key   Key of event
 * @param value Data for reproting
 */
AdsforceApi.customerEventWithValue(string key, string value);

/**
 * Custom event report
 *
 * @param key  Key of event
 * @param list Use Arraylist for reproting
 */
AdsforceApi.customerEventWithList(string key, List<string> list);

/**
 * Custom event report
 *
 * @param key Key of event
 * @param map Use HashMap for reproting
 */
AdsforceApi.customerEventWithMap(string key, Dictionary<string, string> dic);
```

## 6. Tracking Deep Linking
If you want to know the deeplink information , you can call the following code to get the user's deeplink information after initialization.
```
Action<AdsforceDeepLinkBean> callback = new Action<AdsforceDeepLinkBean> (deeplinkCallback);
AdsforceApi.getDeepLink (callback);
```

## 7. Set AndroidId(only for android)
In order to ensure the accuracy of the data , Please ensure that the privacy of the user will not be revealed and call the following method to pass the AndroidId to us.
```
AdsforceApi.setAndroidId(string AndroidId);

```
