//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXC3x3TextureSamplingFilter.h"

@interface TXC3x3ConvolutionFilter : TXC3x3TextureSamplingFilter
{
    int convolutionMatrixUniform;
    struct TXSMatrix3x3 _convolutionKernel;
}

@property(nonatomic) struct TXSMatrix3x3 convolutionKernel; // @synthesize convolutionKernel=_convolutionKernel;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end
