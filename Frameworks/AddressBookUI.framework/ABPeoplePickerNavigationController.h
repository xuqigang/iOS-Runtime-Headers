/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, ABModel, <ABStyleProvider>, <ABPeoplePickerNavigationControllerDelegate>;

@interface ABPeoplePickerNavigationController : UINavigationController  {
    void *_addressBook;
    id _peoplePickerDelegate;
    ABModel *_model;
    int _behavior;
    struct __CFArray { } *_displayedProperties;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    NSArray *_defaultToolbarItems;
    id _insertionValue;
    int _insertionProperty;
    struct { 
        unsigned int allowsEditing : 1; 
        unsigned int allowsCancel : 1; 
        unsigned int allowsActions : 1; 
        unsigned int allowsConferencing : 1; 
        unsigned int allowsSounds : 1; 
        unsigned int hidesSearchableStores : 1; 
    } _flags;
}

@property(copy) NSArray * displayedProperties;
@property void* addressBook;
@property(setter=ab_setDefaultToolbarItems:,retain) NSArray * ab_defaultToolbarItems;
@property <ABPeoplePickerNavigationControllerDelegate> * peoplePickerDelegate;
@property(retain) <ABStyleProvider> * styleProvider;

+ (void)notifyPreferencesChanged;

- (id)initWithAddressBook:(void*)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)setPrompt:(id)arg1 forViewControllerType:(int)arg2;
- (void)setAddressBook:(void*)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1;
- (void)addChildViewController:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (id)model;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_allowsAutorotation;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setPrompt:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)loadState;
- (int)behavior;
- (void)setBehavior:(int)arg1;
- (void)setPeoplePickerDelegate:(id)arg1;
- (id)insertionValue;
- (int)insertionProperty;
- (void)setInsertionValue:(id)arg1 property:(int)arg2;
- (id)peoplePickerDelegate;
- (void)setAllowsCardEditing:(BOOL)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setAllowsConferencing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (BOOL)allowsCancel;
- (BOOL)allowsCardEditing;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (id)ab_defaultToolbarItems;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2;
- (id)initAsAddressBook:(BOOL)arg1 withStyle:(int)arg2;
- (id)initAsAddressBook:(BOOL)arg1;
- (void)notePreferencesChanged;
- (void)setupInitialStackAndLoadState:(BOOL)arg1;
- (void)membersViewControllerClearEditDelegate:(id)arg1;
- (void)showPerson:(void*)arg1;
- (void)_applicationEnteringForeground;
- (void)setStyleProvider:(id)arg1;
- (void)setAllowsRingtone:(BOOL)arg1;
- (BOOL)_shouldPreventCancelButtonsFromShowing;
- (BOOL)allowsActions;
- (id)bannerTitle;
- (id)bannerValue;
- (void)popToDefaultViewController:(BOOL)arg1;
- (BOOL)isDefaultViewControllerVisible;
- (void)hideSearchableStores;
- (id)membersViewController;
- (id)accountsAndGroupsViewController;
- (BOOL)shouldShowGroups;
- (void)_performCancel:(id)arg1;
- (void)_updateViewControllerNavigationButtons;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 forceDisableEditing:(BOOL)arg4 personViewController:(id*)arg5;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 forceDisableEditing:(BOOL)arg4;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5;
- (void)personViewController:(id)arg1 requestedLinkForPerson:(void*)arg2;
- (id)ab_viewControllerToPresentCamera;
- (BOOL)ab_ownsViewControllerToolbarItems:(id)arg1;
- (void)ab_changeViewControllerToolbarItemsIfEmpty:(id)arg1 animated:(BOOL)arg2;
- (void)ab_restoreViewControllerToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)ab_changeViewControllersToolbarItemsIfEmpty:(BOOL)arg1;
- (void)ab_setDefaultToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)ab_setDefaultToolbarItems:(id)arg1;
- (id)promptForViewControllerType:(int)arg1;
- (id)styleProvider;
- (void)setDisplayedProperties:(id)arg1;
- (id)displayedProperties;
- (void)saveState;
- (void*)addressBook;
- (BOOL)ckCanDismissWhenSuspending;

@end