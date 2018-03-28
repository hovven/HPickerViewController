//
//  HPickerViewController.h
//  HPickerViewController
//
//  Created by Hoven on 27/10/2013.
//  Copyright (c) 2018 Hossein Vesali Naseh All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyModel.h"

/**
 *  The Block which is executed when the select button is touched.
 *
 *  @param MyModel The item that is picked.
 *
 *  @return MyModel
 */
typedef void (^HPickerViewConfirmBlock)(MyModel *model);

/**
 *  The Block which is executed when the cancel button is touched.
 *
 *  @param void
 *
 *  @return void
 */
typedef void (^HPickerViewCancelBlock)(void);

@interface HPickerViewController : UIViewController <UIPickerViewDelegate,UIPickerViewDataSource>

/**
 *  The `UIPicker` object used in the component.
 */
@property (nonatomic) UIPickerView *pickerView;

/**
 *  Selected object from pickerView components.
 */
@property (nonatomic) MyModel *selectedModel;

/**
 *  The Number Of component's in pickerView.
 */
@property (nonatomic) NSArray *pickerArrays;

/**
 * The Block which is executed when the select button is touched.
 */
@property (nonatomic, copy) HPickerViewConfirmBlock confirmBlock;

/**
 *  The Block which is executed when the cancel button is touched.
 */
@property (nonatomic, copy) HPickerViewCancelBlock cancelBlock;

/**
 *  Creates and returns a new uipicker.
 *
 *  @param pickerArrays          The initial arrays of components.
 *  @param selectedBlock The Block which is executed when the select button is touched.
 *  @param cancelBlock   The Block which is executed when the cancel button is touched.
 *
 *  @return A newly created uipicker.
 */
+ (id)pickerWithItems:(NSArray*)pickerArrays confirmBlock:(HPickerViewConfirmBlock)selectedBlock cancelBlock:(HPickerViewCancelBlock)cancelBlock;

@end

