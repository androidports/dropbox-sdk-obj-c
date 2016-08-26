///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESPropertyGroupWithPath.h"
#import "DBXPROPERTIESPropertyGroup.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESPropertyGroupWithPath 

- (instancetype)initWithPath:(NSString *)path propertyGroups:(NSArray<DBXPROPERTIESPropertyGroup *> *)propertyGroups {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"/(.|[\\r\\n])*|id:.*|(ns:[0-9]+(/.*)?)"](path);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](propertyGroups);

    self = [super init];
    if (self != nil) {
        _path = path;
        _propertyGroups = propertyGroups;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESPropertyGroupWithPathSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESPropertyGroupWithPathSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESPropertyGroupWithPathSerializer serialize:self] description];
}

@end


@implementation DBXFILESPropertyGroupWithPathSerializer 

+ (NSDictionary *)serialize:(DBXFILESPropertyGroupWithPath *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"path"] = valueObj.path;
    jsonDict[@"property_groups"] = [DBXArraySerializer serialize:valueObj.propertyGroups withBlock:^id(id elem) { return [DBXPROPERTIESPropertyGroupSerializer serialize:elem]; }];

    return jsonDict;
}

+ (DBXFILESPropertyGroupWithPath *)deserialize:(NSDictionary *)valueDict {
    NSString *path = valueDict[@"path"];
    NSArray<DBXPROPERTIESPropertyGroup *> *propertyGroups = [DBXArraySerializer deserialize:valueDict[@"property_groups"] withBlock:^id(id elem) { return [DBXPROPERTIESPropertyGroupSerializer deserialize:elem]; }];

    return [[DBXFILESPropertyGroupWithPath alloc] initWithPath:path propertyGroups:propertyGroups];
}

@end
