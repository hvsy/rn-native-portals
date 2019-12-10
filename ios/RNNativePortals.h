
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#import "RCTViewManager.h"
#import "RCTEventEmitter.h"

#else
#import <React/RCTBridgeModule.h>
#import <React/RCTViewManager.h>
#import <React/RCTEventEmitter.h>
#endif


@interface RNNativePortals : NSObject <RCTBridgeModule>

@end
