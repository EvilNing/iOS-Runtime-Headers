/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MFMessageBodyElement_Private>, NSMutableArray;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {
    id _foundTextBlock;
    id _foundWhitespaceBlock;
    <MFMessageBodyElement_Private> *_lastNonWhitespaceTextElement;
    NSMutableArray *_lastTextElements;
    bool_foundForwardSeparator;
    bool_foundText;
}

- (void)_consumeAnyLastTextElementAsAttribution:(bool)arg1;
- (void)_consumeTextElement:(id)arg1 isAttribution:(bool)arg2;
- (void)copyBlocks;
- (void)dealloc;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)messageBodyParserDidFinishParsing:(id)arg1;
- (void)setFoundTextBlock:(id)arg1;
- (void)setFoundWhitespaceBlock:(id)arg1;

@end
