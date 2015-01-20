/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class <SGReverseTemplateJS>, NSString, NSXPCConnection, SGAsset;

@interface SGExtractionDissector : NSObject <SGPipelineDissector> {
    SGAsset *_asset;
    <SGReverseTemplateJS> *_reverseTemplateJS;
    NSXPCConnection *_xpcConnection;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2;
+ (id)addressDictionaryToString:(id)arg1;
+ (id)parseISO8601:(id)arg1;

- (void).cxx_destruct;
- (void)dissect:(id)arg1;
- (id)entityForJS:(id)arg1;
- (id)entityForOutputItem:(id)arg1 parentEntity:(id)arg2;
- (id)init;

@end
