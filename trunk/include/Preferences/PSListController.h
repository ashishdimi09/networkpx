/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Preferences/PSViewController.h>
#import <CoreGraphics/CGGeometry.h>

@protocol PSBaseView;
@class NSArray, NSMutableArray, NSMutableDictionary, NSString, PSSpecifier, UIModalView, UIPreferencesTable, UITransitionView, PSSpecifier;

@interface PSListController : PSViewController
{
    NSMutableDictionary *_cells;	// 12 = 0xc
    BOOL _cachesCells;	// 16 = 0x10
    NSString *_title;	// 17 = 0x11
    UITransitionView *_view;	// 21 = 0x15
    UIPreferencesTable *_table;	// 25 = 0x19
    NSArray *_specifiers;	// 29 = 0x1d
    id <PSBaseView> _detailController;	// 33 = 0x21
    id <PSBaseView> _previousController;	// 37 = 0x25
    NSMutableArray *_controllers;	// 41 = 0x29
    NSMutableDictionary *_specifiersByID;	// 45 = 0x2d
    BOOL _keyboardWasVisible;	// 49 = 0x31
    BOOL _showingSetupController;	// 50 = 0x32
    BOOL _selectingRow;	// 51 = 0x33
    NSString *_specifierID;	// 52 = 0x34
    PSSpecifier *_specifier;	// 56 = 0x38
    NSMutableArray *_groups;	// 60 = 0x3c
    NSMutableArray *_bundleControllers;	// 64 = 0x40
    BOOL _bundlesLoaded;	// 68 = 0x44
    CGRect _cellRect;	// 69 = 0x45
    UIModalView *_alertSheet;	// 85 = 0x55
}

+ (BOOL)displaysButtonBar;	
- (void)setCachesCells:(BOOL)fp8;	

- (NSString*)description;	
- (id)table;	
- (id)bundle;	
- (PSSpecifier*)specifier;	
@property(retain) NSArray* specifiers;
- (NSArray*)loadSpecifiersFromPlistName:(NSString*)fp8 target:(id)fp12;	

- (void)reloadSpecifierAtIndex:(int)fp8 animated:(BOOL)fp12;	
- (void)reloadSpecifierAtIndex:(int)fp8;	
- (void)reloadSpecifier:(PSSpecifier*)fp8 animated:(BOOL)fp12;	
- (void)reloadSpecifier:(PSSpecifier*)fp8;	
- (void)reloadSpecifierID:(NSString*)fp8 animated:(BOOL)fp12;	
- (void)reloadSpecifierID:(NSString*)fp8;	

- (int)indexOfSpecifierID:(NSString*)fp8;	
- (int)indexOfSpecifier:(PSSpecifier*)fp8;	
- (BOOL)containsSpecifier:(PSSpecifier*)fp8;	
- (int)indexOfGroup:(int)fp8;	
- (int)numberOfGroups;	
- (PSSpecifier*)specifierAtIndex:(int)fp8;	

- (BOOL)getGroup:(int *)fp8 row:(int *)fp12 ofSpecifierID:(NSString*)fp16;	
- (BOOL)getGroup:(int *)fp8 row:(int *)fp12 ofSpecifier:(PSSpecifier*)fp16;	
- (BOOL)getGroup:(int *)fp8 row:(int *)fp12 ofSpecifierAtIndex:(int)fp16;	
- (int)rowsForGroup:(int)fp8;	
- (NSArray*)specifiersInGroup:(int)fp8;	

- (void)insertSpecifier:(PSSpecifier*)fp8 atIndex:(int)fp12 animated:(BOOL)fp16;	
- (void)insertSpecifier:(PSSpecifier*)fp8 afterSpecifier:(PSSpecifier*)fp12 animated:(BOOL)fp16;	
- (void)insertSpecifier:(PSSpecifier*)fp8 afterSpecifierID:(NSString*)fp12 animated:(BOOL)fp16;	
- (void)insertSpecifier:(PSSpecifier*)fp8 atEndOfGroup:(int)fp12 animated:(BOOL)fp16;	
- (void)insertSpecifier:(PSSpecifier*)fp8 atIndex:(int)fp12;	
- (void)insertSpecifier:(PSSpecifier*)fp8 afterSpecifier:(PSSpecifier*)fp12;	
- (void)insertSpecifier:(PSSpecifier*)fp8 afterSpecifierID:(NSString*)fp12;	
- (void)insertSpecifier:(PSSpecifier*)fp8 atEndOfGroup:(int)fp12;	

