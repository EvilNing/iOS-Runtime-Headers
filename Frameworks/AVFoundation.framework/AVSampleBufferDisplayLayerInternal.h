/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaDataRequester, AVWeakReference, CALayer, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface AVSampleBufferDisplayLayerInternal : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    boolaboveHighWaterLevel;
    booladdedToSynchronizer;
    boolcontrolTimebaseSetByUserIsInUse;
    boolisRequestingMediaData;
    booloutputObscured;
    } bounds;
    CALayer *contentLayer;
    struct OpaqueCMTimebase { } *controlTimebaseSetByUser;
    NSError *error;
    AVMediaDataRequester *mediaDataRequester;
    } presentationSize;
    struct OpaqueCMTimebase { } *readOnlyRenderingTimebase;
    struct OpaqueCMTimebase { } *readOnlyVideoQueueTimebase;
    NSObject<OS_dispatch_queue> *serialQueue;
    long long status;
    NSString *videoGravity;
    struct OpaqueFigVideoQueue { } *videoQueue;
    AVWeakReference *weakReferenceToSelf;
    AVWeakReference *weakReferenceToSynchronizer;
}

@end
