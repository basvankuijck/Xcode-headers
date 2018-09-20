//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTPlistNode.h>

@class NSMutableArray;

@interface DVTPlistArrayNode : DVTPlistNode
{
    NSMutableArray *_array;
}

- (void).cxx_destruct;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 startingAt:(id)arg3 document:(id)arg4;
- (id)keyForChild:(id)arg1;
- (unsigned long long)indexOfKey:(id)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (void)setValueFromPlist:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)moveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeValue:(id)arg1;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)addValue:(id)arg1;
- (void)replaceValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)children;
- (unsigned long long)numberOfChildren;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParentNode:(id)arg1;

@end

