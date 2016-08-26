///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGFileMemberActionError;
@class DBXSHARINGFileMemberRemoveActionResult;
@class DBXSHARINGMemberAccessLevelResult;

/// 
/// The `DBXSHARINGFileMemberRemoveActionResult` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGFileMemberRemoveActionResult : NSObject <DBXSerializable> 

/// The `DBXSHARINGFileMemberRemoveActionResultTag` enum type represents the
/// possible tag states that the `DBXSHARINGFileMemberRemoveActionResult` union
/// can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGFileMemberRemoveActionResultTag) {
    /// Member was successfully removed from this file.
    DBXSHARINGFileMemberRemoveActionResultSuccess,

    /// User was not able to remove this member.
    DBXSHARINGFileMemberRemoveActionResultMemberError,

    /// (no description).
    DBXSHARINGFileMemberRemoveActionResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXSHARINGFileMemberRemoveActionResultTag tag;

/// Member was successfully removed from this file.
@property (nonatomic) DBXSHARINGMemberAccessLevelResult * _Nonnull success;

/// User was not able to remove this member.
@property (nonatomic) DBXSHARINGFileMemberActionError * _Nonnull memberError;

/// Initializes union class with tag state of `Success`.
- (nonnull instancetype)initWithSuccess:(DBXSHARINGMemberAccessLevelResult * _Nonnull)success;

/// Initializes union class with tag state of `MemberError`.
- (nonnull instancetype)initWithMemberError:(DBXSHARINGFileMemberActionError * _Nonnull)memberError;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Success`.
- (BOOL)isSuccess;

/// Returns whether the union's current tag state has value `MemberError`.
- (BOOL)isMemberError;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DBXSHARINGFileMemberRemoveActionResult` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGFileMemberRemoveActionResult`
/// union.
/// 
@interface DBXSHARINGFileMemberRemoveActionResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGFileMemberRemoveActionResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGFileMemberRemoveActionResult * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGFileMemberRemoveActionResult`
/// object from a json-compatible dictionary representation.
+ (DBXSHARINGFileMemberRemoveActionResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
