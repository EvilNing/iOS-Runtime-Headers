/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::Geolocation> { 
        struct Geolocation {} *m_ptr; 
    struct RetainPtr<WebView *> { 
        void *m_ptr; 
     /* Encoded args for previous method: @32@0:8^{Geolocation=^^?^{ScriptExecutionContext}I{Weak<WebCore::JSDOMWrapper>=^{WeakImpl}}I{HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >={HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >=^{RefPtr<WebCore::Geolocation::GeoNotifier>}iiii}}{Watchers={HashMap<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >={HashTable<int, WTF::KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >, WTF::IntHash<unsigned int>, WTF::HashMap<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >::KeyValuePairTraits, WTF::HashTraits<int> >=^{KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >}iiii}}{HashMap<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<int> >={HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int> >, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<int> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >=^{KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int>}iiii}}}{HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >={HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >=^{RefPtr<WebCore::Geolocation::GeoNotifier>}iiii}}{RefPtr<WebCore::Geoposition>=^{Geoposition}}iBBB{RefPtr<WebCore::PositionError>=^{PositionError}}{Timer<WebCore::Geolocation>=^^?dddiI^{Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow>}{function<void ()>={type=[24C]}^{__base<void ()>}}}{HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >={HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >=^{RefPtr<WebCore::Geolocation::GeoNotifier>}iiii}}}16@24 */
    } _geolocation;
    } _webView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithGeolocation:(struct Geolocation { int (**x1)(); struct ScriptExecutionContext {} *x2; unsigned int x3; struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_4_1_1; } x4; unsigned int x5; struct HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct RefPtr<WebCore::Geolocation::GeoNotifier> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct Watchers { struct HashMap<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct HashTable<int, WTF::KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >, WTF::IntHash<unsigned int>, WTF::HashMap<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IntHash<unsigned int>, WTF::HashTraits<int>, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > >::KeyValuePairTraits, WTF::HashTraits<int> > { struct KeyValuePair<int, WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_7_1_1; struct HashMap<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<int> > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int> >, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<int> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct KeyValuePair<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, int> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_2_2_1; } x_7_1_2; } x7; struct HashSet<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct HashTable<WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::RefPtr<WebCore::Geolocation::GeoNotifier>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> >, WTF::HashTraits<WTF::RefPtr<WebCore::Geolocation::GeoNotifier> > > { struct RefPtr<WebCore::Geolocation::GeoNotifier> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_8_1_1; } x8; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_9_1_1; } x9; int x10; boolx11; boolx12; boolx13; struct RefPtr<WebCore::PositionError> { struct PositionError {} *x_14_1_1; } x14; struct Timer<WebCore::Geolocation> { int (**x_15_1_1)(); double x_15_1_2; double x_15_1_3; double x_15_1_4; int x_15_1_5; unsigned int x_15_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_15_1_7; struct function<void ()>={type=[24C] {} x_15_1_8; struct __base<void ()> {} *x_15_1_9; } x15; }*)arg1 forWebView:(/* Warning: Unrecognized filer type: 'H' using 'void*' */ void*)arg2;
- (bool)shouldClearCache;

@end
