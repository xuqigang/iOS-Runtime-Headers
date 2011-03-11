/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDOneCellAnchor : EDAnchor  {
    struct EDCellAnchorMarker { 
        int columnIndex; 
        float columnAdjustment; 
        int rowIndex; 
        float rowAdjustment; 
    } mFrom;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    BOOL mIsRelative;
}


- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setRelative:(BOOL)arg1;
- (void)setFrom:(struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })arg1;
- (id).cxx_construct;
- (struct EDCellAnchorMarker { int x1; float x2; int x3; float x4; })from;
- (BOOL)isRelative;

@end