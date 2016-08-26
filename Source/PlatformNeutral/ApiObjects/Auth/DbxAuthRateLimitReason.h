///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXAUTHRateLimitReason;

/// 
/// The `DBXAUTHRateLimitReason` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXAUTHRateLimitReason : NSObject <DBXSerializable> 

/// The `DBXAUTHRateLimitReasonTag` enum type represents the possible tag states
/// that the `DBXAUTHRateLimitReason` union can exist in.
typedef NS_ENUM(NSInteger, DBXAUTHRateLimitReasonTag) {
    /// You are making too many requests in the past few minutes.
    DBXAUTHRateLimitReasonTooManyRequests,

    /// There are currently too many write operations happening in the user's
    /// Dropbox.
    DBXAUTHRateLimitReasonTooManyWriteOperations,

    /// (no description).
    DBXAUTHRateLimitReasonOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXAUTHRateLimitReasonTag tag;

/// Initializes union class with tag state of `TooManyRequests`.
- (nonnull instancetype)initWithTooManyRequests;

/// Initializes union class with tag state of `TooManyWriteOperations`.
- (nonnull instancetype)initWithTooManyWriteOperations;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `TooManyRequests`.
- (BOOL)isTooManyRequests;

/// Returns whether the union's current tag state has value
/// `TooManyWriteOperations`.
- (BOOL)isTooManyWriteOperations;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DBXAUTHRateLimitReason`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXAUTHRateLimitReason` union.
/// 
@interface DBXAUTHRateLimitReasonSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXAUTHRateLimitReason` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXAUTHRateLimitReason * _Nonnull)obj;

/// Returns an instantiation of the `DBXAUTHRateLimitReason` object from a
/// json-compatible dictionary representation.
+ (DBXAUTHRateLimitReason * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
