//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSIBObjectData.h>

@interface NSIBObjectData (DesignTimeInterface)
- (id)verify;
- (id)verifyNextObjectIDValueIsValid;
- (void)removeDuplicateConnectors;
- (id)verifyNoObjectIsItsOwnParent;
- (id)verifyAllObjectsHaveUniqueIDs;
- (void)detachObject:(id)arg1;
- (void)detachObject:(id)arg1 removedObjects:(id)arg2 removedConnectors:(id)arg3 addedConnectors:(id)arg4;
- (void)attachConnector:(id)arg1 withObjectID:(long long)arg2;
- (void)removeConnectors:(id)arg1 removedConnectors:(id)arg2 addedConnectors:(id)arg3;
- (id)parentOfObject:(id)arg1;
- (void)moveObject:(id)arg1 toParent:(id)arg2;
- (BOOL)doesObjectHaveChildren:(id)arg1;
- (BOOL)doesObjectHaveCustomClass:(id)arg1;
- (BOOL)doesObjectHaveAnyConnections:(id)arg1;
- (id)unorderedObjects;
- (void)insertObjectsInto:(id)arg1;
- (void)insertObjects:(id)arg1 withParent:(id)arg2 intoContainer:(id)arg3;
- (id)userNameForObject:(id)arg1 parent:(id)arg2;
- (id)initWithObjectContainer:(id)arg1 andRootObject:(id)arg2;
- (void)insertObjects:(id)arg1 withParent:(id)arg2 fromObjectContainer:(id)arg3;
- (void)setCustomClass:(id)arg1 forObject:(id)arg2;
- (id)customClassForObject:(id)arg1;
- (id)orderedRootObjects;
- (id)orderedObjectsWithParent:(id)arg1;
- (id)descendantsOfObject:(id)arg1;
- (id)unorderedObjectsWithParent:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (long long)objectIDForObject:(id)arg1;
- (id)objectForObjectID:(long long)arg1;
- (id)nameForObject:(id)arg1;
- (void)setName:(id)arg1 forObject:(id)arg2;
- (void)attachObject:(id)arg1 withObjectID:(long long)arg2 toParent:(id)arg3;
- (id)connectors;
- (long long)maximumObjectID;
- (long long)generateIDForObject:(id)arg1 fromPreviousIDs:(id)arg2;
- (id)assignedObjectIDs;
- (id)filesOwner;
- (long long)generateObjectID;
@end

