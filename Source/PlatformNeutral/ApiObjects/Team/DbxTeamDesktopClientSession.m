///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMDesktopClientSession.h"
#import "DBXTEAMDesktopPlatform.h"
#import "DBXTEAMDeviceSession.h"

@implementation DBXTEAMDesktopClientSession 

- (instancetype)initWithSessionId:(NSString *)sessionId hostName:(NSString *)hostName clientType:(DBXTEAMDesktopPlatform *)clientType clientVersion:(NSString *)clientVersion platform:(NSString *)platform isDeleteOnUnlinkSupported:(NSNumber *)isDeleteOnUnlinkSupported ipAddress:(NSString *)ipAddress country:(NSString *)country created:(NSDate *)created updated:(NSDate *)updated {

    self = [super initWithSessionId:sessionId ipAddress:ipAddress country:country created:created updated:updated];
    if (self != nil) {
        _hostName = hostName;
        _clientType = clientType;
        _clientVersion = clientVersion;
        _platform = platform;
        _isDeleteOnUnlinkSupported = isDeleteOnUnlinkSupported;
    }
    return self;
}

- (instancetype)initWithSessionId:(NSString *)sessionId hostName:(NSString *)hostName clientType:(DBXTEAMDesktopPlatform *)clientType clientVersion:(NSString *)clientVersion platform:(NSString *)platform isDeleteOnUnlinkSupported:(NSNumber *)isDeleteOnUnlinkSupported {
    return [self initWithSessionId:sessionId hostName:hostName clientType:clientType clientVersion:clientVersion platform:platform isDeleteOnUnlinkSupported:isDeleteOnUnlinkSupported ipAddress:nil country:nil created:nil updated:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMDesktopClientSessionSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMDesktopClientSessionSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMDesktopClientSessionSerializer serialize:self] description];
}

@end


@implementation DBXTEAMDesktopClientSessionSerializer 

+ (NSDictionary *)serialize:(DBXTEAMDesktopClientSession *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"session_id"] = valueObj.sessionId;
    jsonDict[@"host_name"] = valueObj.hostName;
    jsonDict[@"client_type"] = [DBXTEAMDesktopPlatformSerializer serialize:valueObj.clientType];
    jsonDict[@"client_version"] = valueObj.clientVersion;
    jsonDict[@"platform"] = valueObj.platform;
    jsonDict[@"is_delete_on_unlink_supported"] = valueObj.isDeleteOnUnlinkSupported;
    if (valueObj.ipAddress) {
        jsonDict[@"ip_address"] = valueObj.ipAddress;
    }
    if (valueObj.country) {
        jsonDict[@"country"] = valueObj.country;
    }
    if (valueObj.created) {
        jsonDict[@"created"] = [DBXNSDateSerializer serialize:valueObj.created dateFormat:@"%Y-%m-%dT%H:%M:%SZ"];
    }
    if (valueObj.updated) {
        jsonDict[@"updated"] = [DBXNSDateSerializer serialize:valueObj.updated dateFormat:@"%Y-%m-%dT%H:%M:%SZ"];
    }

    return jsonDict;
}

+ (DBXTEAMDesktopClientSession *)deserialize:(NSDictionary *)valueDict {
    NSString *sessionId = valueDict[@"session_id"];
    NSString *hostName = valueDict[@"host_name"];
    DBXTEAMDesktopPlatform *clientType = [DBXTEAMDesktopPlatformSerializer deserialize:valueDict[@"client_type"]];
    NSString *clientVersion = valueDict[@"client_version"];
    NSString *platform = valueDict[@"platform"];
    NSNumber *isDeleteOnUnlinkSupported = valueDict[@"is_delete_on_unlink_supported"];
    NSString *ipAddress = valueDict[@"ip_address"] ?: nil;
    NSString *country = valueDict[@"country"] ?: nil;
    NSDate *created = valueDict[@"created"] ? [DBXNSDateSerializer deserialize:valueDict[@"created"] dateFormat:@"%Y-%m-%dT%H:%M:%SZ"] : nil;
    NSDate *updated = valueDict[@"updated"] ? [DBXNSDateSerializer deserialize:valueDict[@"updated"] dateFormat:@"%Y-%m-%dT%H:%M:%SZ"] : nil;

    return [[DBXTEAMDesktopClientSession alloc] initWithSessionId:sessionId hostName:hostName clientType:clientType clientVersion:clientVersion platform:platform isDeleteOnUnlinkSupported:isDeleteOnUnlinkSupported ipAddress:ipAddress country:country created:created updated:updated];
}

@end
