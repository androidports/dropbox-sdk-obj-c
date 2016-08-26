///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGUnshareFolderArg;

/// 
/// The `DBXSHARINGUnshareFolderArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGUnshareFolderArg : NSObject <DBXSerializable> 

/// The ID for the shared folder.
@property (nonatomic, copy) NSString * _Nonnull sharedFolderId;

/// If true, members of this shared folder will get a copy of this folder after
/// it's unshared. Otherwise, it will be removed from their Dropbox. The current
/// user, who is an owner, will always retain their copy.
@property (nonatomic, copy) NSNumber * _Nonnull leaveACopy;

/// Full constructor for the `UnshareFolderArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId leaveACopy:(NSNumber * _Nullable)leaveACopy;

/// Convenience constructor for the `UnshareFolderArg` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId;

/// Returns a human-readable representation of the `DBXSHARINGUnshareFolderArg`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGUnshareFolderArg` struct.
/// 
@interface DBXSHARINGUnshareFolderArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGUnshareFolderArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGUnshareFolderArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGUnshareFolderArg` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGUnshareFolderArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
