///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESWriteConflictError.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESWriteConflictError 

- (instancetype)initWithFile {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESWriteConflictErrorFile;
    }
    return self;
}

- (instancetype)initWithFolder {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESWriteConflictErrorFolder;
    }
    return self;
}

- (instancetype)initWithFileAncestor {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESWriteConflictErrorFileAncestor;
    }
    return self;
}

- (instancetype)initWithOther {
    self = [super init];
    if (self != nil) {
        _tag = DBXFILESWriteConflictErrorOther;
    }
    return self;
}

- (BOOL)isFile {
    return _tag == DBXFILESWriteConflictErrorFile;
}

- (BOOL)isFolder {
    return _tag == DBXFILESWriteConflictErrorFolder;
}

- (BOOL)isFileAncestor {
    return _tag == DBXFILESWriteConflictErrorFileAncestor;
}

- (BOOL)isOther {
    return _tag == DBXFILESWriteConflictErrorOther;
}

- (NSString *)getTagName {
    switch (_tag) {
        case DBXFILESWriteConflictErrorFile:
           return @"DBXFILESWriteConflictErrorFile";
        case DBXFILESWriteConflictErrorFolder:
           return @"DBXFILESWriteConflictErrorFolder";
        case DBXFILESWriteConflictErrorFileAncestor:
           return @"DBXFILESWriteConflictErrorFileAncestor";
        case DBXFILESWriteConflictErrorOther:
           return @"DBXFILESWriteConflictErrorOther";
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESWriteConflictErrorSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESWriteConflictErrorSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESWriteConflictErrorSerializer serialize:self] description];
}

@end


@implementation DBXFILESWriteConflictErrorSerializer 

+ (NSDictionary *)serialize:(DBXFILESWriteConflictError *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    if ([valueObj isFile]) {
        jsonDict[@".tag"] = @"file";
    }
    else if ([valueObj isFolder]) {
        jsonDict[@".tag"] = @"folder";
    }
    else if ([valueObj isFileAncestor]) {
        jsonDict[@".tag"] = @"file_ancestor";
    }
    else if ([valueObj isOther]) {
        jsonDict[@".tag"] = @"other";
    }
    else {
        @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
    }

    return jsonDict;
}

+ (DBXFILESWriteConflictError *)deserialize:(NSDictionary *)valueDict {
    NSString *tag = valueDict[@".tag"];

    if ([tag isEqualToString:@"file"]) {
        return [[DBXFILESWriteConflictError alloc] initWithFile];
    }
    else if ([tag isEqualToString:@"folder"]) {
        return [[DBXFILESWriteConflictError alloc] initWithFolder];
    }
    else if ([tag isEqualToString:@"file_ancestor"]) {
        return [[DBXFILESWriteConflictError alloc] initWithFileAncestor];
    }
    else if ([tag isEqualToString:@"other"]) {
        return [[DBXFILESWriteConflictError alloc] initWithOther];
    }

    @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an invalid value." userInfo:nil]);
}

@end
