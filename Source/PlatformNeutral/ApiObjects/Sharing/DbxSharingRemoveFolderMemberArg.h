///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGMemberSelector;
@class DBXSHARINGRemoveFolderMemberArg;

/// 
/// The `DBXSHARINGRemoveFolderMemberArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGRemoveFolderMemberArg : NSObject <DBXSerializable> 

/// The ID for the shared folder.
@property (nonatomic, copy) NSString * _Nonnull sharedFolderId;

/// The member to remove from the folder.
@property (nonatomic) DBXSHARINGMemberSelector * _Nonnull member;

/// If true, the removed user will keep their copy of the folder after it's
/// unshared, assuming it was mounted. Otherwise, it will be removed from their
/// Dropbox. Also, this must be set to false when kicking a group.
@property (nonatomic, copy) NSNumber * _Nonnull leaveACopy;

/// Full constructor for the `RemoveFolderMemberArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId member:(DBXSHARINGMemberSelector * _Nonnull)member leaveACopy:(NSNumber * _Nonnull)leaveACopy;

/// Returns a human-readable representation of the
/// `DBXSHARINGRemoveFolderMemberArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGRemoveFolderMemberArg` struct.
/// 
@interface DBXSHARINGRemoveFolderMemberArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGRemoveFolderMemberArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGRemoveFolderMemberArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGRemoveFolderMemberArg` object
/// from a json-compatible dictionary representation.
+ (DBXSHARINGRemoveFolderMemberArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
