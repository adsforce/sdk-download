//
//  AdsforceSDKTracker.h
//  AdsforceSDK
//
//  Created by liuguojun on 2018/6/4.
//  Copyright © 2018 Adsforce. All rights reserved.
//

#import <Foundation/Foundation.h>

// In app event names constants
#define XHEventLevelAchieved            @"xh_level_achieved"
#define XHEventAddPaymentInfo           @"xh_add_payment_info"
#define XHEventAddToCart                @"xh_add_to_cart"
#define XHEventAddToWishlist            @"xh_add_to_wishlist"
#define XHEventCompleteRegistration     @"xh_complete_registration"
#define XHEventTutorial_completion      @"xh_tutorial_completion"
#define XHEventInitiatedCheckout        @"xh_initiated_checkout"
#define XHEventPurchase                 @"xh_purchase"
#define XHEventRate                     @"xh_rate"
#define XHEventSearch                   @"xh_search"
#define XHEventSpentCredits             @"xh_spent_credits"
#define XHEventAchievementUnlocked      @"xh_achievement_unlocked"
#define XHEventContentView              @"xh_content_view"
#define XHEventListView                 @"xh_list_view"
#define XHEventTravelBooking            @"xh_travel_booking"
#define XHEventShare                    @"xh_share"
#define XHEventInvite                   @"xh_invite"
#define XHEventLogin                    @"xh_login"
#define XHEventReEngage                 @"xh_re_engage"
#define XHEventUpdate                   @"xh_update"
#define XHEventOpenedFromPushNotification @"xh_opened_from_push_notification"
#define XHEventLocation                 @"xh_location_coordinates"
#define XHEventCustomerSegment          @"xh_customer_segment"

#define XHEventSubscribe                @"xh_subscribe"
#define XHEventStartTrial               @"xh_start_trial"
#define XHEventAdClick                  @"xh_ad_click"
#define XHEventAdView                   @"xh_ad_view"

// In app event parameter names
#define XHEventParamContent                @"xh_content"
#define XHEventParamAchievenmentId         @"xh_achievement_id"
#define XHEventParamLevel                  @"xh_level"
#define XHEventParamScore                  @"xh_score"
#define XHEventParamSuccess                @"xh_success"
#define XHEventParamPrice                  @"xh_price"
#define XHEventParamContentType            @"xh_content_type"
#define XHEventParamContentId              @"xh_content_id"
#define XHEventParamContentList            @"xh_content_list"
#define XHEventParamCurrency               @"xh_currency"
#define XHEventParamQuantity               @"xh_quantity"
#define XHEventParamRegistrationMethod     @"xh_registration_method"
#define XHEventParamPaymentInfoAvailable   @"xh_payment_info_available"
#define XHEventParamMaxRatingValue         @"xh_max_rating_value"
#define XHEventParamRatingValue            @"xh_rating_value"
#define XHEventParamSearchString           @"xh_search_string"
#define XHEventParamDateA                  @"xh_date_a"
#define XHEventParamDateB                  @"xh_date_b"
#define XHEventParamDestinationA           @"xh_destination_a"
#define XHEventParamDestinationB           @"xh_destination_b"
#define XHEventParamDescription            @"xh_description"
#define XHEventParamClass                  @"xh_class"
#define XHEventParamEventStart             @"xh_event_start"
#define XHEventParamEventEnd               @"xh_event_end"
#define XHEventParamLat                    @"xh_lat"
#define XHEventParamLong                   @"xh_long"
#define XHEventParamCustomerUserId         @"xh_customer_user_id"
#define XHEventParamValidated              @"xh_validated"
#define XHEventParamRevenue                @"xh_revenue"
#define XHEventProjectedParamRevenue       @"xh_projected_revenue"
#define XHEventParamReceiptId              @"xh_receipt_id"
#define XHEventParamTutorialId             @"xh_tutorial_id"
#define XHEventParamAchievenmentId         @"xh_achievement_id"
#define XHEventParamVirtualCurrencyName    @"xh_virtual_currency_name"
#define XHEventParamDeepLink               @"xh_deep_link"
#define XHEventParamOldVersion             @"xh_old_version"
#define XHEventParamNewVersion             @"xh_new_version"
#define XHEventParamReviewText             @"xh_review_text"
#define XHEventParamCouponCode             @"xh_coupon_code"
#define XHEventParamOrderId                @"xh_order_id"
#define XHEventParam1                      @"xh_param_1"
#define XHEventParam2                      @"xh_param_2"
#define XHEventParam3                      @"xh_param_3"
#define XHEventParam4                      @"xh_param_4"
#define XHEventParam5                      @"xh_param_5"
#define XHEventParam6                      @"xh_param_6"
#define XHEventParam7                      @"xh_param_7"
#define XHEventParam8                      @"xh_param_8"
#define XHEventParam9                      @"xh_param_9"
#define XHEventParam10                     @"xh_param_10"

#define XHEventParamDepartingDepartureDate  @"xh_departing_departure_date"
#define XHEventParamReturningDepartureDate  @"xh_returning_departure_date"
#define XHEventParamDestinationList         @"xh_destination_list"  //array of string
#define XHEventParamCity                    @"xh_city"
#define XHEventParamRegion                  @"xh_region"
#define XHEventParamCountry                 @"xh_country"


#define XHEventParamDepartingArrivalDate    @"xh_departing_arrival_date"
#define XHEventParamReturningArrivalDate    @"xh_returning_arrival_date"
#define XHEventParamSuggestedDestinations   @"xh_suggested_destinations" //array of string
#define XHEventParamTravelStart             @"xh_travel_start"
#define XHEventParamTravelEnd               @"xh_travel_end"
#define XHEventParamNumAdults               @"xh_num_adults"
#define XHEventParamNumChildren             @"xh_num_children"
#define XHEventParamNumInfants              @"xh_num_infants"
#define XHEventParamSuggestedHotels         @"xh_suggested_hotels" //array of string

#define XHEventParamUserScore               @"xh_user_score"
#define XHEventParamHotelScore              @"xh_hotel_score"
#define XHEventParamPurchaseCurrency        @"xh_purchase_currency"

#define XHEventParamPreferredStarRatings    @"xh_preferred_star_ratings"    //array of int (basically a tuple (min,max) but we'll use array of int and instruct the developer to use two values)

#define XHEventParamPreferredPriceRange     @"xh_preferred_price_range"    //array of int (basically a tuple (min,max) but we'll use array of int and instruct the developer to use two values)
#define XHEventParamPreferredNeighborhoods  @"xh_preferred_neighborhoods" //array of string
#define XHEventParamPreferredNumStops       @"xh_preferred_num_stops"

#define XHEventParamAdRevenueAdType              @"xh_adrev_ad_type"
#define XHEventParamAdRevenueNetworkName         @"xh_adrev_network_name"
#define XHEventParamAdRevenuePlacementId         @"xh_adrev_placement_id"
#define XHEventParamAdRevenueAdSize              @"xh_adrev_ad_size"
#define XHEventParamAdRevenueMediatedNetworkName @"xh_adrev_mediated_network_name"
