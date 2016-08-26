///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESInvalidPropertyGroupError.h"
#import "DBXFILESLookupError.h"
#import "DBXFILESPropertiesError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESInvalidPropertyGroupError 

- (instancetype)initWithTemplateNotFound:(NSString *)templateNotFound {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESInvalidPropertyGroupErrorTemplateNotFound;
        _templateNotFound = templateNotFound;
    }
    return self;
}

- (instancetype)initWithRestrictedContent {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESInvalidPropertyGroupErrorRestrictedContent;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESInvalidPropertyGroupErrorOther;
    }
    return self;
}

- (instancetype)initWithPath:(DBXFILESLookupError *)path {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESInvalidPropertyGroupErrorPath;
        _path = path;
    }
    return self;
}

- (instancetype)initWithPropertyFieldTooLarge {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESInvalidPropertyGroupErrorPropertyFieldTooLarge;
    }
    return self;
}

- (instancetype)initWithDoesNotFitTemplate {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESInvalidPropertyGroupErrorDoesNotFitTemplate;
    }
    return self;
}

- (BOOL)isTemplateNotFound {
    return _tag == DBXFILESInvalidPropertyGroupErrorTemplateNotFound;
}

- (BOOL)isRestrictedContent {
    return _tag == DBXFILESInvalidPropertyGroupErrorRestrictedContent;
}

- (BOOL)isOther {
    return _tag == DBXFILESInvalidPropertyGroupErrorOther;
}

- (BOOL)isPath {
    return _tag == DBXFILESInvalidPropertyGroupErrorPath;
}

- (BOOL)isPropertyFieldTooLarge {
    return _tag == DBXFILESInvalidPropertyGroupErrorPropertyFieldTooLarge;
}

- (BOOL)isDoesNotFitTemplate {
    return _tag == DBXFILESInvalidPropertyGroupErrorDoesNotFitTemplate;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESInvalidPropertyGroupErrorTemplateNotFound:
           return @"DBXFILESInvalidPropertyGroupErrorTemplateNotFound";
        case DBXFILESInvalidPropertyGroupErrorRestrictedContent:
           return @"DBXFILESInvalidPropertyGroupErrorRestrictedContent";
        case DBXFILESInvalidPropertyGroupErrorOther:
           return @"DBXFILESInvalidPropertyGroupErrorOther";
        case DBXFILESInvalidPropertyGroupErrorPath:
           return @"DBXFILESInvalidPropertyGroupErrorPath";
        case DBXFILESInvalidPropertyGroupErrorPropertyFieldTooLarge:
           return @"DBXFILESInvalidPropertyGroupErrorPropertyFieldTooLarge";
        case DBXFILESInvalidPropertyGroupErrorDoesNotFitTemplate:
           return @"DBXFILESInvalidPropertyGroupErrorDoesNotFitTemplate";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

- (NSString *)templateNotFound {
    if (_tag != DBXFILESInvalidPropertyGroupErrorTemplateNotFound) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESInvalidPropertyGroupErrorTemplateNotFound`, but was %@.", [self getTagName]];
    }
    return _templateNotFound;
}

- (DBXFILESLookupError *)path {
    if (_tag != DBXFILESInvalidPropertyGroupErrorPath) {
        [NSException raise:@"IllegalStateException" format:@"Invalid tag: required `DBXFILESInvalidPropertyGroupErrorPath`, but was %@.", [self getTagName]];
    }
    return _path;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESInvalidPropertyGroupErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESInvalidPropertyGroupErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESInvalidPropertyGroupErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESInvalidPropertyGroupErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESInvalidPropertyGroupError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isTemplateNotFound]) {
        jsonDict[@"template_not_found"] = valueObj.templateNotFound;
        jsonDict[@".tag"] = @"template_not_found";
    }
    else if ([valueObj isRestrictedContent]) {
        jsonDict[@".tag"] = @"restricted_content";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else if ([valueObj isPath]) {
        jsonDict = [[DBXFILESLookupErrorSerializer serialize:valueObj.path] mutableCopy];
        jsonDict[@".tag"] = @"path";
    }
    else if ([valueObj isPropertyFieldTooLarge]) {
        jsonDict[@".tag"] = @"property_field_too_large";
    }
    else if ([valueObj isDoesNotFitTemplate]) {
        jsonDict[@".tag"] = @"does_not_fit_template";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESInvalidPropertyGroupError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"template_not_found"]) {
        NSString *templateNotFound = valueDict[@"template_not_found"];
        return [[DBXFILESInvalidPropertyGroupError alloc] initWithTemplateNotFound:templateNotFound];
    }
    else if ([tag isEqualToString:@"restricted_content"]) {
        return [[DBXFILESInvalidPropertyGroupError alloc] initWithRestrictedContent];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESInvalidPropertyGroupError alloc] initWithOther];
    }
    else if ([tag isEqualToString:@"path"]) {
        DBXFILESLookupError *path = [DBXFILESLookupErrorSerializer deserialize:valueDict[@"path"]];
        return [[DBXFILESInvalidPropertyGroupError alloc] initWithPath:path];
    }
    else if ([tag isEqualToString:@"property_field_too_large"]) {
        return [[DBXFILESInvalidPropertyGroupError alloc] initWithPropertyFieldTooLarge];
    }
    else if ([tag isEqualToString:@"does_not_fit_template"]) {
        return [[DBXFILESInvalidPropertyGroupError alloc] initWithDoesNotFitTemplate];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
