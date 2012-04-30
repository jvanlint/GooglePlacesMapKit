//
//  ViewController.h
//  GooglePlaces
//
//  Created by van Lint Jason on 28/04/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "MapPoint.h"

#define kBgQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)


#define kGOOGLE_API_KEY @"AIzaSyCizq7QvPED3UkztXhCs1BTqyyFoRWRYWI"

@interface ViewController : UIViewController<MKMapViewDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    NSString *imageName;
    BOOL firstLaunch;
    int radius;
    

}
@property (strong, nonatomic) IBOutlet MKMapView *mapView;

@end
