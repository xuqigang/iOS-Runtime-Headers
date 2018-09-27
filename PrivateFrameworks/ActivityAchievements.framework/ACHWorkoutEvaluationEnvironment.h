/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

@interface ACHWorkoutEvaluationEnvironment : NSObject {
    double  _bestKilocaloriesForType;
    unsigned long long  _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
    unsigned long long  _numberOfFirstPartyWorkoutsOver5MinutesWithType;
    ACHWorkoutEvaluationWorkoutProperties * _workout;
}

@property (nonatomic, readonly) double bestKilocaloriesForType;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType;
@property (nonatomic, readonly) ACHWorkoutEvaluationWorkoutProperties *workout;

- (void).cxx_destruct;
- (double)bestKilocaloriesForType;
- (id)initWithWorkout:(id)arg1 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)arg2 numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek:(unsigned long long)arg3 bestKilocaloriesForType:(double)arg4;
- (unsigned long long)numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
- (unsigned long long)numberOfFirstPartyWorkoutsOver5MinutesWithType;
- (id)workout;

@end