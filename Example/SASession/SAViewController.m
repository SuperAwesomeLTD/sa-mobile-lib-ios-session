//
//  SAViewController.m
//  SASession
//
//  Created by Gabriel Coman on 07/15/2016.
//  Copyright (c) 2016 Gabriel Coman. All rights reserved.
//

#import "SAViewController.h"

@interface SAViewController ()

@end

@implementation SAViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    NSString *_lang;
    NSArray *languages = [NSLocale preferredLanguages];
    NSLog(@"%@", [languages firstObject]);
    if ([languages count] > 0) {
        _lang = [[languages firstObject] stringByReplacingOccurrencesOfString:@"-" withString:@"_"];;
    }
    
    NSString *language = [[[NSBundle mainBundle] preferredLocalizations] objectAtIndex:0];
    NSString *locale = [[NSLocale currentLocale] objectForKey:NSLocaleCountryCode];
    NSLog(@"%@ - %@", language, locale);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
