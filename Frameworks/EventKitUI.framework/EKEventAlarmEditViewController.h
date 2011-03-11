/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarEventAlarmTable, EKAlarm;

@interface EKEventAlarmEditViewController : EKEventEditItemViewController <CalendarEventAlarmTableDelegate> {
    CalendarEventAlarmTable *_table;
    EKAlarm *_alarm;
    int _alarmIndex;
}

@property(retain) EKAlarm * alarm;
@property int alarmIndex;
@property int presetIdentifier;


- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPresetIdentifier:(int)arg1;
- (int)presetIdentifier;
- (void)alarmTableDidChangeAlarm:(id)arg1;
- (void)setAlarmIndex:(int)arg1;
- (void)setAlarm:(id)arg1;
- (BOOL)customSelected;
- (id)alarm;
- (int)alarmIndex;
- (id)_table;
- (void)setCustomString:(id)arg1;

@end