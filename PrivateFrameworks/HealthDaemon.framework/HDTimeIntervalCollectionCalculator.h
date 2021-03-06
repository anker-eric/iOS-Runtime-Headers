/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTimeIntervalCollectionCalculator : NSObject {
    double  _endInterval;
    double  _startInterval;
    NSMutableArray * _timePeriods;
}

- (void).cxx_destruct;
- (void)_shortenRangesConsideringPreferredSourceValue:(id)arg1 lesserRange:(id)arg2;
- (void)addTimePeriodWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (double)totalDuration;

@end
