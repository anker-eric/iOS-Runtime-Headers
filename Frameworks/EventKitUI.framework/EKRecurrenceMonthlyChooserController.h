/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController {
    <EKRecurrenceChooserControllerDelegate> *_delegate;
    EKRecurrenceMonthDayChooserController *_monthDayChooser;
    UITableViewCell *_onEachCell;
    UITableViewCell *_onTheCell;
    EKRecurrenceOrdinalChooserController *_ordinalChooser;
    int _selectedRow;
}

@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;

- (void).cxx_destruct;
- (id)_currentChooser;
- (void)_selectRow:(int)arg1;
- (id)backgroundColor;
- (id)cellForRow:(int)arg1;
- (BOOL)drawBackgroundForRow:(int)arg1;
- (int)frequency;
- (float)heightForRow:(int)arg1;
- (id)initWithDate:(id)arg1;
- (int)numberOfRows;
- (BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
- (void)rowTapped:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;

@end