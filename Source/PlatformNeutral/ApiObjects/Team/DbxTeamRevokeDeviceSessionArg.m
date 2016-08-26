///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMDeviceSessionArg.h"
#import "DBXTEAMRevokeDesktopClientArg.h"
#import "DBXTEAMRevokeDeviceSessionArg.h"

@implementation DBXTEAMRevokeDeviceSessionArg 

- (instancetype)initWithWebSession:(DBXTEAMDeviceSessionArg *)webSession {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMRevokeDeviceSessionArgWebSession;
        _webSession = webSession;
    }
    return self;
}

- (instancetype)initWithDesktopClient:(DBXTEAMRevokeDesktopClientArg *)desktopClient {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMRevokeDeviceSessionArgDesktopClient;
        _desktopClient = desktopClient;
    }
    return self;
}

- (instancetype)initWithMobileClient:(DBXTEAMDeviceSessionArg *)mobileClient {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMRevokeDeviceSessionArgMobileClient;
        _mobileClient = mobileClient;
    }
    return self;
}

- (BOOL)isWebSession {
    return _tag == DBXTEAMRevokeDeviceSessionArgWebSession;
}

- (BOOL)isDesktopClient {
    return _tag == DBXTEAMRevokeDeviceSessionArgDesktopClient;
}

- (BOOL)isMobileClient {
    return _tag == DBXTEAMRevokeDeviceSessionArgMobileClient;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXTEAMRevokeDeviceSessionArgWebSession:
           return @"DBXTEAMRevokeDeviceSessionArgWebSession";
        case DBXTEAMRevokeDeviceSessionArgDesktopClient:
           return @"DBXTEAMRevokeDeviceSessionArgDesktopClient";
        case DBXTEAMRevokeDeviceSessionArgMobileClient:
           return @"DBXTEAMRevokeDeviceSessionArgMobileClient";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (DBXTEAMDeviceSessionArg *)webSession {
    if (_tag != DBXTEAMRevokeDeviceSessionArgWebSession) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXTEAMRevokeDeviceSessionArgWebSession`, but was %@.", [self getTagName]];
    }
    return _webSession;
}

- (DBXTEAMRevokeDesktopClientArg *)desktopClient {
    if (_tag != DBXTEAMRevokeDeviceSessionArgDesktopClient) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXTEAMRevokeDeviceSessionArgDesktopClient`, but was %@.", [self getTagName]];
    }
    return _desktopClient;
}

- (DBXTEAMDeviceSessionArg *)mobileClient {
    if (_tag != DBXTEAMRevokeDeviceSessionArgMobileClient) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXTEAMRevokeDeviceSessionArgMobileClient`, but was %@.", [self getTagName]];
    }
    return _mobileClient;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMRevokeDeviceSessionArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMRevokeDeviceSessionArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMRevokeDeviceSessionArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMRevokeDeviceSessionArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMRevokeDeviceSessionArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isWebSession]) {
        jsonDict = [[DBXTEAMDeviceSessionArgSerializer serialize:valueObj.webSession] mutableCopy];
        jsonDict[@".tag"] = @"web_session";
    }
    else if ([valueObj isDesktopClient]) {
        jsonDict = [[DBXTEAMRevokeDesktopClientArgSerializer serialize:valueObj.desktopClient] mutableCopy];
        jsonDict[@".tag"] = @"desktop_client";
    }
    else if ([valueObj isMobileClient]) {
        jsonDict = [[DBXTEAMDeviceSessionArgSerializer serialize:valueObj.mobileClient] mutableCopy];
        jsonDict[@".tag"] = @"mobile_client";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXTEAMRevokeDeviceSessionArg *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"web_session"]) {
        DBXTEAMDeviceSessionArg *webSession = [DBXTEAMDeviceSessionArgSerializer deserialize:valueDict];
        return [[DBXTEAMRevokeDeviceSessionArg alloc] initWithWebSession:webSession];
    }
    else if ([tag isEqualToString:@"desktop_client"]) {
        DBXTEAMRevokeDesktopClientArg *desktopClient = [DBXTEAMRevokeDesktopClientArgSerializer deserialize:valueDict];
        return [[DBXTEAMRevokeDeviceSessionArg alloc] initWithDesktopClient:desktopClient];
    }
    else if ([tag isEqualToString:@"mobile_client"]) {
        DBXTEAMDeviceSessionArg *mobileClient = [DBXTEAMDeviceSessionArgSerializer deserialize:valueDict];
        return [[DBXTEAMRevokeDeviceSessionArg alloc] initWithMobileClient:mobileClient];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
