//
//  AppDelegate.h
//  gMailApp
//
//  Created by H. Cole Wiley on 6/12/14.
//  Copyright (c) 2014 WileyCousins. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSWindowDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet WebView *webView;
@property (weak) IBOutlet WebView *loaderView;

@end
