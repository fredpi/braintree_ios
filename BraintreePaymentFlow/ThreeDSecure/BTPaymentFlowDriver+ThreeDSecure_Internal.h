#if __has_include("BraintreeCore.h")
#import "BraintreeCore.h"
#else
#import <BraintreeCore/BraintreeCore.h>
#endif
#import "BTPaymentFlowDriver+ThreeDSecure.h"
#import "BTThreeDSecureLookup.h"
#import <CardinalMobile/CardinalMobile.h>

NS_ASSUME_NONNULL_BEGIN

@class BTThreeDSecureRequest;

@interface BTPaymentFlowDriver (ThreeDSecure_Internal)

- (void)performThreeDSecureLookup:(BTThreeDSecureRequest *)request
             additionalParameters:(NSDictionary *)additionalParameters
                       completion:(void (^)(BTThreeDSecureLookup  * _Nullable threeDSecureResult, NSError * _Nullable error))completionBlock;

@end

NS_ASSUME_NONNULL_END

