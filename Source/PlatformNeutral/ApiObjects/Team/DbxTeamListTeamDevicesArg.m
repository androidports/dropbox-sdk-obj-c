///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMListTeamDevicesArg.h"

@implementation DBXTEAMListTeamDevicesArg 

- (instancetype)initWithCursor:(NSString *)cursor includeWebSessions:(NSNumber *)includeWebSessions includeDesktopClients:(NSNumber *)includeDesktopClients includeMobileClients:(NSNumber *)includeMobileClients {

    self = [super init];
    if (self != nil) {
        _cursor = cursor;
        _includeWebSessions = includeWebSessions ?: @YES;
        _includeDesktopClients = includeDesktopClients ?: @YES;
        _includeMobileClients = includeMobileClients ?: @YES;
    }
    return self;
}

- (instancetype)init {
    return [self initWithCursor:nil includeWebSessions:nil includeDesktopClients:nil includeMobileClients:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMListTeamDevicesArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMListTeamDevicesArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMListTeamDevicesArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMListTeamDevicesArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMListTeamDevicesArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if (valueObj.cursor) {
        jsonDict[@"cursor"] = valueObj.cursor;
    }
    jsonDict[@"include_web_sessions"] = valueObj.includeWebSessions;
    jsonDict[@"include_desktop_clients"] = valueObj.includeDesktopClients;
    jsonDict[@"include_mobile_clients"] = valueObj.includeMobileClients;

    return jsonDict;
}

+ (DBXTEAMListTeamDevicesArg *)deserialize:(NSDictionary *)valueDict {
    NSString *cursor = valueDict[@"cursor"] ?: nil;
    NSNumber *includeWebSessions = valueDict[@"include_web_sessions"];
    NSNumber *includeDesktopClients = valueDict[@"include_desktop_clients"];
    NSNumber *includeMobileClients = valueDict[@"include_mobile_clients"];

    return [[DBXTEAMListTeamDevicesArg alloc] initWithCursor:cursor includeWebSessions:includeWebSessions includeDesktopClients:includeDesktopClients includeMobileClients:includeMobileClients];
}

@end
