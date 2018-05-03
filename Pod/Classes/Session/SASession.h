/**
 * @Copyright:   SuperAwesome Trading Limited 2017
 * @Author:      Gabriel Coman (gabriel.coman@superawesome.tv)
 */

#import <UIKit/UIKit.h>
#import "SASessionDefines.h"

/**
 * Class that manages an AwesomeAds session, containing all variables 
 * needed to setup loading for a certain ad
 */
@interface SASession : NSObject

- (void) setTestMode:(BOOL) testEnabled;
- (void) enableTestMode;
- (void) disableTestMode;
- (void) setDauId:(NSUInteger)dauId;
- (void) setVersion:(NSString *)version;
- (void) setConfiguration:(SAConfiguration) configuration;
- (void) setConfigurationProduction;
- (void) setConfigurationStaging;
- (void) setInstl: (SARTBInstl) instl;
- (void) setPlaybackMethod: (SARTBPlaybackMethod) playbackMethod;
- (void) setPos: (SARTBPosition) pos;
- (void) setSkip: (SARTBSkip) skip;
- (void) setStartDelay: (SARTBStartDelay) startDelay;
- (void) setWidth: (NSInteger) width;
- (void) setHeight: (NSInteger) height;

- (NSString*) getBaseUrl;
- (BOOL) getTestMode;
- (NSUInteger) getDauId;
- (NSString*) getVersion;
- (NSInteger) getCachebuster;
- (NSString*) getBundleId;
- (NSString*) getAppName;
- (NSInteger) getConnectivityType;
- (NSString*) getLang;
- (NSString*) getDevice;
- (NSString*) getUserAgent;
- (SAConfiguration) getConfiguration;
- (SARTBInstl) getInstl;
- (SARTBPlaybackMethod) getPlaybackMethod;
- (SARTBPosition) getPos;
- (SARTBSkip) getSkip;
- (SARTBStartDelay) getStartDelay;
- (NSInteger) getWidth;
- (NSInteger) getHeight;

@end
