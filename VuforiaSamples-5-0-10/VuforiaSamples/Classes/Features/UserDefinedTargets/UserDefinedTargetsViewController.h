/*===============================================================================
Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/

#import <UIKit/UIKit.h>
#import "UserDefinedTargetsEAGLView.h"
#import "SampleApplicationSession.h"
#import "SampleAppMenuViewController.h"
#import "CustomToolbar.h"
#import "DataSet.h"

@interface UserDefinedTargetsViewController : UIViewController <SampleApplicationControl, CustomToolbarDelegateProtocol, SampleAppMenuDelegate> {
    QCAR::DataSet *dataSetUserDef;
    RefFreeFrame *refFreeFrame;
    
    // menu options
    BOOL extendedTrackingEnabled;
    BOOL continuousAutofocusEnabled;
    BOOL flashEnabled;
    BOOL frontCameraEnabled;
}

@property (nonatomic, strong) UserDefinedTargetsEAGLView *eaglView;
@property (nonatomic, strong) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, strong) SampleApplicationSession *vapp;

@property (nonatomic, strong) CustomToolbar *toolbar;

@property (nonatomic, readwrite) BOOL showingMenu;

@end
