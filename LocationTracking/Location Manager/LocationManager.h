//
//  LocationManager.h
//  Location Tracking
//
//  Created by Manish Kumar on 10/21/14.
//  Copyright (c) 2014 Innofied Solutions Pvt. Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;

@interface LocationManager : NSObject<CLLocationManagerDelegate>

/**
 *  Provides the present location of the device
 */
@property (strong,nonatomic) CLLocation *currentLocation;
/**
 *  Provides the present location coordnates of the device
 */
@property (assign,nonatomic) CLLocationCoordinate2D currentCoordinate;

/**
 *  Provides the latest location coordinate for which user has searched places API
 */
@property (assign,nonatomic) CLLocationCoordinate2D latestSearchedCoordinate2d;

/**
 *  If location manager is providing present data or not
 */
@property (assign,nonatomic) BOOL isDataAvailable;

@property (strong,nonatomic) NSString* userLocality;
/**
 *  Provides a single shared instance which handles all the location related works
 *
 *  @return return sharedManager Singleton object of the class
 */
+(instancetype)sharedManager;

-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;




@end
