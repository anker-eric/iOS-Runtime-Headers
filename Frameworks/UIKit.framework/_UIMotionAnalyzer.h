/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionAnalyzer : NSObject {
    _UIMotionAnalyzerSettings *_settings;
    _UIViewerRelativeDevicePose *_viewerRelativeDevicePose;
}

@property (nonatomic, readonly) _UIMotionAnalyzerSettings *settings;
@property (nonatomic, readonly) _UIViewerRelativeDevicePose *viewerRelativeDevicePose;

- (void).cxx_destruct;
- (BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5;
- (id)description;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)reset;
- (void)resetHysteresis;
- (id)settings;
- (void)updateHistory;
- (void)updateWithEvent:(id)arg1;
- (id)viewerRelativeDevicePose;

@end