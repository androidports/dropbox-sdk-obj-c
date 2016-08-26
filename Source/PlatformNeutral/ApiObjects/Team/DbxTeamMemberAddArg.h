///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMAdminTier;
@class DBXTEAMMemberAddArg;

/// 
/// The `DBXTEAMMemberAddArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMemberAddArg : NSObject <DBXSerializable> 

/// (no description).
@property (nonatomic, copy) NSString * _Nonnull memberEmail;

/// Member's first name.
@property (nonatomic, copy) NSString * _Nonnull memberGivenName;

/// Member's last name.
@property (nonatomic, copy) NSString * _Nonnull memberSurname;

/// External ID for member.
@property (nonatomic, copy) NSString * _Nullable memberExternalId;

/// Whether to send a welcome email to the member. If send_welcome_email is
/// false, no email invitation will be sent to the user. This may be useful for
/// apps using single sign-on (SSO) flows for onboarding that want to handle
/// announcements themselves.
@property (nonatomic, copy) NSNumber * _Nonnull sendWelcomeEmail;

/// (no description).
@property (nonatomic) DBXTEAMAdminTier * _Nonnull role;

/// Full constructor for the `MemberAddArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithMemberEmail:(NSString * _Nonnull)memberEmail memberGivenName:(NSString * _Nonnull)memberGivenName memberSurname:(NSString * _Nonnull)memberSurname memberExternalId:(NSString * _Nullable)memberExternalId sendWelcomeEmail:(NSNumber * _Nullable)sendWelcomeEmail role:(DBXTEAMAdminTier * _Nullable)role;

/// Convenience constructor for the `MemberAddArg` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithMemberEmail:(NSString * _Nonnull)memberEmail memberGivenName:(NSString * _Nonnull)memberGivenName memberSurname:(NSString * _Nonnull)memberSurname;

/// Returns a human-readable representation of the `DBXTEAMMemberAddArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMMemberAddArg` struct.
/// 
@interface DBXTEAMMemberAddArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMMemberAddArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMemberAddArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMMemberAddArg` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMMemberAddArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
