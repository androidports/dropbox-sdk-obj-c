///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMembersRecoverError;

/// 
/// The `DBXTEAMMembersRecoverError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersRecoverError : NSObject <DBXSerializable> 

/// The `DBXTEAMMembersRecoverErrorTag` enum type represents the possible tag
/// states that the `DBXTEAMMembersRecoverError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMMembersRecoverErrorTag) {
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    DBXTEAMMembersRecoverErrorUserNotFound,

    /// The user is not recoverable.
    DBXTEAMMembersRecoverErrorUserUnrecoverable,

    /// The user is not a member of the team.
    DBXTEAMMembersRecoverErrorUserNotInTeam,

    /// (no description).
    DBXTEAMMembersRecoverErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXTEAMMembersRecoverErrorTag tag;

/// Initializes union class with tag state of `UserNotFound`.
- (nonnull instancetype)initWithUserNotFound;

/// Initializes union class with tag state of `UserUnrecoverable`.
- (nonnull instancetype)initWithUserUnrecoverable;

/// Initializes union class with tag state of `UserNotInTeam`.
- (nonnull instancetype)initWithUserNotInTeam;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `UserNotFound`.
- (BOOL)isUserNotFound;

/// Returns whether the union's current tag state has value `UserUnrecoverable`.
- (BOOL)isUserUnrecoverable;

/// Returns whether the union's current tag state has value `UserNotInTeam`.
- (BOOL)isUserNotInTeam;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DBXTEAMMembersRecoverError`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMMembersRecoverError` union.
/// 
@interface DBXTEAMMembersRecoverErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMMembersRecoverError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersRecoverError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMMembersRecoverError` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMMembersRecoverError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
