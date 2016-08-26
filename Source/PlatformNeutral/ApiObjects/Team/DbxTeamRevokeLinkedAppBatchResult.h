///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMRevokeLinkedAppBatchResult;
@class DBXTEAMRevokeLinkedAppStatus;

/// 
/// The `DBXTEAMRevokeLinkedAppBatchResult` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMRevokeLinkedAppBatchResult : NSObject <DBXSerializable> 

/// (no description).
@property (nonatomic) NSArray<DBXTEAMRevokeLinkedAppStatus *> * _Nonnull revokeLinkedAppStatus;

/// Full constructor for the `RevokeLinkedAppBatchResult` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithRevokeLinkedAppStatus:(NSArray<DBXTEAMRevokeLinkedAppStatus *> * _Nonnull)revokeLinkedAppStatus;

/// Returns a human-readable representation of the
/// `DBXTEAMRevokeLinkedAppBatchResult` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMRevokeLinkedAppBatchResult` struct.
/// 
@interface DBXTEAMRevokeLinkedAppBatchResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMRevokeLinkedAppBatchResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMRevokeLinkedAppBatchResult * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMRevokeLinkedAppBatchResult` object
/// from a json-compatible dictionary representation.
+ (DBXTEAMRevokeLinkedAppBatchResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
