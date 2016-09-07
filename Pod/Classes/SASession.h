//
//  SASession.h
//  Pods
//
//  Created by Gabriel Coman on 15/07/2016.
//
//

#import <UIKit/UIKit.h>

@interface SASession : NSObject

// setters
- (void) setConfiguration:(NSInteger) configuration;
- (void) setConfigurationProduction;
- (void) setConfigurationStaging;
- (void) setTestEnabled;
- (void) setTestDisabled;
- (void) setTest:(BOOL) testEnabled;

// getters
- (NSString*) getBaseUrl;
- (BOOL) isTestEnabled;
- (NSInteger) getConfiguration;

@end
