//
//  ViewController.m
//  HPickerViewDemo
//
//  Created by Hoven co on 3/28/18.
//  Copyright © 2018 Hossein Vesali Naseh. All rights reserved.
//

#import "ViewController.h"
#import "HPickerViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)viewDidAppear:(BOOL)animated{
    NSArray *colors = [NSArray arrayWithObjects: @"Red", @"Green", @"Blue", @"Yellow", nil];
    NSArray *counts = [NSArray arrayWithObjects: @"1", @"2", @"3", @"4", nil];
    NSArray *days = [NSArray arrayWithObjects: @"Saturday",@"Sunday", @"Monday", @"Wednesday", @"Friday", nil];
    
    NSArray *pickerArrays = [NSArray arrayWithObjects:colors,counts,days, nil];
    
    // Create an instance of the picker
    HPickerViewController *pickerViewController = [HPickerViewController pickerWithItems:pickerArrays confirmBlock:^(MyModel *model) {
        // do anything you want with your selected item
        NSLog(@"selected item is : %@" , model);
    } cancelBlock:^{
        // dismiss or what ever when cancel pressed
        [self dismissViewControllerAnimated:true completion:nil];
    }];
    
    // Present it
    [self presentViewController:pickerViewController animated:YES completion:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