- (void)insertContiguousSpecifiers:(NSArray*)fp8 atIndex:(int)fp12 animated:(BOOL)fp16;	
- (void)insertContiguousSpecifiers:(NSArray*)fp8 afterSpecifier:(PSSpecifier*)fp12 animated:(BOOL)fp16;	
- (void)insertContiguousSpecifiers:(NSArray*)fp8 afterSpecifierID:(NSString*)fp12 animated:(BOOL)fp16;	
- (void)insertContiguousSpecifiers:(NSArray*)fp8 atEndOfGroup:(int)fp12 animated:(BOOL)fp16;	
- (void)insertContiguousSpecifiers:(NSArray*)fp8 atIndex:(int)fp12;	
- (void)insertContiguousSpecifiers:(NSArray*)fp8 afterSpecifier:(PSSpecifier*)fp12;	
- (void)insertContiguousSpecifiers:(NSArray*)fp8 afterSpecifierID:(NSString*)fp12;	
- (void)insertContiguousSpecifiers:(NSArray*)fp8 atEndOfGroup:(int)fp12;	

- (void)addSpecifier:(PSSpecifier*)fp8;	
- (void)addSpecifier:(PSSpecifier*)fp8 animated:(BOOL)fp12;	
- (void)addSpecifiersFromArray:(NSArray*)fp8;	
- (void)addSpecifiersFromArray:(NSArray*)fp8 animated:(BOOL)fp12;	

- (void)removeSpecifier:(PSSpecifier*)fp8 animated:(BOOL)fp12;	
- (void)removeSpecifierID:(NSString*)fp8 animated:(BOOL)fp12;	
- (void)removeSpecifierAtIndex:(int)fp8 animated:(BOOL)fp12;	
- (void)removeSpecifier:(PSSpecifier*)fp8;	
- (void)removeSpecifierID:(NSString*)fp8;	
- (void)removeSpecifierAtIndex:(int)fp8;	

- (void)removeLastSpecifier;	
- (void)removeLastSpecifierAnimated:(BOOL)fp8;	

- (void)removeContiguousSpecifiers:(NSArray*)fp8 animated:(BOOL)fp12;	
- (void)removeContiguousSpecifiers:(NSArray*)fp8;	

- (void)replaceContiguousSpecifiers:(NSArray*)fp8 withSpecifiers:(NSArray*)fp12;	
- (void)replaceContiguousSpecifiers:(NSArray*)fp8 withSpecifiers:(NSArray*)fp12 animated:(BOOL)fp16;	

- (void)suspend;	
- (void)dealloc;	

- (id)initForContentSize:(CGSize)fp8;	

- (NSString*)navigationTitle;	
- (void)createGroupIndices;	
- (void)loseFocus;	

- (void)reload;	
- (void)reloadSpecifiers;	
@property(copy) NSString* specifierID;
@property(copy) NSString* title;

- (void)viewDidBecomeVisible;	
- (void)viewWillRedisplay;	

- (int)numberOfGroupsInPreferencesTable:(id)fp8;	
- (BOOL)preferencesTable:(id)fp8 isLabelGroup:(int)fp12;	
- (int)preferencesTable:(id)fp8 numberOfRowsInGroup:(int)fp12;	
- (id)lastController;	
- (id)cachedCellForSpecifier:(id)fp8;	
- (id)cachedCellForSpecifierID:(id)fp8;	
- (id)table:(id)fp8 cellForRow:(int)fp12 column:(id)fp16;	
- (float)preferencesTable:(id)fp8 heightForRow:(int)fp12 inGroup:(int)fp16 withProposedHeight:(float)fp20;	
- (id)preferencesTable:(id)fp8 titleForGroup:(int)fp12;	
- (id)preferencesTable:(id)fp8 cellForGroup:(int)fp12;	
- (id)preferencesTable:(id)fp8 cellForRow:(int)fp12 inGroup:(int)fp16;	
- (void)viewWillBecomeVisible:(void *)fp8;	
- (void)_unselectTable;	
- (void)selectRowWithoutNotification:(int)fp8;	
- (void)showConfirmationSheetForSpecifier:(id)fp8;	
- (BOOL)performActionForSpecifier:(id)fp8;	
- (void)tableSelectionDidChange:(id)fp8;	
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	
- (void)_insertControllerUnderSetupController:(id)fp8;	

- (PSSpecifier*)specifierForID:(NSString*)fp8;	

- (void)pushController:(id)fp8 animate:(BOOL)fp12;	
- (void)pushController:(id)fp8;	
- (void)handleURL:(id)fp8;	
- (void)transitionViewDidComplete:(id)fp8;	
- (UIView*)view;	
- (BOOL)popController;	
- (void)_clearParentControllerFromChildren;	
- (void)_removeController;	
- (BOOL)popControllerWithAnimation:(BOOL)fp8;	
- (void)navigationBarButtonClicked:(int)fp8;	
- (void)reloadIconForSpecifierForBundle:(id)fp8;	
- (void)showKeyboardWithKeyboardType:(int)fp8;	

@end

