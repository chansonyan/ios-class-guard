//
// $Id: CDOCClass.h,v 1.15 2004/02/02 21:37:19 nygard Exp $
//

//  This file is part of class-dump, a utility for examining the
//  Objective-C segment of Mach-O files.
//  Copyright (C) 1997-1998, 2000-2001, 2004  Steve Nygard

#import "CDOCProtocol.h"

@interface CDOCClass : CDOCProtocol
{
    NSString *superClassName; // TODO (2003-12-17): Have CDClassDump2 keep track of the name and build the tree,  linking directly to an appropriate class
    NSArray *ivars;
}

- (void)dealloc;

- (NSString *)superClassName;
- (void)setSuperClassName:(NSString *)newSuperClassName;

- (NSArray *)ivars;
- (void)setIvars:(NSArray *)newIvars;

- (void)appendToString:(NSMutableString *)resultString classDump:(CDClassDump2 *)aClassDump symbolReferences:(CDSymbolReferences *)symbolReferences;
- (void)registerStructuresWithObject:(id <CDStructureRegistration>)anObject phase:(int)phase;

@end
