//
//  TZTripMapController.h
//  Triporg
//
//  Created by Endika Salas on 7/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <QuartzCore/QuartzCore.h>

@class TZTrip;

@interface TZTripMapController : UIViewController <MKMapViewDelegate, UIScrollViewDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
    BOOL _navigate;
}

@property (nonatomic, weak) IBOutlet MKMapView *mapView;
@property (nonatomic, weak) IBOutlet UISegmentedControl *mapControl;
@property (nonatomic, strong) NSArray *tripEvents;
@property (nonatomic, strong) TZTrip *trip;
@property (weak, nonatomic) NSNumber *cityId;
@property(nonatomic, strong) UITapGestureRecognizer *singleTap;
@property(nonatomic, strong) UITapGestureRecognizer *doubleTap;
@property(nonatomic, strong) UITapGestureRecognizer *twoFingerTap;

- (IBAction)MapTypeChange:(id)sender;

@end
