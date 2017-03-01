//
//  ARViewController.m
//
//  Created by Daniel Arantes Loverde on 7/10/14.
//
//

#import "ARViewController.h"
#import <QuartzCore/QuartzCore.h>

@interface ARViewController ()

@end

@implementation ARViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Just setting Unity delegates and view to add it as subview for my main view.
    // This allow me to add a UIButton above the UnityView to popViewController or anything i want to make native in iOS.
    
    unityViewController         = [[UnityDefaultViewController alloc] init];
    unityController             = (UnityAppController*)[[UIApplication sharedApplication] delegate];
    unityViewController.view    = (UIView*)unityController.unityView;
    
    [viewToUnity addSubview:unityViewController.view];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

#pragma MARK -- Methods
-(void)goBack:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}

@end
