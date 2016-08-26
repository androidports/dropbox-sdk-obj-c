///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXTEAMCOMMONGroupSummary.h"

@class DBXSHARINGGroupInfo;
@class DBXTEAMCOMMONGroupManagementType;
@class DBXTEAMCOMMONGroupType;

/// 
/// The `DBXSHARINGGroupInfo` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// The information about a group. Groups is a way to manage a list of users
/// who need same access permission to the shared folder.
/// 
@interface DBXSHARINGGroupInfo : DBXTEAMCOMMONGroupSummary <DBXSerializable> 

/// The type of group.
@property (nonatomic) DBXTEAMCOMMONGroupType * _Nonnull groupType;

/// If the current user is an owner of the group.
@property (nonatomic, copy) NSNumber * _Nonnull isOwner;

/// If the group is owned by the current user's team.
@property (nonatomic, copy) NSNumber * _Nonnull sameTeam;

/// Full constructor for the `GroupInfo` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName groupId:(NSString * _Nonnull)groupId groupManagementType:(DBXTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType groupType:(DBXTEAMCOMMONGroupType * _Nonnull)groupType isOwner:(NSNumber * _Nonnull)isOwner sameTeam:(NSNumber * _Nonnull)sameTeam groupExternalId:(NSString * _Nullable)groupExternalId memberCount:(NSNumber * _Nullable)memberCount;

/// Convenience constructor for the `GroupInfo` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName groupId:(NSString * _Nonnull)groupId groupManagementType:(DBXTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType groupType:(DBXTEAMCOMMONGroupType * _Nonnull)groupType isOwner:(NSNumber * _Nonnull)isOwner sameTeam:(NSNumber * _Nonnull)sameTeam;

/// Returns a human-readable representation of the `DBXSHARINGGroupInfo` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGGroupInfo` struct.
/// 
@interface DBXSHARINGGroupInfoSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGGroupInfo` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGGroupInfo * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGGroupInfo` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGGroupInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
