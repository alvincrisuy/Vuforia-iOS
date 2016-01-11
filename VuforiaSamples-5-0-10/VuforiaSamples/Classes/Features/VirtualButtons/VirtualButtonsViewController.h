/*===============================================================================
Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of PTC Inc., registered in the United States and other 
countries.
===============================================================================*/

#import <UIKit/UIKit.h>
#import "VirtualButtonsEAGLView.h"
#import "SampleApplicationSession.h"
#import "SampleAppMenuViewController.h"
#import "DataSet.h"

@interface VirtualButtonsViewController : UIViewController <SampleApplicationControl, SampleAppMenuDelegate> {
    QCAR::DataSet*  dataSet;
    
    bool buttonStateChanged;
    bool buttonActivated[NB_BUTTONS];
    
    // menu options
    BOOL continuousAutofocusEnabled;
    BOOL flashEnabled;
    BOOL frontCameraEnabled;
}

@property (nonatomic, strong) VirtualButtonsEAGLView *eaglView;
@property (nonatomic, strong) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, strong) SampleApplicationSession *vapp;

@property (nonatomic, readwrite) BOOL showingMenu;

@end
