//
//  SpotifyURLOpener.h
//  Hermes
//
//  Created by Sheyne Anderson on 10/23/15.
//
//

#import <Foundation/Foundation.h>
#import "Pandora/Song.h"
#import "PlaybackController.h"

@interface Spotifier : NSObject

-(void)openCurrentSong:(PlaybackController *)controller;
-(void)openSpotifyWithSong:(Song *)song;

@end
