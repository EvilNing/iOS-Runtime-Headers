/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class TIAutocorrectionList, TIKeyboardCandidate;

@interface UIKeyboardAutocorrectionController : NSObject {
    TIAutocorrectionList *_autocorrectionList;
    bool_deferredAutocorrection;
    bool_needsAutocorrection;
    bool_requestedAutocorrection;
}

@property(readonly) TIKeyboardCandidate * autocorrection;
@property(retain) TIAutocorrectionList * autocorrectionList;
@property bool deferredAutocorrection;
@property bool needsAutocorrection;
@property bool requestedAutocorrection;

- (id)autocorrection;
- (id)autocorrectionList;
- (void)clearAutocorrection;
- (void)dealloc;
- (bool)deferredAutocorrection;
- (bool)hasAutocorrection;
- (bool)needsAutocorrection;
- (void)requestAutocorrectionWithExecutionContext:(id)arg1;
- (bool)requestedAutocorrection;
- (void)setAutocorrectionList:(id)arg1;
- (void)setDeferredAutocorrection:(bool)arg1;
- (void)setNeedsAutocorrection:(bool)arg1;
- (void)setNeedsAutocorrection;
- (void)setRequestedAutocorrection:(bool)arg1;
- (void)updateSuggestionViews;

@end
