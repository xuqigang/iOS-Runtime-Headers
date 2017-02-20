/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVShelfViewLayout : UICollectionViewLayout {
    float  _headerBottomMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _headerReferenceSize;
    float  _headerSelectionMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _itemSize;
    _TVShelfLayoutHelper * _layoutHelper;
    float  _minimumInteritemSpacing;
    float  _minimumLineSpacing;
    int  _rowCount;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _sectionInset;
    NSArray * _shelfLayoutSections;
}

@property (nonatomic) float headerBottomMargin;
@property (nonatomic) struct CGSize { float x1; float x2; } headerReferenceSize;
@property (nonatomic) float headerSelectionMargin;
@property (nonatomic) struct CGSize { float x1; float x2; } itemSize;
@property (nonatomic, retain) _TVShelfLayoutHelper *layoutHelper;
@property (nonatomic) float minimumInteritemSpacing;
@property (nonatomic) float minimumLineSpacing;
@property (nonatomic) int rowCount;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } sectionInset;
@property (nonatomic, retain) NSArray *shelfLayoutSections;

+ (float)defaultHeaderSelectionMargin;

- (void).cxx_destruct;
- (BOOL)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingSelectionFrameForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (float)computedContentHeight;
- (int)computedRowCount;
- (float)headerBottomMargin;
- (struct CGSize { float x1; float x2; })headerReferenceSize;
- (float)headerSelectionMargin;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGSize { float x1; float x2; })itemSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutHelper;
- (float)minimumInteritemSpacing;
- (float)minimumLineSpacing;
- (void)prepareLayout;
- (int)rowCount;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionInset;
- (void)setHeaderBottomMargin:(float)arg1;
- (void)setHeaderReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHeaderSelectionMargin:(float)arg1;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLayoutHelper:(id)arg1;
- (void)setMinimumInteritemSpacing:(float)arg1;
- (void)setMinimumLineSpacing:(float)arg1;
- (void)setRowCount:(int)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setShelfLayoutSections:(id)arg1;
- (id)shelfLayoutSections;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end