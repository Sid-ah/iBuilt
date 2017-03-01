//
//  mainAppController.mm
//
//  Created by Daniel Arantes Loverde on 6/26/14.
//
// The mainAppController.mm is my AppDelegate, you name it whatever you whant.
//



// Import this default headers to make Unity and Vuforia works
#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"
#import "VuforiaRenderDelegate.h"
// This is your MAIN VIEWCONTROLLER, that controller you want to open first when build/open your app.
#import "MainViewController.h"



// Unity native rendering callback plugin mechanism is only supported
// from version 4.5 onwards
#if UNITY_VERSION>434
// Exported methods for native rendering callback
extern "C" void UnitySetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void UnityRenderEvent(int marker);

// This is for Vuforia Render Delegate, i copy it from VuforiaNativeRenderController.mm and add here to make it work

extern "C" void VuforiaSetGraphicsDevice(void* device, int deviceType, int eventType);
extern "C" void VuforiaRenderEvent(int marker);

#endif

@interface mainAppController : UnityAppController<UIApplicationDelegate>

// My historyboard works with NavigationController.
// If your app doenst use navigation, just open the historiboard with your main ViewController.

@property (nonatomic, strong) UINavigationController *navigationController;

- (void)willStartWithViewController:(UIViewController*)controller;
- (void)shouldAttachRenderDelegate;

@end



@implementation mainAppController


- (void)shouldAttachRenderDelegate
{
    
    self.renderDelegate = [[VuforiaRenderDelegate alloc] init];
    // Unity native rendering callback plugin mechanism is only supported
    // from version 4.5 onwards
#if UNITY_VERSION>434
    //
    // I comment this line bellow because Vuforia hendle it, and you see what will work with Vuforia.
    //
    //UnityRegisterRenderingPlugin(&UnitySetGraphicsDevice, &UnityRenderEvent);
    UnityRegisterRenderingPlugin(&VuforiaSetGraphicsDevice, &VuforiaRenderEvent);
#endif
    
}


- (void)willStartWithViewController:(UIViewController*)controller {

    //
    // Open your historyboard with your main view.
    // In my case i use navigation controller.
    
    UIStoryboard *storyBoard;
    storyBoard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];

    _rootController         = [[UnityDefaultViewController alloc] init];
    _rootView               = [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    _rootController.view    = _rootView;
    
    MainViewController *mainVC       = [storyBoard instantiateViewControllerWithIdentifier:@"idMainViewController"];
    
    self.navigationController = [[UINavigationController alloc] initWithRootViewController:mainVC];
    
    [_rootView addSubview:self.navigationController.view];
}

@end


//
// You have to put this line below and comment out the equal line below in file VuforiaNativeRenderController.mm
//
IMPL_APP_CONTROLLER_SUBCLASS(mainAppController)
