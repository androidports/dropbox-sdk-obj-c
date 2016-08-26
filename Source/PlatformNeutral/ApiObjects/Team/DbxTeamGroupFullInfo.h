///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXTEAMCOMMONGroupSummary.h"

@class DBXTEAMCOMMONGroupManagementType;
@class DBXTEAMGroupFullInfo;
@class DBXTEAMGroupMemberInfo;

/// 
/// The `DBXTEAMGroupFullInfo` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Full description of a group.
/// 
@interface DBXTEAMGroupFullInfo : DBXTEAMCOMMONGroupSummary <DBXSerializable> 

/// List of group members.
@property (nonatomic) NSArray<DBXTEAMGroupMemberInfo *> * _Nullable members;

/// The group creation time as a UTC timestamp in milliseconds since the Unix
/// epoch.
@property (nonatomic, copy) NSNumber * _Nonnull created;

/// Full constructor for the `GroupFullInfo` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName groupId:(NSString * _Nonnull)groupId groupManagementType:(DBXTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType created:(NSNumber * _Nonnull)created groupExternalId:(NSString * _Nullable)groupExternalId memberCount:(NSNumber * _Nullable)memberCount members:(NSArray<DBXTEAMGroupMemberInfo *> * _Nullable)members;

/// Convenience constructor for the `GroupFullInfo` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithGroupName:(NSString * _Nonnull)groupName groupId:(NSString * _Nonnull)groupId groupManagementType:(DBXTEAMCOMMONGroupManagementType * _Nonnull)groupManagementType created:(NSNumber * _Nonnull)created;

/// Returns a human-readable representation of the `DBXTEAMGroupFullInfo`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMGroupFullInfo` struct.
/// 
@interface DBXTEAMGroupFullInfoSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGroupFullInfo` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupFullInfo * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGroupFullInfo` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMGroupFullInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
