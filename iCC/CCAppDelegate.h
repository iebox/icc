//
//  CCAppDelegate.h
//  iCC
//
//  Created by mike on 3/16/14.
//  Copyright (c) 2014 mike. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface CCAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
