//
//  Growler.h
//  Hermes
//

@class Song;

#define GROWLER [[NSApp delegate] growler]

@interface Growler : NSObject<NSUserNotificationCenterDelegate>

- (void) growl:(Song*)song withImage:(NSData*)image isNew:(BOOL) n;

@end
