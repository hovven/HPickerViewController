# HPickerViewController

UIPickerView modally presented with iOS 7 custom transitions and Custom components

## Installation

### Manually
  Download and drop /HPickerControllerfolder in your project.
  

### Usage

```
    // Create arrays
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
```

  Enjoy
