//
//  UserSwitchManager.h
//  UserSwitch
//
//  Created by Adam Cooper on 3/27/17.
//  Copyright © 2017 Adam Cooper. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserSwitchManager : NSObject


#pragma mark - Account Information

/**
 Initialize Eula with your SDK key and secret.
 Call this method in application:didFinishLaunchingWithOptions:
 
 @discussion If you do not have a developer account register here: https://www.userswitch.com/register
 If you do not know you sdk key / secret you can log in to find it here: https://www.userswitch.com/login
 **/

+ (void)setAPIKey:(NSString *)apiKey apiSecret:(NSString *)apiSecret;

/**
 Your accounts APIKey.
 **/
+ (NSString *)apiKey;

/**
 Your accounts APISecret.
 **/
+ (NSString *)apiSecret;

#pragma mark - Reasons

/**
 Sets the reasons for reporting a user.
 **/
+ (void)setDefaultReasons:(NSArray *)reasons;

/**
 The reasons for reporting a user.
 **/
+ (NSArray *)reasons;


+(void)reportUserWithIdentifier:(NSString *)identifier;

#pragma mark - User Information

/**
 Sets the email for the User.
 **/
+ (void)setUserIdentifier:(NSString *)identifier;

/**
 Sets the email for the User.
 **/
+ (void)setUserEmail:(NSString *)email;

/**
 Sets the name for the User.
 **/
+ (void)setUserName:(NSString *)name;

/**
 Sets the imageURL for the User.
 **/
+ (void)setUserImageUrl:(NSString *)url;

/**
 The ID for the 'User.
 **/
+ (NSString *)userIdentifier;


/**
 The email for the 'User.
 **/
+ (NSString *)userEmail;

/**
 The name for the `User`.
 **/
+ (NSString *)userName;

/**
 The imageURL for the `User`.
 **/
+ (NSString *)userImageUrl;

/**
 Logs out the user
 @discussion This method is required when your user logouts of the applicaiton.
 */
+ (void)logout;

@end
