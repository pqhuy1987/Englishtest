//
//  Verb.h
//  IrregularVerbs
//
//  Created by Rafa Barberá Córdoba on 08/01/13.
//  Copyright (c) 2013 Oswaldo Rubio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Verb : NSObject<NSCoding>

@property (nonatomic,strong) NSString *simple;
@property (nonatomic,strong) NSString *past;
@property (nonatomic,strong) NSString *participle;
@property (nonatomic,strong) NSString *translation;
@property (nonatomic) float frequency;
@property (nonatomic) int hint;

@property (nonatomic,readonly) float averageResponseTime;
@property (nonatomic,readonly) float failureRatio;
@property (nonatomic,readonly) float failureIndex;
@property (nonatomic,readonly) int testCount;
@property (nonatomic,readonly) int failCount;
@property (nonatomic,readonly) int passCount;

@property (nonatomic,readonly) float responseTime;
@property (nonatomic,readonly) BOOL failed;
@property (nonatomic,readonly) BOOL testPending;

- (id)initFromDictionary:(NSDictionary *)dictonary;
- (void)failTest;
- (void)passTestWithTime:(float)time;
- (void)resetCurrentTest;
- (void)resetHistory;
- (BOOL)isPendingOrFailed;

- (NSComparisonResult)compareVerbsAlphabetically:(Verb *)other;
- (NSComparisonResult)compareVerbsByTestResults:(Verb *)other;
- (NSComparisonResult)compareVerbsByHistoricalPerformance:(Verb *)other;
- (NSComparisonResult)compareVerbsByRecentFailure:(Verb *)other;
- (NSComparisonResult)compareVerbsByFrequency:(Verb *)other;
- (NSComparisonResult)compareVerbsByTestNumber:(Verb *)other;
- (NSComparisonResult)compareVerbsByAverageResponseTime:(Verb *)other;
- (NSComparisonResult)compareVerbsByHint:(Verb *)other;

@end
