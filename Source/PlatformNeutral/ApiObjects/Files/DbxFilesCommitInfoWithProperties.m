///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESCommitInfo.h"
#import "DBXFILESCommitInfoWithProperties.h"
#import "DBXFILESWriteMode.h"
#import "DBXPROPERTIESPropertyGroup.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESCommitInfoWithProperties 

- (instancetype)initWithPath:(NSString *)path mode:(DBXFILESWriteMode *)mode autorename:(NSNumber *)autorename clientModified:(NSDate *)clientModified mute:(NSNumber *)mute propertyGroups:(NSArray<DBXPROPERTIESPropertyGroup *> *)propertyGroups {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"(/(.|[\\r\\n])*)|(ns:[0-9]+(/.*)?)"](path);
    [DBXStoneValidators nullableValidator:[DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil]](propertyGroups);

    self = [super initWithPath:path mode:mode autorename:autorename clientModified:clientModified mute:mute];
    if (self != nil) {
        _propertyGroups = propertyGroups;
    }
    return self;
}

- (instancetype)initWithPath:(NSString *)path {
    return [self initWithPath:path mode:nil autorename:nil clientModified:nil mute:nil propertyGroups:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESCommitInfoWithPropertiesSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESCommitInfoWithPropertiesSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESCommitInfoWithPropertiesSerializer serialize:self] description];
}

@end


@implementation DBXFILESCommitInfoWithPropertiesSerializer 

+ (NSDictionary *)serialize:(DBXFILESCommitInfoWithProperties *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"path"] = valueObj.path;
    jsonDict[@"mode"] = [DBXFILESWriteModeSerializer serialize:valueObj.mode];
    jsonDict[@"autorename"] = valueObj.autorename;
    if (valueObj.clientModified) {
        jsonDict[@"client_modified"] = [DBXNSDateSerializer serialize:valueObj.clientModified dateFormat:@"%Y-%m-%dT%H:%M:%SZ"];
    }
    jsonDict[@"mute"] = valueObj.mute;
    if (valueObj.propertyGroups) {
        jsonDict[@"property_groups"] = [DBXArraySerializer serialize:valueObj.propertyGroups withBlock:^id(id elem) { return [DBXPROPERTIESPropertyGroupSerializer serialize:elem]; }];
    }

    return jsonDict;
}

+ (DBXFILESCommitInfoWithProperties *)deserialize:(NSDictionary *)valueDict {
    NSString *path = valueDict[@"path"];
    DBXFILESWriteMode *mode = [DBXFILESWriteModeSerializer deserialize:valueDict[@"mode"]];
    NSNumber *autorename = valueDict[@"autorename"];
    NSDate *clientModified = valueDict[@"client_modified"] ? [DBXNSDateSerializer deserialize:valueDict[@"client_modified"] dateFormat:@"%Y-%m-%dT%H:%M:%SZ"] : nil;
    NSNumber *mute = valueDict[@"mute"];
    NSArray<DBXPROPERTIESPropertyGroup *> *propertyGroups = valueDict[@"property_groups"] ? [DBXArraySerializer deserialize:valueDict[@"property_groups"] withBlock:^id(id elem) { return [DBXPROPERTIESPropertyGroupSerializer deserialize:elem]; }] : nil;

    return [[DBXFILESCommitInfoWithProperties alloc] initWithPath:path mode:mode autorename:autorename clientModified:clientModified mute:mute propertyGroups:propertyGroups];
}

@end
