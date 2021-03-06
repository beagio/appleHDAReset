//
//  SPAppDelegate.h
//  audioreset
//
//  Created by Michael Clifford on 6/13/14.
//  Copyright (c) 2014 Suite Potato. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <IYLoginItem/NSBundle+LoginItem.h>
#import <SSKeychain/SSKeychain.h>

@interface SPAppDelegate : NSObject <NSApplicationDelegate, NSUserNotificationCenterDelegate>

@property (weak)    IBOutlet NSWindow *aboutWindow;
@property (weak)    IBOutlet NSMenu *audioResetMenu;
@property (weak)    IBOutlet NSButton *hideMenuBarIcon;
@property (weak)    IBOutlet NSSecureTextField *passwordField;
@property (weak)    IBOutlet NSWindow *preferencesWindow;
@property (weak)    IBOutlet NSButton *runOnWake;
@property (strong)  NSStatusItem *statusItem;
@property (weak)    IBOutlet NSButton *useSavedPassword;
@property (weak)    IBOutlet NSMenuItem *resetAppleHDAMenuItem;

@property   BOOL justLaunched;

- (IBAction)closeAboutWindow:(id)sender;
- (IBAction)closePreferencesWindow:(id)sender;
- (IBAction)openAboutWindow:(id)sender;
- (IBAction)openPreferencesWindow:(id)sender;
- (IBAction)resetAppleHDAInBackground:(id)sender;
- (IBAction)toggleAddToLoginItems:(id)sender;
- (IBAction)toggleHideMenuBarIcon:(id)sender;
- (IBAction)toggleUseSavedPassword:(id)sender;

- (NSString *)bundleVersionNumber;
- (void)openWindow:(NSWindow *)window sender:(id)sender;
- (void)receiveWakeNote: (NSNotification*) note;
- (void)resetAppleHDA;
- (void)sendNotification:(NSString *)message;
- (void)setMenuItem;
- (BOOL)userNotificationCenter:(NSUserNotificationCenter *)center shouldPresentNotification:(NSUserNotification *)notification;
- (NSString *)userPassword;
@end