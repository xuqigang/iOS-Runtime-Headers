/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface MLSQLOrderBy : MLSQLCode  {
    NSString *_indexCharSelectionString;
    NSString *_displayColumnName;
    BOOL _descending;
}

@property BOOL descending;

+ (id)expressionToken;

- (id)_text;
- (void)dealloc;
- (id)initWithOrderColumnsString:(id)arg1 indexCharSelectionString:(id)arg2 displayColumnName:(id)arg3;
- (id)orderColumnsString;
- (id)indexCharSelectionString;
- (id)displayColumnName;
- (BOOL)descending;
- (void)setDescending:(BOOL)arg1;

@end