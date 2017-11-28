
#if __has_include("RCTBridgeModule.h")
#import <React/RCTBridgeModule.h>
#import "RCTEventEmitter.h"
#else
#import "RCTBridgeModule.h"
#import <React/RCTEventEmitter.h>
#endif


#import <CoreNfc/CoreNfc.h>

@interface NfcManager : RCTEventEmitter <RCTBridgeModule, NFCNDEFReaderSessionDelegate> {
    
}

@property (strong, nonatomic) NFCNDEFReaderSession *session;

@end
  
