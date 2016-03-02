//
//  AppDelegate.h
//  Http
//
//  Created by and on 16/3/2.
//  Copyright © 2016年 and. All rights reserved.
//

#import <UIKit/UIKit.h>
@class iPhoneHTTPServerViewController;
@class HTTPServer;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) HTTPServer *httpServer;

@end

