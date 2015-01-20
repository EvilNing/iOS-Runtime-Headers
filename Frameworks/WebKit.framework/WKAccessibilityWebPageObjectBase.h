/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WKAccessibilityWebPageObjectBase : NSObject {
    struct WebPage { int (**x1)(); id x2; int (**x3)(); int (**x4)(); unsigned long long x5; struct unique_ptr<WebCore::Page, std::__1::default_delete<WebCore::Page> > { struct __compressed_pair<WebCore::Page *, std::__1::default_delete<WebCore::Page> > { struct Page {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebKit::WebFrame> { struct WebFrame {} *x_7_1_1; } x7; struct RefPtr<WebKit::InjectedBundleBackForwardList> { struct InjectedBundleBackForwardList {} *x_8_1_1; } x8; struct RefPtr<WebKit::WebPageGroupProxy> { struct WebPageGroupProxy {} *x_9_1_1; } x9; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_10_1_1; } x10; struct IntSize { int x_11_1_1; int x_11_1_2; } x11; struct unique_ptr<WebKit::DrawingArea, std::__1::default_delete<WebKit::DrawingArea> > { struct __compressed_pair<WebKit::DrawingArea *, std::__1::default_delete<WebKit::DrawingArea> > { struct DrawingArea {} *x_1_2_1; } x_12_1_1; } x12; struct HashSet<WebKit::PluginView *, WTF::PtrHash<WebKit::PluginView *>, WTF::HashTraits<WebKit::PluginView *> > { struct HashTable<WebKit::PluginView *, WebKit::PluginView *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::PluginView *>, WTF::HashTraits<WebKit::PluginView *>, WTF::HashTraits<WebKit::PluginView *> > { struct PluginView {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_13_1_1; } x13; boolx14; struct HashMap<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebCore::TextCheckingRequest> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebCore::TextCheckingRequest> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_15_1_1; } x15; boolx16; boolx17; boolx18; struct Color { unsigned int x_19_1_1; boolx_19_1_2; } x19; boolx20; boolx21; boolx22; boolx23; boolx24; boolx25; boolx26; boolx27; boolx28; boolx29; unsigned int x30; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_31_1_1; } x31; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_32_1_1; } x32; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_33_1_1; } x33; struct Timer<WebKit::WebPage> { int (**x_34_1_1)(); struct RunLoop {} *x_34_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_34_1_3; struct WebPage {} *x_34_1_4; } x34; boolx35; int x36; boolx37; boolx38; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_39_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_39_1_2; } x39; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_40_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_40_1_2; } x40; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_41_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_41_1_2; } x41; struct FloatPoint { float x_42_1_1; float x_42_1_2; } x42; struct RetainPtr<WKAccessibilityWebPageObject> { void *x_43_1_1; } x43; struct ViewGestureGeometryCollector { int (**x_44_1_1)(); struct WebPage {} *x_44_1_2; } x44; struct Timer<WebKit::WebPage> { int (**x_45_1_1)(); struct RunLoop {} *x_45_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_45_1_3; struct WebPage {} *x_45_1_4; } x45; boolx46; struct HashMap<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::WebUndoStep> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::WebUndoStep> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_47_1_1; } x47; struct IntSize { int x_48_1_1; int x_48_1_2; } x48; struct InjectedBundlePageEditorClient { struct WKBundlePageEditorClientV1 { struct WKBundlePageEditorClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); int (*x_1_2_6)(); int (*x_1_2_7)(); int (*x_1_2_8)(); int (*x_1_2_9)(); int (*x_1_2_10)(); int (*x_1_2_11)(); int (*x_1_2_12)(); int (*x_1_2_13)(); int (*x_1_2_14)(); int (*x_1_2_15)(); } x_49_1_1; } x49; struct unique_ptr<API::InjectedBundle::FormClient, std::__1::default_delete<API::InjectedBundle::FormClient> > { struct __compressed_pair<API::InjectedBundle::FormClient *, std::__1::default_delete<API::InjectedBundle::FormClient> > { struct FormClient {} *x_1_2_1; } x_50_1_1; } x50; struct InjectedBundlePageLoaderClient { struct WKBundlePageLoaderClientV8 { struct WKBundlePageLoaderClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); int (*x_1_2_6)(); int (*x_1_2_7)(); int (*x_1_2_8)(); int (*x_1_2_9)(); int (*x_1_2_10)(); int (*x_1_2_11)(); int (*x_1_2_12)(); int (*x_1_2_13)(); int (*x_1_2_14)(); int (*x_1_2_15)(); int (*x_1_2_16)(); int (*x_1_2_17)(); int (*x_1_2_18)(); int (*x_1_2_19)(); int (*x_1_2_20)(); void *x_1_2_21; int (*x_1_2_22)(); int (*x_1_2_23)(); int (*x_1_2_24)(); int (*x_1_2_25)(); int (*x_1_2_26)(); int (*x_1_2_27)(); int (*x_1_2_28)(); int (*x_1_2_29)(); void *x_1_2_30; void *x_1_2_31; int (*x_1_2_32)(); int (*x_1_2_33)(); int (*x_1_2_34)(); int (*x_1_2_35)(); int (*x_1_2_36)(); int (*x_1_2_37)(); } x_51_1_1; } x51; struct InjectedBundlePagePolicyClient { struct WKBundlePagePolicyClientV0 { struct WKBundlePagePolicyClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); } x_52_1_1; } x52; struct InjectedBundlePageResourceLoadClient { struct WKBundlePageResourceLoadClientV1 { struct WKBundlePageResourceLoadClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); int (*x_1_2_6)(); int (*x_1_2_7)(); int (*x_1_2_8)(); int (*x_1_2_9)(); } x_53_1_1; } x53; struct unique_ptr<API::InjectedBundle::PageUIClient, std::__1::default_delete<API::InjectedBundle::PageUIClient> > { struct __compressed_pair<API::InjectedBundle::PageUIClient *, std::__1::default_delete<API::InjectedBundle::PageUIClient> > { struct PageUIClient {} *x_1_2_1; } x_54_1_1; } x54; struct InjectedBundlePageDiagnosticLoggingClient { struct WKBundlePageDiagnosticLoggingClientV0 { struct WKBundlePageDiagnosticLoggingClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); } x_55_1_1; } x55; struct FindController { int (**x_56_1_1)(); struct WebPage {} *x_56_1_2; struct PageOverlay {} *x_56_1_3; boolx_56_1_4; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_5_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_5_2_2; } x_56_1_5; struct Vector<WTF::RefPtr<WebCore::Range>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::Range> {} *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_56_1_6; int x_56_1_7; struct RefPtr<WebKit::PageOverlay> { struct PageOverlay {} *x_8_2_1; } x_56_1_8; struct unique_ptr<WebKit::FindIndicatorOverlayClientIOS, std::__1::default_delete<WebKit::FindIndicatorOverlayClientIOS> > { struct __compressed_pair<WebKit::FindIndicatorOverlayClientIOS *, std::__1::default_delete<WebKit::FindIndicatorOverlayClientIOS> > { struct FindIndicatorOverlayClientIOS {} *x_1_3_1; } x_9_2_1; } x_56_1_9; } x56; struct RefPtr<WebKit::WebInspector> { struct WebInspector {} *x_57_1_1; } x57; struct RefPtr<WebKit::WebVideoFullscreenManager> { struct WebVideoFullscreenManager {} *x_58_1_1; } x58; struct RefPtr<WebKit::WebPopupMenu> { struct WebPopupMenu {} *x_59_1_1; } x59; struct RefPtr<WebKit::WebOpenPanelResultListener> { struct WebOpenPanelResultListener {} *x_60_1_1; } x60; struct RefPtr<WebKit::NotificationPermissionRequestManager> { struct NotificationPermissionRequestManager {} *x_61_1_1; } x61; struct RefPtr<WebKit::WebUserContentController> { struct WebUserContentController {} *x_62_1_1; } x62; struct GeolocationPermissionRequestManager { struct HashMap<unsigned long long, WebCore::Geolocation *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::Geolocation *> > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebCore::Geolocation *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebCore::Geolocation *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WebCore::Geolocation *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::Geolocation *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WebCore::Geolocation *> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_63_1_1; struct HashMap<WebCore::Geolocation *, unsigned long long, WTF::PtrHash<WebCore::Geolocation *>, WTF::HashTraits<WebCore::Geolocation *>, WTF::HashTraits<unsigned long long> > { struct HashTable<WebCore::Geolocation *, WTF::KeyValuePair<WebCore::Geolocation *, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Geolocation *, unsigned long long> >, WTF::PtrHash<WebCore::Geolocation *>, WTF::HashMap<WebCore::Geolocation *, unsigned long long, WTF::PtrHash<WebCore::Geolocation *>, WTF::HashTraits<WebCore::Geolocation *>, WTF::HashTraits<unsigned long long> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Geolocation *> > { struct KeyValuePair<WebCore::Geolocation *, unsigned long long> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_2_2_1; } x_63_1_2; struct WebPage {} *x_63_1_3; } x63; struct unique_ptr<WebCore::PrintContext, std::__1::default_delete<WebCore::PrintContext> > { struct __compressed_pair<WebCore::PrintContext *, std::__1::default_delete<WebCore::PrintContext> > { struct PrintContext {} *x_1_2_1; } x_64_1_1; } x64; struct SandboxExtensionTracker { struct RefPtr<WebKit::SandboxExtension> { struct SandboxExtension {} *x_1_2_1; } x_65_1_1; struct RefPtr<WebKit::SandboxExtension> { struct SandboxExtension {} *x_2_2_1; } x_65_1_2; struct RefPtr<WebKit::SandboxExtension> { struct SandboxExtension {} *x_3_2_1; } x_65_1_3; } x65; struct RefPtr<WebKit::SandboxExtension> { struct SandboxExtension {} *x_66_1_1; } x66; struct Vector<WTF::RefPtr<WebKit::SandboxExtension>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebKit::SandboxExtension> {} *x_67_1_1; unsigned int x_67_1_2; unsigned int x_67_1_3; } x67; boolx68; boolx69; boolx70; boolx71; boolx72; boolx73; boolx74; boolx75; unsigned int x76; unsigned int x77; struct HashSet<unsigned long, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long> > { struct HashTable<unsigned long, unsigned long, WTF::IdentityExtractor, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<unsigned long> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_78_1_1; } x78; struct IntSize { int x_79_1_1; int x_79_1_2; } x79; boolx80; struct RefPtr<WebCore::Node> { struct Node {} *x_81_1_1; } x81; struct RefPtr<WebCore::Range> { struct Range {} *x_82_1_1; } x82; struct RefPtr<WebCore::Node> { struct Node {} *x_83_1_1; } x83; struct IntPoint { int x_84_1_1; int x_84_1_2; } x84; struct RefPtr<WebCore::Node> { struct Node {} *x_85_1_1; } x85; struct FloatPoint { float x_86_1_1; float x_86_1_2; } x86; struct ViewportConfiguration { struct Parameters { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; boolx_1_2_6; boolx_1_2_7; boolx_1_2_8; boolx_1_2_9; } x_87_1_1; struct Parameters { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; boolx_2_2_6; boolx_2_2_7; boolx_2_2_8; boolx_2_2_9; } x_87_1_2; struct IntSize { int x_3_2_1; int x_3_2_2; } x_87_1_3; struct FloatSize { float x_4_2_1; float x_4_2_2; } x_87_1_4; struct FloatSize { float x_5_2_1; float x_5_2_2; } x_87_1_5; struct ViewportArguments { int x_6_2_1; float x_6_2_2; float x_6_2_3; float x_6_2_4; float x_6_2_5; float x_6_2_6; float x_6_2_7; float x_6_2_8; float x_6_2_9; float x_6_2_10; float x_6_2_11; float x_6_2_12; boolx_6_2_13; } x_87_1_6; boolx_87_1_7; boolx_87_1_8; } x87; unsigned long long x88; boolx89; boolx90; boolx91; boolx92; boolx93; boolx94; boolx95; boolx96; struct duration<long long, std::__1::ratio<1, 1000> > { long long x_97_1_1; } x97; struct duration<long long, std::__1::ratio<1, 1000> > { long long x_98_1_1; } x98; struct FloatSize { float x_99_1_1; float x_99_1_2; } x99; struct FloatSize { float x_100_1_1; float x_100_1_2; } x100; struct RefPtr<WebCore::Range> { struct Range {} *x_101_1_1; } x101; struct IntSize { int x_102_1_1; int x_102_1_2; } x102; struct FloatSize { float x_103_1_1; float x_103_1_2; } x103; int x104; boolx105; struct HashMap<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint, WTF::PairHash<WebCore::IntSize, double>, WTF::HashTraits<std::__1::pair<WebCore::IntSize, double> >, WTF::HashTraits<WebCore::IntPoint> > { struct HashTable<std::__1::pair<WebCore::IntSize, double>, WTF::KeyValuePair<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint> >, WTF::PairHash<WebCore::IntSize, double>, WTF::HashMap<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint, WTF::PairHash<WebCore::IntSize, double>, WTF::HashTraits<std::__1::pair<WebCore::IntSize, double> >, WTF::HashTraits<WebCore::IntPoint> >::KeyValuePairTraits, WTF::HashTraits<std::__1::pair<WebCore::IntSize, double> > > { struct KeyValuePair<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_106_1_1; } x106; struct RefPtr<WebCore::Node> { struct Node {} *x_107_1_1; } x107; struct FloatPoint { float x_108_1_1; float x_108_1_2; } x108; struct WebInspectorClient {} *x109; struct HashSet<WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_110_1_1; } x110; struct Color { unsigned int x_111_1_1; boolx_111_1_2; } x111; struct HashSet<unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_112_1_1; } x112; unsigned int x113; int x114; boolx115; unsigned int x116; struct UserActivity { struct UserActivity {} *x_117_1_1; double x_117_1_2; boolx_117_1_3; struct Timer<WebCore::HysteresisActivity<WebCore::UserActivity> > { int (**x_4_2_1)(); double x_4_2_2; double x_4_2_3; double x_4_2_4; int x_4_2_5; unsigned int x_4_2_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_4_2_7; struct function<void ()>={type=[24C] {} x_4_2_8; struct __base<void ()> {} *x_4_2_9; } x_117_1_4; } x117; struct Impl { } x118; } *m_page;
    id m_parent;
}

