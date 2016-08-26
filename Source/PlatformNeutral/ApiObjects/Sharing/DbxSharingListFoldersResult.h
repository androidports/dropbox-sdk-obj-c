///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFoldersResult;
@class DBXSHARINGSharedFolderMetadata;

/// 
/// The `DBXSHARINGListFoldersResult` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Result for listFolders or listMountableFolders, depending on which endpoint
/// was requested. Unmounted shared folders can be identified by the absence of
/// pathLower in SharedFolderMetadata.
/// 
@interface DBXSHARINGListFoldersResult : NSObject <DBXSerializable> 

/// List of all shared folders the authenticated user has access to.
@property (nonatomic) NSArray<DBXSHARINGSharedFolderMetadata *> * _Nonnull entries;

/// Present if there are additional shared folders that have not been returned
/// yet. Pass the cursor into the corresponding continue endpoint (either
/// listFoldersContinue or listMountableFoldersContinue) to list additional
/// folders.
@property (nonatomic, copy) NSString * _Nullable cursor;

/// Full constructor for the `ListFoldersResult` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithEntries:(NSArray<DBXSHARINGSharedFolderMetadata *> * _Nonnull)entries cursor:(NSString * _Nullable)cursor;

/// Convenience constructor for the `ListFoldersResult` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithEntries:(NSArray<DBXSHARINGSharedFolderMetadata *> * _Nonnull)entries;

/// Returns a human-readable representation of the `DBXSHARINGListFoldersResult`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGListFoldersResult` struct.
/// 
@interface DBXSHARINGListFoldersResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGListFoldersResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFoldersResult * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGListFoldersResult` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGListFoldersResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
