//
//  MMViewController.m
//  ATAuthSDKMM
//
//  Created by LazyJiu on 08/28/2019.
//  Copyright (c) 2019 LazyJiu. All rights reserved.
//

#import "MMViewController.h"
#import <ATAuthSDK/TXCommonAuthHandler.h>

@interface MMViewController ()

@end

@implementation MMViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    [TXCommonAuthHandler getVersion];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
