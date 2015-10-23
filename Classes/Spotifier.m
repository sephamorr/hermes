//
//  SpotifyURLOpener.m
//  Hermes
//
//  Created by Sheyne Anderson on 10/23/15.
//
//

#import "Spotifier.h"

@implementation Spotifier

-(void)openCurrentSong:(PlaybackController *)controller{
    [self openSpotifyWithSong: controller.playing.playing];
}
-(void)openSpotifyWithSong:(Song *)song{
    NSString *artist = song.artist;
    NSString *album = song.album;
    NSString *track = song.title;
    
    NSString *url = [NSString stringWithFormat:@"spotify:search:%@+%@+%@", artist, album, track];
    [[NSWorkspace sharedWorkspace] openURL:[NSURL URLWithString:url]];
}
@end
