/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free softwareyou can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http//www.gnu.org/licenses/>.
*/

#import <Foundation/NSScriptCommandDescription.h>
#import <Foundation/NSMethodSignature.h>
#import <Foundation/NSInvocation.h>

@implementation NSScriptCommandDescription

- (NSMethodSignature *)methodSignatureForSelector:(SEL)aSelector {
    return [NSMethodSignature signatureWithObjCTypes: "v@:"];
}

- (void)forwardInvocation:(NSInvocation *)anInvocation {
    NSLog(@"Stub called: %@ in %@", NSStringFromSelector([anInvocation selector]), [self class]);
}

- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
	NSLog(@"[NSScriptCommandDescription initWithCoder:]");
	return [self init];
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
	NSLog(@"[NSScriptCommandDescription encodeWithCoder:");
}

@end