- (id)accessibilityFocusedUIElement;
- (id)accessibilityRootObjectWrapper;
- (void)setRemoteParent:(id)arg1;
- (void)setWebPage:(struct WebPage { int (**x1)(); id x2; int (**x3)(); int (**x4)(); unsigned long long x5; struct unique_ptr<WebCore::Page, std::__1::default_delete<WebCore::Page> > { struct __compressed_pair<WebCore::Page *, std::__1::default_delete<WebCore::Page> > { struct Page {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebKit::WebFrame> { struct WebFrame {} *x_7_1_1; } x7; struct RefPtr<WebKit::InjectedBundleBackForwardList> { struct InjectedBundleBackForwardList {} *x_8_1_1; } x8; struct RefPtr<WebKit::WebPageGroupProxy> { struct WebPageGroupProxy {} *x_9_1_1; } x9; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_10_1_1; } x10; struct IntSize { int x_11_1_1; int x_11_1_2; } x11; struct unique_ptr<WebKit::DrawingArea, std::__1::default_delete<WebKit::DrawingArea> > { struct __compressed_pair<WebKit::DrawingArea *, std::__1::default_delete<WebKit::DrawingArea> > { struct DrawingArea {} *x_1_2_1; } x_12_1_1; } x12; struct HashSet<WebKit::PluginView *, WTF::PtrHash<WebKit::PluginView *>, WTF::HashTraits<WebKit::PluginView *> > { struct HashTable<WebKit::PluginView *, WebKit::PluginView *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::PluginView *>, WTF::HashTraits<WebKit::PluginView *>, WTF::HashTraits<WebKit::PluginView *> > { struct PluginView {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_13_1_1; } x13; boolx14; struct HashMap<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebCore::TextCheckingRequest> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebCore::TextCheckingRequest> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebCore::TextCheckingRequest> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_15_1_1; } x15; boolx16; boolx17; boolx18; struct Color { unsigned int x_19_1_1; boolx_19_1_2; } x19; boolx20; boolx21; boolx22; boolx23; boolx24; boolx25; boolx26; boolx27; boolx28; boolx29; unsigned int x30; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_31_1_1; } x31; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_32_1_1; } x32; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_33_1_1; } x33; struct Timer<WebKit::WebPage> { int (**x_34_1_1)(); struct RunLoop {} *x_34_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_34_1_3; struct WebPage {} *x_34_1_4; } x34; boolx35; int x36; boolx37; boolx38; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_39_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_39_1_2; } x39; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_40_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_40_1_2; } x40; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_41_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_41_1_2; } x41; struct FloatPoint { float x_42_1_1; float x_42_1_2; } x42; struct RetainPtr<WKAccessibilityWebPageObject> { void *x_43_1_1; } x43; struct ViewGestureGeometryCollector { int (**x_44_1_1)(); struct WebPage {} *x_44_1_2; } x44; struct Timer<WebKit::WebPage> { int (**x_45_1_1)(); struct RunLoop {} *x_45_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_45_1_3; struct WebPage {} *x_45_1_4; } x45; boolx46; struct HashMap<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::WebUndoStep> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RefPtr<WebKit::WebUndoStep> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RefPtr<WebKit::WebUndoStep> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_47_1_1; } x47; struct IntSize { int x_48_1_1; int x_48_1_2; } x48; struct InjectedBundlePageEditorClient { struct WKBundlePageEditorClientV1 { struct WKBundlePageEditorClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); int (*x_1_2_6)(); int (*x_1_2_7)(); int (*x_1_2_8)(); int (*x_1_2_9)(); int (*x_1_2_10)(); int (*x_1_2_11)(); int (*x_1_2_12)(); int (*x_1_2_13)(); int (*x_1_2_14)(); int (*x_1_2_15)(); } x_49_1_1; } x49; struct unique_ptr<API::InjectedBundle::FormClient, std::__1::default_delete<API::InjectedBundle::FormClient> > { struct __compressed_pair<API::InjectedBundle::FormClient *, std::__1::default_delete<API::InjectedBundle::FormClient> > { struct FormClient {} *x_1_2_1; } x_50_1_1; } x50; struct InjectedBundlePageLoaderClient { struct WKBundlePageLoaderClientV8 { struct WKBundlePageLoaderClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); int (*x_1_2_6)(); int (*x_1_2_7)(); int (*x_1_2_8)(); int (*x_1_2_9)(); int (*x_1_2_10)(); int (*x_1_2_11)(); int (*x_1_2_12)(); int (*x_1_2_13)(); int (*x_1_2_14)(); int (*x_1_2_15)(); int (*x_1_2_16)(); int (*x_1_2_17)(); int (*x_1_2_18)(); int (*x_1_2_19)(); int (*x_1_2_20)(); void *x_1_2_21; int (*x_1_2_22)(); int (*x_1_2_23)(); int (*x_1_2_24)(); int (*x_1_2_25)(); int (*x_1_2_26)(); int (*x_1_2_27)(); int (*x_1_2_28)(); int (*x_1_2_29)(); void *x_1_2_30; void *x_1_2_31; int (*x_1_2_32)(); int (*x_1_2_33)(); int (*x_1_2_34)(); int (*x_1_2_35)(); int (*x_1_2_36)(); int (*x_1_2_37)(); } x_51_1_1; } x51; struct InjectedBundlePagePolicyClient { struct WKBundlePagePolicyClientV0 { struct WKBundlePagePolicyClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); } x_52_1_1; } x52; struct InjectedBundlePageResourceLoadClient { struct WKBundlePageResourceLoadClientV1 { struct WKBundlePageResourceLoadClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); int (*x_1_2_3)(); int (*x_1_2_4)(); int (*x_1_2_5)(); int (*x_1_2_6)(); int (*x_1_2_7)(); int (*x_1_2_8)(); int (*x_1_2_9)(); } x_53_1_1; } x53; struct unique_ptr<API::InjectedBundle::PageUIClient, std::__1::default_delete<API::InjectedBundle::PageUIClient> > { struct __compressed_pair<API::InjectedBundle::PageUIClient *, std::__1::default_delete<API::InjectedBundle::PageUIClient> > { struct PageUIClient {} *x_1_2_1; } x_54_1_1; } x54; struct InjectedBundlePageDiagnosticLoggingClient { struct WKBundlePageDiagnosticLoggingClientV0 { struct WKBundlePageDiagnosticLoggingClientBase { int x_1_3_1; void *x_1_3_2; } x_1_2_1; int (*x_1_2_2)(); } x_55_1_1; } x55; struct FindController { int (**x_56_1_1)(); struct WebPage {} *x_56_1_2; struct PageOverlay {} *x_56_1_3; boolx_56_1_4; struct IntRect { struct IntPoint { int x_1_3_1; int x_1_3_2; } x_5_2_1; struct IntSize { int x_2_3_1; int x_2_3_2; } x_5_2_2; } x_56_1_5; struct Vector<WTF::RefPtr<WebCore::Range>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebCore::Range> {} *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_56_1_6; int x_56_1_7; struct RefPtr<WebKit::PageOverlay> { struct PageOverlay {} *x_8_2_1; } x_56_1_8; struct unique_ptr<WebKit::FindIndicatorOverlayClientIOS, std::__1::default_delete<WebKit::FindIndicatorOverlayClientIOS> > { struct __compressed_pair<WebKit::FindIndicatorOverlayClientIOS *, std::__1::default_delete<WebKit::FindIndicatorOverlayClientIOS> > { struct FindIndicatorOverlayClientIOS {} *x_1_3_1; } x_9_2_1; } x_56_1_9; } x56; struct RefPtr<WebKit::WebInspector> { struct WebInspector {} *x_57_1_1; } x57; struct RefPtr<WebKit::WebVideoFullscreenManager> { struct WebVideoFullscreenManager {} *x_58_1_1; } x58; struct RefPtr<WebKit::WebPopupMenu> { struct WebPopupMenu {} *x_59_1_1; } x59; struct RefPtr<WebKit::WebOpenPanelResultListener> { struct WebOpenPanelResultListener {} *x_60_1_1; } x60; struct RefPtr<WebKit::NotificationPermissionRequestManager> { struct NotificationPermissionRequestManager {} *x_61_1_1; } x61; struct RefPtr<WebKit::WebUserContentController> { struct WebUserContentController {} *x_62_1_1; } x62; struct GeolocationPermissionRequestManager { struct HashMap<unsigned long long, WebCore::Geolocation *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::Geolocation *> > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebCore::Geolocation *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebCore::Geolocation *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WebCore::Geolocation *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::Geolocation *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WebCore::Geolocation *> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_1_2_1; } x_63_1_1; struct HashMap<WebCore::Geolocation *, unsigned long long, WTF::PtrHash<WebCore::Geolocation *>, WTF::HashTraits<WebCore::Geolocation *>, WTF::HashTraits<unsigned long long> > { struct HashTable<WebCore::Geolocation *, WTF::KeyValuePair<WebCore::Geolocation *, unsigned long long>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::Geolocation *, unsigned long long> >, WTF::PtrHash<WebCore::Geolocation *>, WTF::HashMap<WebCore::Geolocation *, unsigned long long, WTF::PtrHash<WebCore::Geolocation *>, WTF::HashTraits<WebCore::Geolocation *>, WTF::HashTraits<unsigned long long> >::KeyValuePairTraits, WTF::HashTraits<WebCore::Geolocation *> > { struct KeyValuePair<WebCore::Geolocation *, unsigned long long> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_2_2_1; } x_63_1_2; struct WebPage {} *x_63_1_3; } x63; struct unique_ptr<WebCore::PrintContext, std::__1::default_delete<WebCore::PrintContext> > { struct __compressed_pair<WebCore::PrintContext *, std::__1::default_delete<WebCore::PrintContext> > { struct PrintContext {} *x_1_2_1; } x_64_1_1; } x64; struct SandboxExtensionTracker { struct RefPtr<WebKit::SandboxExtension> { struct SandboxExtension {} *x_1_2_1; } x_65_1_1; struct RefPtr<WebKit::SandboxExtension> { struct SandboxExtension {} *x_2_2_1; } x_65_1_2; struct RefPtr<WebKit::SandboxExtension> { struct SandboxExtension {} *x_3_2_1; } x_65_1_3; } x65; struct RefPtr<WebKit::SandboxExtension> { struct SandboxExtension {} *x_66_1_1; } x66; struct Vector<WTF::RefPtr<WebKit::SandboxExtension>, 0, WTF::CrashOnOverflow> { struct RefPtr<WebKit::SandboxExtension> {} *x_67_1_1; unsigned int x_67_1_2; unsigned int x_67_1_3; } x67; boolx68; boolx69; boolx70; boolx71; boolx72; boolx73; boolx74; boolx75; unsigned int x76; unsigned int x77; struct HashSet<unsigned long, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long> > { struct HashTable<unsigned long, unsigned long, WTF::IdentityExtractor, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<unsigned long> > { unsigned long long *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_78_1_1; } x78; struct IntSize { int x_79_1_1; int x_79_1_2; } x79; boolx80; struct RefPtr<WebCore::Node> { struct Node {} *x_81_1_1; } x81; struct RefPtr<WebCore::Range> { struct Range {} *x_82_1_1; } x82; struct RefPtr<WebCore::Node> { struct Node {} *x_83_1_1; } x83; struct IntPoint { int x_84_1_1; int x_84_1_2; } x84; struct RefPtr<WebCore::Node> { struct Node {} *x_85_1_1; } x85; struct FloatPoint { float x_86_1_1; float x_86_1_2; } x86; struct ViewportConfiguration { struct Parameters { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; boolx_1_2_6; boolx_1_2_7; boolx_1_2_8; boolx_1_2_9; } x_87_1_1; struct Parameters { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; double x_2_2_5; boolx_2_2_6; boolx_2_2_7; boolx_2_2_8; boolx_2_2_9; } x_87_1_2; struct IntSize { int x_3_2_1; int x_3_2_2; } x_87_1_3; struct FloatSize { float x_4_2_1; float x_4_2_2; } x_87_1_4; struct FloatSize { float x_5_2_1; float x_5_2_2; } x_87_1_5; struct ViewportArguments { int x_6_2_1; float x_6_2_2; float x_6_2_3; float x_6_2_4; float x_6_2_5; float x_6_2_6; float x_6_2_7; float x_6_2_8; float x_6_2_9; float x_6_2_10; float x_6_2_11; float x_6_2_12; boolx_6_2_13; } x_87_1_6; boolx_87_1_7; boolx_87_1_8; } x87; unsigned long long x88; boolx89; boolx90; boolx91; boolx92; boolx93; boolx94; boolx95; boolx96; struct duration<long long, std::__1::ratio<1, 1000> > { long long x_97_1_1; } x97; struct duration<long long, std::__1::ratio<1, 1000> > { long long x_98_1_1; } x98; struct FloatSize { float x_99_1_1; float x_99_1_2; } x99; struct FloatSize { float x_100_1_1; float x_100_1_2; } x100; struct RefPtr<WebCore::Range> { struct Range {} *x_101_1_1; } x101; struct IntSize { int x_102_1_1; int x_102_1_2; } x102; struct FloatSize { float x_103_1_1; float x_103_1_2; } x103; int x104; boolx105; struct HashMap<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint, WTF::PairHash<WebCore::IntSize, double>, WTF::HashTraits<std::__1::pair<WebCore::IntSize, double> >, WTF::HashTraits<WebCore::IntPoint> > { struct HashTable<std::__1::pair<WebCore::IntSize, double>, WTF::KeyValuePair<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint> >, WTF::PairHash<WebCore::IntSize, double>, WTF::HashMap<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint, WTF::PairHash<WebCore::IntSize, double>, WTF::HashTraits<std::__1::pair<WebCore::IntSize, double> >, WTF::HashTraits<WebCore::IntPoint> >::KeyValuePairTraits, WTF::HashTraits<std::__1::pair<WebCore::IntSize, double> > > { struct KeyValuePair<std::__1::pair<WebCore::IntSize, double>, WebCore::IntPoint> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_106_1_1; } x106; struct RefPtr<WebCore::Node> { struct Node {} *x_107_1_1; } x107; struct FloatPoint { float x_108_1_1; float x_108_1_2; } x108; struct WebInspectorClient {} *x109; struct HashSet<WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::String, WTF::IdentityExtractor, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_110_1_1; } x110; struct Color { unsigned int x_111_1_1; boolx_111_1_2; } x111; struct HashSet<unsigned int, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WTF::IntHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_112_1_1; } x112; unsigned int x113; int x114; boolx115; unsigned int x116; struct UserActivity { struct UserActivity {} *x_117_1_1; double x_117_1_2; boolx_117_1_3; struct Timer<WebCore::HysteresisActivity<WebCore::UserActivity> > { int (**x_4_2_1)(); double x_4_2_2; double x_4_2_3; double x_4_2_4; int x_4_2_5; unsigned int x_4_2_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_4_2_7; struct function<void ()>={type=[24C] {} x_4_2_8; struct __base<void ()> {} *x_4_2_9; } x_117_1_4; } x117; struct Impl { } x118; }*)arg1;

@end
