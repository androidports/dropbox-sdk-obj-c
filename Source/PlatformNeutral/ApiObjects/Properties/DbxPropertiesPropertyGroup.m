///
/// Auto-generated by Stone, do not modify.
///

#import "DBXPROPERTIESPropertyField.h"
#import "DBXPROPERTIESPropertyGroup.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXPROPERTIESPropertyGroup 

- (instancetype)initWithTemplateId:(NSString *)templateId fields:(NSArray<DBXPROPERTIESPropertyField *> *)fields {
    [DBXStoneValidators stringValidator:[NSNumber numberWithInt:1] maxLength:nil pattern:@"(/|ptid:).*"](templateId);
    [DBXStoneValidators arrayValidator:nil maxItems:nil itemValidator:nil](fields);

    self = [super init];
    if (self != nil) {
        _templateId = templateId;
        _fields = fields;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXPROPERTIESPropertyGroupSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXPROPERTIESPropertyGroupSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXPROPERTIESPropertyGroupSerializer serialize:self] description];
}

@end


@implementation DBXPROPERTIESPropertyGroupSerializer 

+ (NSDictionary *)serialize:(DBXPROPERTIESPropertyGroup *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"template_id"] = valueObj.templateId;
    jsonDict[@"fields"] = [DBXArraySerializer serialize:valueObj.fields withBlock:^id(id elem) { return [DBXPROPERTIESPropertyFieldSerializer serialize:elem]; }];

    return jsonDict;
}

+ (DBXPROPERTIESPropertyGroup *)deserialize:(NSDictionary *)valueDict {
    NSString *templateId = valueDict[@"template_id"];
    NSArray<DBXPROPERTIESPropertyField *> *fields = [DBXArraySerializer deserialize:valueDict[@"fields"] withBlock:^id(id elem) { return [DBXPROPERTIESPropertyFieldSerializer deserialize:elem]; }];

    return [[DBXPROPERTIESPropertyGroup alloc] initWithTemplateId:templateId fields:fields];
}

@end
