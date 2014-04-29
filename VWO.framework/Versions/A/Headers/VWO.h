/*!
 @header    VWO.h
 @abstract  VWO iOS SDK Header
 @version   1.0
 @copyright Copyright 2013 Wingify Software Pvt. Ltd. All rights reserved.
 */

#import <Foundation/Foundation.h>

@interface VWO : NSObject

/*!
 Trigger Conversion Event for Custom Goal.
 
 @param goalId The ID of the goal.
 */
+ (void)markConversionForGoalId:(NSInteger)goalId;

/*!
 Trigger Conversion Event for Revenue Goal.
 
 @param goalId The ID of the goal.
 @param revenue The revenue associated with this goal conversion.
 */
+ (void)markConversionForGoalId:(NSInteger)goalId withRevenue:(CGFloat)revenue;


/*!
 Set Opt-out Status of User
 
 @param status All tracking is stopped if status is YES, and resumed if status is NO. Default is NO. The value of this flag is automatically persisted on User's device.
 */
+ (void)setOptOut:(BOOL)status;

/*!
 Get Opt-out Status of User
 
 @return YES if User is Opted-Out. NO otherwise.
 */
+ (BOOL)isOptOut;

@end
