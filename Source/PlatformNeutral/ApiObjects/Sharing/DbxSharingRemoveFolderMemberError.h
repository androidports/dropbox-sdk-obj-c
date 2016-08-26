///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGRemoveFolderMemberError;
@class DBXSHARINGSharedFolderAccessError;
@class DBXSHARINGSharedFolderMemberError;

/// 
/// The `DBXSHARINGRemoveFolderMemberError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGRemoveFolderMemberError : NSObject <DBXSerializable> 

/// The `DBXSHARINGRemoveFolderMemberErrorTag` enum type represents the possible
/// tag states that the `DBXSHARINGRemoveFolderMemberError` union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGRemoveFolderMemberErrorTag) {
    /// (no description).
    DBXSHARINGRemoveFolderMemberErrorAccessError,

    /// (no description).
    DBXSHARINGRemoveFolderMemberErrorMemberError,

    /// The target user is the owner of the shared folder. You can't remove this
    /// user until ownership has been transferred to another member.
    DBXSHARINGRemoveFolderMemberErrorFolderOwner,

    /// The target user has access to the shared folder via a group.
    DBXSHARINGRemoveFolderMemberErrorGroupAccess,

    /// This action cannot be performed on a team shared folder.
    DBXSHARINGRemoveFolderMemberErrorTeamFolder,

    /// The current user does not have permission to perform this action.
    DBXSHARINGRemoveFolderMemberErrorNoPermission,

    /// (no description).
    DBXSHARINGRemoveFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXSHARINGRemoveFolderMemberErrorTag tag;

/// (no description).
@property (nonatomic) DBXSHARINGSharedFolderAccessError * _Nonnull accessError;

/// (no description).
@property (nonatomic) DBXSHARINGSharedFolderMemberError * _Nonnull memberError;

/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharedFolderAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `MemberError`.
- (nonnull instancetype)initWithMemberError:(DBXSHARINGSharedFolderMemberError * _Nonnull)memberError;

/// Initializes union class with tag state of `FolderOwner`.
- (nonnull instancetype)initWithFolderOwner;

/// Initializes union class with tag state of `GroupAccess`.
- (nonnull instancetype)initWithGroupAccess;

/// Initializes union class with tag state of `TeamFolder`.
- (nonnull instancetype)initWithTeamFolder;

/// Initializes union class with tag state of `NoPermission`.
- (nonnull instancetype)initWithNoPermission;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `MemberError`.
- (BOOL)isMemberError;

/// Returns whether the union's current tag state has value `FolderOwner`.
- (BOOL)isFolderOwner;

/// Returns whether the union's current tag state has value `GroupAccess`.
- (BOOL)isGroupAccess;

/// Returns whether the union's current tag state has value `TeamFolder`.
- (BOOL)isTeamFolder;

/// Returns whether the union's current tag state has value `NoPermission`.
- (BOOL)isNoPermission;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DBXSHARINGRemoveFolderMemberError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGRemoveFolderMemberError` union.
/// 
@interface DBXSHARINGRemoveFolderMemberErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGRemoveFolderMemberError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGRemoveFolderMemberError * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGRemoveFolderMemberError` object
/// from a json-compatible dictionary representation.
+ (DBXSHARINGRemoveFolderMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
