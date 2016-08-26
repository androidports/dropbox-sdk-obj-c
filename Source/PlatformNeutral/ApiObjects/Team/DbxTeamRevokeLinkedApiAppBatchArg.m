///
/// Auto-generated by Stone, do not modify.
///

#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXTEAMRevokeLinkedApiAppArg.h"
#import "DBXTEAMRevokeLinkedApiAppBatchArg.h"

@implementation DBXTEAMRevokeLinkedApiAppBatchArg 

- (instancetype)initWithRevokeLinkedApp:(NSArray<DBXTEAMRevokeLinkedApiAppArg *> *)revokeLinkedApp {
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](revokeLinkedApp);

    self = [super init];
    if (self != nil) {
        _revokeLinkedApp = revokeLinkedApp;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXTEAMRevokeLinkedApiAppBatchArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXTEAMRevokeLinkedApiAppBatchArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXTEAMRevokeLinkedApiAppBatchArgSerializer serialize:self] description];
}

@end


@implementation DBXTEAMRevokeLinkedApiAppBatchArgSerializer 

+ (NSDictionary *)serialize:(DBXTEAMRevokeLinkedApiAppBatchArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"revoke_linked_app"] = [DBXArraySerializer serialize:valueObj.revokeLinkedApp withBlock:^id(id elem) { return [DBXTEAMRevokeLinkedApiAppArgSerializer serialize:elem]; }];

    return jsonDict;
}

+ (DBXTEAMRevokeLinkedApiAppBatchArg *)deserialize:(NSDictionary *)valueDict {
    NSArray<DBXTEAMRevokeLinkedApiAppArg *> *revokeLinkedApp = [DBXArraySerializer deserialize:valueDict[@"revoke_linked_app"] withBlock:^id(id elem) { return [DBXTEAMRevokeLinkedApiAppArgSerializer deserialize:elem]; }];

    return [[DBXTEAMRevokeLinkedApiAppBatchArg alloc] initWithRevokeLinkedApp:revokeLinkedApp];
}

@end
