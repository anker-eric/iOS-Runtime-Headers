/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSectionMetrics : GKGridLayoutMetrics {
    unsigned int _alignment;
    float _calculatedItemHeightCache;
    float _desiredItemHeight;
    float _desiredItemWidth;
    float _flowColumnWidth;
    unsigned int _flowMaxColumnCount;
    BOOL _incrementalRevealConsumesPadding;
    unsigned int _incrementalRevealItemCount;
    float _interitemSpacing;
    NSDictionary *_itemHeightList;
    unsigned int _lastLineItemAlignment;
    float _lineSpacing;
    float _marginBetweenItems;
    unsigned int _maximumVisibleItemCount;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _padding;
    BOOL _shouldAlwaysIncludeShowMore;
    BOOL _shouldShowSectionHeadersWhenNoItems;
    BOOL _useViewSizeForFlowMaxColumnCount;
}

@property (nonatomic) unsigned int alignment;
@property (nonatomic, readonly) float calculatedItemHeight;
@property (nonatomic) float calculatedItemHeightCache;
@property (nonatomic) float desiredItemHeight;
@property (nonatomic) float desiredItemWidth;
@property (nonatomic) float flowColumnWidth;
@property (nonatomic) unsigned int flowMaxColumnCount;
@property (nonatomic) BOOL incrementalRevealConsumesPadding;
@property (nonatomic) unsigned int incrementalRevealItemCount;
@property (nonatomic) float interitemSpacing;
@property (nonatomic, retain) NSDictionary *itemHeightList;
@property (nonatomic) unsigned int lastLineItemAlignment;
@property (nonatomic) float lineSpacing;
@property (nonatomic) float marginBetweenItems;
@property (nonatomic) unsigned int maximumVisibleItemCount;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } padding;
@property (nonatomic) float sectionHeaderHeight;
@property (nonatomic) BOOL sectionHeadersShouldPin;
@property (nonatomic) BOOL shouldAlwaysIncludeShowMore;
@property (nonatomic) BOOL shouldShowSectionHeadersWhenNoItems;
@property (nonatomic) float showMoreHeight;
@property (nonatomic) BOOL useViewSizeForFlowMaxColumnCount;

+ (id)metricsForIdiom:(int)arg1;

- (unsigned int)alignment;
- (float)calculatedItemHeight;
- (float)calculatedItemHeightCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (float)desiredItemHeight;
- (float)desiredItemWidth;
- (float)flowColumnWidth;
- (unsigned int)flowMaxColumnCount;
- (unsigned int)flowMaxColumnCountForViewWidth:(float)arg1;
- (BOOL)incrementalRevealConsumesPadding;
- (unsigned int)incrementalRevealItemCount;
- (id)init;
- (id)initWithIdiom:(int)arg1;
- (float)interitemSpacing;
- (BOOL)isEqual:(id)arg1;
- (id)itemHeightList;
- (struct CGSize { float x1; float x2; })itemSizeForCollectionView:(id)arg1;
- (unsigned int)lastLineItemAlignment;
- (float)lineSpacing;
- (id)localDescription;
- (float)marginBetweenItems;
- (unsigned int)maximumVisibleItemCount;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })padding;
- (float)sectionHeaderHeight;
- (BOOL)sectionHeadersShouldPin;
- (void)setAlignment:(unsigned int)arg1;
- (void)setCalculatedItemHeightCache:(float)arg1;
- (void)setDesiredItemHeight:(float)arg1;
- (void)setDesiredItemWidth:(float)arg1;
- (void)setFlowColumnWidth:(float)arg1;
- (void)setFlowMaxColumnCount:(unsigned int)arg1;
- (void)setIncrementalRevealConsumesPadding:(BOOL)arg1;
- (void)setIncrementalRevealItemCount:(unsigned int)arg1;
- (void)setInteritemSpacing:(float)arg1;
- (void)setItemHeightList:(id)arg1;
- (void)setLastLineItemAlignment:(unsigned int)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setMarginBetweenItems:(float)arg1;
- (void)setMaximumVisibleItemCount:(unsigned int)arg1;
- (void)setPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSectionHeaderHeight:(float)arg1;
- (void)setSectionHeadersShouldPin:(BOOL)arg1;
- (void)setShouldAlwaysIncludeShowMore:(BOOL)arg1;
- (void)setShouldShowSectionHeadersWhenNoItems:(BOOL)arg1;
- (void)setShowMoreHeight:(float)arg1;
- (void)setUseViewSizeForFlowMaxColumnCount:(BOOL)arg1;
- (BOOL)shouldAlwaysIncludeShowMore;
- (BOOL)shouldShowSectionHeadersWhenNoItems;
- (float)showMoreHeight;
- (BOOL)useViewSizeForFlowMaxColumnCount;

@end