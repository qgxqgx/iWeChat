//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DeepLinkDef, MMWebViewController, NSString;

@protocol IMMWebViewControllerDeepLinkExt

@optional
- (void)accessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3;
- (void)canAccessDeepLink:(DeepLinkDef *)arg1 Url:(NSString *)arg2 Webview:(MMWebViewController *)arg3 Ret:(_Bool *)arg4 NeedCheckBitset:(_Bool *)arg5;
@end
