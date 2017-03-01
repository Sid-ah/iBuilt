//
//  MainViewController.m
//
//  Created by Daniel Arantes Loverde on 6/26/14.
//
// This is just a EXAMPLE FILE, that i use in my project.

#import "MainViewController.h"
#import "ARViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

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
    
    // My project use navigation controller just for transition animation right to left, thats why i hide it here on first view.
    
    [self.navigationController setNavigationBarHidden:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
//- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
//{
//    if ([segue.identifier isEqualToString:@"idHomeViewController"])
//    {
////        MyViewController *controller = (MyViewController *)segue.destinationViewController;
////        controller.myProperty1 = ...;
////        controller.myProperty2 = ...;
//    }
//    
//    
//}


-(void)touchToLoad:(id)sender
{
    //
    // Open historyboard with Unity and Vuforia, see details on ARViewController.h/m
    
    UIStoryboard *storyBoard;
    storyBoard                      = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    ARViewController *mainVC        = [storyBoard instantiateViewControllerWithIdentifier:@"idARViewController"];
    [self.navigationController pushViewController:mainVC animated:YES];
}

@end
