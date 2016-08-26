///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMListMembersDevicesError;

/// 
/// The `DBXTEAMListMembersDevicesError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMListMembersDevicesError : NSObject <DBXSerializable> 

/// The `DBXTEAMListMembersDevicesErrorTag` enum type represents the possible
/// tag states that the `DBXTEAMListMembersDevicesError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMListMembersDevicesErrorTag) {
    /// Indicates that the cursor has been invalidated. Call
    /// devicesListMembersDevices again with an empty cursor to obtain a new
    /// cursor.
    DBXTEAMListMembersDevicesErrorReset,

    /// (no description).
    DBXTEAMListMembersDevicesErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXTEAMListMembersDevicesErrorTag tag;

/// Initializes union class with tag state of `Reset`.
- (nonnull instancetype)initWithReset;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Reset`.
- (BOOL)isReset;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DBXTEAMListMembersDevicesError` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMListMembersDevicesError` union.
/// 
@interface DBXTEAMListMembersDevicesErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMListMembersDevicesError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMListMembersDevicesError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMListMembersDevicesError` object from
/// a json-compatible dictionary representation.
+ (DBXTEAMListMembersDevicesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
