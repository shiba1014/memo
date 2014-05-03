//
//  ViewController.h
//  memo
//
//  Created by Paul McCartney on 2014/03/29.
//  Copyright (c) 2014年 羽柴彩月. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    UIImageView *canvas;
    CGPoint touchPoint;
    
    int rgb;
    int color;
    
    IBOutlet UISwitch *keshigom;
    IBOutlet UISegmentedControl *seg;
    
    
    UIImage *capture;
    
}
-(IBAction)save;
-(void)png;
-(IBAction)black;
-(IBAction)red;
-(IBAction)green;
-(IBAction)blue;
-(IBAction)keshigom;

@end
