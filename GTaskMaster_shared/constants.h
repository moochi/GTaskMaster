//
//  constants.h
//  GTaskMaster_Mac
//
//  Created by Kurt Hardin on 6/25/12.
//  Copyright (c) 2012 Kurt Hardin. All rights reserved.
//


#ifndef GTaskMaster_Defines_h
#define GTaskMaster_Defines_h

// Build options
#define WIPE_LOCAL_TASKS_DB_ON_LAUNCH   1
#define SAVE_AUTH_TOKEN                 1

// Keychain item name for saving the user's authentication information
#define kKeychainItemName @"TestTasksApp"

// Client ID and secret
#define kMyClientID @"330215408733.apps.googleusercontent.com"
#define kMyClientSecret @"Bzdh7-ZdL-tPQLtdwx_6ocLe"

//Debug
#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define DLog(...)
#endif

#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#endif
