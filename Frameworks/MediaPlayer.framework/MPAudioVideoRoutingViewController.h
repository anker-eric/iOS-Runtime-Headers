/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPAudioVideoRoutingViewControllerDelegate>, MPAudioVideoRoutingTableViewController;

@interface MPAudioVideoRoutingViewController : UIViewController {
    <MPAudioVideoRoutingViewControllerDelegate> *_delegate;
    MPAudioVideoRoutingTableViewController *_tableViewController;
}

@property <MPAudioVideoRoutingViewControllerDelegate> * delegate;

+ (BOOL)hasWirelessDisplayRoutes;

- (void)_doneAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadView;
- (void)setDelegate:(id)arg1;

@end