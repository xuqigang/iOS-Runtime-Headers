/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLCollection, NSString;

@interface DOMHTMLTableRowElement : DOMHTMLElement  {
}

@property(readonly) int rowIndex;
@property(readonly) int sectionRowIndex;
@property(retain,readonly) DOMHTMLCollection * cells;
@property(copy) NSString * align;
@property(copy) NSString * bgColor;
@property(copy) NSString * ch;
@property(copy) NSString * chOff;
@property(copy) NSString * vAlign;


- (id)align;
- (id)bgColor;
- (int)rowIndex;
- (void)setBgColor:(id)arg1;
- (void)setAlign:(id)arg1;
- (int)sectionRowIndex;
- (id)cells;
- (id)insertCell:(int)arg1;
- (void)deleteCell:(int)arg1;
- (id)ch;
- (void)setCh:(id)arg1;
- (id)chOff;
- (void)setChOff:(id)arg1;
- (id)vAlign;
- (void)setVAlign:(id)arg1;

@end