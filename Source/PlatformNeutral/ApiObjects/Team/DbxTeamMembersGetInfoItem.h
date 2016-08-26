///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMembersGetInfoItem;
@class DBXTEAMTeamMemberInfo;

/// 
/// The `DBXTEAMMembersGetInfoItem` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Describes a result obtained for a single user whose id was specified in the
/// parameter of membersGetInfo.
/// 
@interface DBXTEAMMembersGetInfoItem : NSObject <DBXSerializable> 

/// The `DBXTEAMMembersGetInfoItemTag` enum type represents the possible tag
/// states that the `DBXTEAMMembersGetInfoItem` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMMembersGetInfoItemTag) {
    /// An ID that was provided as a parameter to membersGetInfo, and did not
    /// match a corresponding user. This might be a team_member_id, an email, or
    /// an external ID, depending on how the method was called.
    DBXTEAMMembersGetInfoItemIdNotFound,

    /// Info about a team member.
    DBXTEAMMembersGetInfoItemMemberInfo,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXTEAMMembersGetInfoItemTag tag;

/// An ID that was provided as a parameter to membersGetInfo, and did not match
/// a corresponding user. This might be a team_member_id, an email, or an
/// external ID, depending on how the method was called.
@property (nonatomic, copy) NSString * _Nonnull idNotFound;

/// Info about a team member.
@property (nonatomic) DBXTEAMTeamMemberInfo * _Nonnull memberInfo;

/// Initializes union class with tag state of `IdNotFound`.
- (nonnull instancetype)initWithIdNotFound:(NSString * _Nonnull)idNotFound;

/// Initializes union class with tag state of `MemberInfo`.
- (nonnull instancetype)initWithMemberInfo:(DBXTEAMTeamMemberInfo * _Nonnull)memberInfo;

/// Returns whether the union's current tag state has value `IdNotFound`.
- (BOOL)isIdNotFound;

/// Returns whether the union's current tag state has value `MemberInfo`.
- (BOOL)isMemberInfo;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DBXTEAMMembersGetInfoItem`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMMembersGetInfoItem` union.
/// 
@interface DBXTEAMMembersGetInfoItemSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMMembersGetInfoItem` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersGetInfoItem * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMMembersGetInfoItem` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMMembersGetInfoItem * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
