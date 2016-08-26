///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGAccessLevel.h"
#import "DBXSHARINGFolderPolicy.h"
#import "DBXSHARINGSharedFolderMetadataBase.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"
#import "DBXUSERSTeam.h"

@implementation DBXSHARINGSharedFolderMetadataBase 

- (instancetype)initWithAccessType:(DBXSHARINGAccessLevel *)accessType isTeamFolder:(NSNumber *)isTeamFolder policy:(DBXSHARINGFolderPolicy *)policy ownerTeam:(DBXUSERSTeam *)ownerTeam parentSharedFolderId:(NSString *)parentSharedFolderId {
    [DBXStoneValidators nullableValidator:[DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"[-_0-9a-zA-Z:]+"]](parentSharedFolderId);

    self = [super init];
    if (self != nil) {
        _accessType = accessType;
        _isTeamFolder = isTeamFolder;
        _policy = policy;
        _ownerTeam = ownerTeam;
        _parentSharedFolderId = parentSharedFolderId;
    }
    return self;
}

- (instancetype)initWithAccessType:(DBXSHARINGAccessLevel *)accessType isTeamFolder:(NSNumber *)isTeamFolder policy:(DBXSHARINGFolderPolicy *)policy {
    return [self initWithAccessType:accessType isTeamFolder:isTeamFolder policy:policy ownerTeam:nil parentSharedFolderId:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGSharedFolderMetadataBaseSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGSharedFolderMetadataBaseSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGSharedFolderMetadataBaseSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGSharedFolderMetadataBaseSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGSharedFolderMetadataBase *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"access_type"] = [DBXSHARINGAccessLevelSerializer serialize:valueObj.accessType];
    jsonDict[@"is_team_folder"] = valueObj.isTeamFolder;
    jsonDict[@"policy"] = [DBXSHARINGFolderPolicySerializer serialize:valueObj.policy];
    if (valueObj.ownerTeam) {
        jsonDict[@"owner_team"] = [DBXUSERSTeamSerializer serialize:valueObj.ownerTeam];
    }
    if (valueObj.parentSharedFolderId) {
        jsonDict[@"parent_shared_folder_id"] = valueObj.parentSharedFolderId;
    }

    return jsonDict;
}

+ (DBXSHARINGSharedFolderMetadataBase *)deserialize:(NSDictionary *)valueDict {
    DBXSHARINGAccessLevel *accessType = [DBXSHARINGAccessLevelSerializer deserialize:valueDict[@"access_type"]];
    NSNumber *isTeamFolder = valueDict[@"is_team_folder"];
    DBXSHARINGFolderPolicy *policy = [DBXSHARINGFolderPolicySerializer deserialize:valueDict[@"policy"]];
    DBXUSERSTeam *ownerTeam = valueDict[@"owner_team"] ? [DBXUSERSTeamSerializer deserialize:valueDict[@"owner_team"]] : nil;
    NSString *parentSharedFolderId = valueDict[@"parent_shared_folder_id"] ?: nil;

    return [[DBXSHARINGSharedFolderMetadataBase alloc] initWithAccessType:accessType isTeamFolder:isTeamFolder policy:policy ownerTeam:ownerTeam parentSharedFolderId:parentSharedFolderId];
}

@end
