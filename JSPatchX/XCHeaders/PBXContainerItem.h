/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBXObject.h"

//#import "PBXChangeNotification-Protocol.h"

@class NSMutableDictionary, NSString;

@interface PBXContainerItem : PBXObject /*<PBXChangeNotification>*/
{
    NSString *_comments;
    NSMutableDictionary *_uiContext;
}

+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableUserAttributes;
+ (id)archivableAttributes;
- (BOOL)shouldArchiveUserInterfaceContext;
- (BOOL)shouldArchiveComments;
- (void)removeObjectForUserInterfaceContextKey:(id)arg1;
- (void)setObject:(id)arg1 forUserInterfaceContextKey:(id)arg2;
- (id)objectForUserInterfaceContextKey:(id)arg1;
- (void)setUserInterfaceContext:(id)arg1;
- (id)userInterfaceContext;
- (void)willChangeWithArchivePriority:(int)arg1;
- (void)willChange;
- (int)changeMask;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)setProject:(id)arg1;
- (id)project;
- (id)comments;
- (void)setComments:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 getUnretainedObjectMappings:(id *)arg2;
- (id)init;
- (void)handleMoveCommand:(id)arg1;

@end

