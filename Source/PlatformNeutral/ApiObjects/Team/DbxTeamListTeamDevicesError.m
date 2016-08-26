///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMListTeamDevicesError.h"

@implementation DBXTEAMListTeamDevicesError 

- (instancetype)initWithReset {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMListTeamDevicesErrorReset;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXTEAMListTeamDevicesErrorOther;
    }
    return self;
}

- (BOOL)isReset {
    return _tag == DBXTEAMListTeamDevicesErrorReset;
}

- (BOOL)isOther {
    return _tag == DBXTEAMListTeamDevicesErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXTEAMListTeamDevicesErrorReset:
           return @"DBXTEAMListTeamDevicesErrorReset";
        case DBXTEAMListTeamDevicesErrorOther:
           return @"DBXTEAMListTeamDevicesErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMListTeamDevicesErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMListTeamDevicesErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMListTeamDevicesErrorSerializer serialize:self] description];
}

@end


@implementation DBXTEAMListTeamDevicesErrorSerializer 

+ (NSDictionary *)serialize:(DBXTEAMListTeamDevicesError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isReset]) {
        jsonDict[@".tag"] = @"reset";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXTEAMListTeamDevicesError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"reset"]) {
        return [[DBXTEAMListTeamDevicesError alloc] initWithReset];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXTEAMListTeamDevicesError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
