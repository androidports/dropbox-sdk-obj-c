///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESUploadSessionStartArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESUploadSessionStartArg 

- (instancetype)initWithClose:(NSNumber *)close {

    self = [super init];
    if (self != nil) {
        _close = close ?: @NO;
    }
    return self;
}

- (instancetype)init {
    return [self initWithClose:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESUploadSessionStartArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESUploadSessionStartArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESUploadSessionStartArgSerializer serialize:self] description];
}

@end


@implementation DBXFILESUploadSessionStartArgSerializer 

+ (NSDictionary *)serialize:(DBXFILESUploadSessionStartArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"close"] = valueObj.close;

    return jsonDict;
}

+ (DBXFILESUploadSessionStartArg *)deserialize:(NSDictionary *)valueDict {
    NSNumber *close = valueDict[@"close"];

    return [[DBXFILESUploadSessionStartArg alloc] initWithClose:close];
}

@end
