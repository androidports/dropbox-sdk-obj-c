///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupMembersSelectorError;

/// 
/// The `DBXTEAMGroupMembersSelectorError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error that can be raised when GroupMembersSelector is used, and the users
/// are required to be members of the specified group.
/// 
@interface DBXTEAMGroupMembersSelectorError : NSObject <DBXSerializable> 

/// The `DBXTEAMGroupMembersSelectorErrorTag` enum type represents the possible
/// tag states that the `DBXTEAMGroupMembersSelectorError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMGroupMembersSelectorErrorTag) {
    /// No matching group found. No groups match the specified group ID.
    DBXTEAMGroupMembersSelectorErrorGroupNotFound,

    /// (no description).
    DBXTEAMGroupMembersSelectorErrorOther,

    /// At least one of the specified users is not a member of the group.
    DBXTEAMGroupMembersSelectorErrorMemberNotInGroup,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXTEAMGroupMembersSelectorErrorTag tag;

/// Initializes union class with tag state of `GroupNotFound`.
- (nonnull instancetype)initWithGroupNotFound;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `MemberNotInGroup`.
- (nonnull instancetype)initWithMemberNotInGroup;

/// Returns whether the union's current tag state has value `GroupNotFound`.
- (BOOL)isGroupNotFound;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `MemberNotInGroup`.
- (BOOL)isMemberNotInGroup;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DBXTEAMGroupMembersSelectorError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMGroupMembersSelectorError` union.
/// 
@interface DBXTEAMGroupMembersSelectorErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGroupMembersSelectorError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupMembersSelectorError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGroupMembersSelectorError` object
/// from a json-compatible dictionary representation.
+ (DBXTEAMGroupMembersSelectorError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
