//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EJBindingBase.h"

@interface EJBindingTextMetrics : EJBindingBase
{
    CDStruct_de2edefb metrics;
}

+ (void *)_ptr_to_get_actualBoundingBoxDescent;
+ (void *)_ptr_to_get_actualBoundingBoxAscent;
+ (void *)_ptr_to_get_width;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 metrics:(CDStruct_de2edefb)arg3;
- (struct OpaqueJSValue *)_get_actualBoundingBoxDescent:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_actualBoundingBoxAscent:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_width:(struct OpaqueJSContext *)arg1;

@end
