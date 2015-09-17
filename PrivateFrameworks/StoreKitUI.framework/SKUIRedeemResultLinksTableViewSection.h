/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemResultLinksTableViewSection : SKUITableViewSection {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    NSArray *_links;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithLinks:(id)arg1;
- (int)numberOfRowsInSection;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end