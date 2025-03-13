#import <Flutter/Flutter.h>

@interface FluwxPlugin : NSObject<FlutterPlugin>
+ (void)notifyUniversalLinkUrl:(NSUserActivity *)userActivity;
@end
