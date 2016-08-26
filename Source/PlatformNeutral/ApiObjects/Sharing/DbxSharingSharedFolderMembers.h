///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGGroupMembershipInfo;
@class DBXSHARINGInviteeMembershipInfo;
@class DBXSHARINGSharedFolderMembers;
@class DBXSHARINGUserMembershipInfo;

/// 
/// The `DBXSHARINGSharedFolderMembers` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Shared folder user and group membership.
/// 
@interface DBXSHARINGSharedFolderMembers : NSObject <DBXSerializable> 

/// The list of user members of the shared folder.
@property (nonatomic) NSArray<DBXSHARINGUserMembershipInfo *> * _Nonnull users;

/// The list of group members of the shared folder.
@property (nonatomic) NSArray<DBXSHARINGGroupMembershipInfo *> * _Nonnull groups;

/// The list of invitees to the shared folder.
@property (nonatomic) NSArray<DBXSHARINGInviteeMembershipInfo *> * _Nonnull invitees;

/// Present if there are additional shared folder members that have not been
/// returned yet. Pass the cursor into listFolderMembersContinue to list
/// additional members.
@property (nonatomic, copy) NSString * _Nullable cursor;

/// Full constructor for the `SharedFolderMembers` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithUsers:(NSArray<DBXSHARINGUserMembershipInfo *> * _Nonnull)users groups:(NSArray<DBXSHARINGGroupMembershipInfo *> * _Nonnull)groups invitees:(NSArray<DBXSHARINGInviteeMembershipInfo *> * _Nonnull)invitees cursor:(NSString * _Nullable)cursor;

/// Convenience constructor for the `SharedFolderMembers` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithUsers:(NSArray<DBXSHARINGUserMembershipInfo *> * _Nonnull)users groups:(NSArray<DBXSHARINGGroupMembershipInfo *> * _Nonnull)groups invitees:(NSArray<DBXSHARINGInviteeMembershipInfo *> * _Nonnull)invitees;

/// Returns a human-readable representation of the
/// `DBXSHARINGSharedFolderMembers` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGSharedFolderMembers` struct.
/// 
@interface DBXSHARINGSharedFolderMembersSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGSharedFolderMembers` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGSharedFolderMembers * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGSharedFolderMembers` object from
/// a json-compatible dictionary representation.
+ (DBXSHARINGSharedFolderMembers * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
