///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMTeamMembershipType;

/// 
/// The `DBXTEAMTeamMembershipType` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMTeamMembershipType : NSObject <DBXSerializable> 

/// The `DBXTEAMTeamMembershipTypeTag` enum type represents the possible tag
/// states that the `DBXTEAMTeamMembershipType` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMTeamMembershipTypeTag) {
    /// User uses a license and has full access to team resources like the
    /// shared quota.
    DBXTEAMTeamMembershipTypeFull,

    /// User does not have access to the shared quota and team admins have
    /// restricted administrative control.
    DBXTEAMTeamMembershipTypeLimited,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXTEAMTeamMembershipTypeTag tag;

/// Initializes union class with tag state of `Full`.
- (nonnull instancetype)initWithFull;

/// Initializes union class with tag state of `Limited`.
- (nonnull instancetype)initWithLimited;

/// Returns whether the union's current tag state has value `Full`.
- (BOOL)isFull;

/// Returns whether the union's current tag state has value `Limited`.
- (BOOL)isLimited;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DBXTEAMTeamMembershipType`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMTeamMembershipType` union.
/// 
@interface DBXTEAMTeamMembershipTypeSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMTeamMembershipType` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMTeamMembershipType * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMTeamMembershipType` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMTeamMembershipType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
