//
//  MPMockBannerCustomEvent.h
//
//  Copyright 2018-2020 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import <Foundation/Foundation.h>
#import "MPBannerCustomEvent.h"

@interface MPMockBannerCustomEvent : MPBannerCustomEvent

@property (nonatomic, assign) BOOL enableAutomaticImpressionAndClickTracking;
@property (nonatomic, readonly) BOOL isLocalExtrasAvailableAtRequest;

- (void)requestAdWithSize:(CGSize)size customEventInfo:(NSDictionary *)info adMarkup:(NSString *)adMarkup;

@end
