//
//  ARViewController.h
//
//  Created by Daniel Arantes Loverde on 7/10/14.
//
//

#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"


@interface ARViewController : UIViewController
{
    IBOutlet UIView     *viewToUnity;
    UnityDefaultViewController *unityViewController;
    UnityAppController *unityController;
}

-(IBAction) goBack:(id)sender;

@end
