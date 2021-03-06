/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMediaAnalyzer : NSObject {
    NSObject<OS_dispatch_queue> * _analysisQueue;
    VCPDatabaseReader * _databaseReader;
    bool  _noResultStrip;
    bool  _standalone;
    NSObject<OS_dispatch_queue> * _storageQueue;
}

+ (id)sharedMediaAnalyzer;

- (void).cxx_destruct;
- (id)addClassificationResults:(id)arg1 analysis:(id)arg2;
- (id)analyzeOndemand:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 storeAnalysis:(bool)arg3;
- (void)assetsAnalyzedSinceDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)cancelAnalysisWithRequestID:(int)arg1;
- (void)checkDuplicate:(id)arg1 withAsset:(id)arg2 duplicate:(long long*)arg3;
- (void)distanceFromAsset:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toAsset:(id)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 duplicate:(long long*)arg5 distance:(float*)arg6;
- (void)distanceFromAsset:(id)arg1 toAsset:(id)arg2 duplicate:(long long*)arg3 distance:(float*)arg4;
- (void)getSceneDescriptors:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 featureResults:(id)arg2 descriptorArray:(id)arg3;
- (id)init;
- (unsigned long long)metaAnalysisTypesForAsset:(id)arg1;
- (id)queryImageDescriptorOfAsset:(id)arg1 withExistingAnalysis:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 lastFeature:(bool)arg4;
- (int)requestAnalysesForAssets:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(bool)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 allowOndemand:(bool)arg3;
- (int)requestAnalysisForAsset:(id)arg1 analysisTypes:(unsigned long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)typesToRemove:(unsigned long long)arg1 requested:(unsigned long long)arg2;

@end
