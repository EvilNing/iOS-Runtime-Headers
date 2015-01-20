/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFVoiceInfo, NSArray, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface AFSettingsConnection : NSObject {
    NSXPCConnection *_connection;
    AFVoiceInfo *_selectedVoice;
    NSArray *_voices;
    NSObject<OS_dispatch_queue> *_voicesQueue;
}

- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_connection;
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;
- (void)_setVoices:(id)arg1;
- (id)_settingsService;
- (id)_settingsServiceWithErrorHandler:(id)arg1;
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(bool)arg2 completion:(id)arg3;
- (void)_updateVoicesSync;
- (void)_updateVoicesWithCompletion:(id)arg1;
- (id)_voices;
- (id)accounts;
- (void)barrier;
- (void)dealloc;
- (void)deleteAccountWithIdentifier:(id)arg1;
- (void)fetchSupportedLanguageCodes:(id)arg1;
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(id)arg2;
- (id)init;
- (void)killDaemon;
- (void)saveAccount:(id)arg1 setActive:(bool)arg2;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setAssistantEnabled:(bool)arg1;
- (void)setDictationEnabled:(bool)arg1;
- (void)setLanguage:(id)arg1 withCompletion:(id)arg2;
- (void)setLanguage:(id)arg1;
- (void)setOutputVoice:(id)arg1 withCompletion:(id)arg2;
- (void)setOutputVoice:(id)arg1;

@end
