///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXSHARINGSharedLinkMetadata.h"

@class DBXSHARINGFolderLinkMetadata;
@class DBXSHARINGLinkPermissions;
@class DBXSHARINGTeamMemberInfo;
@class DBXUSERSTeam;

/// 
/// The `DBXSHARINGFolderLinkMetadata` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// The metadata of a folder shared link
/// 
@interface DBXSHARINGFolderLinkMetadata : DBXSHARINGSharedLinkMetadata <DBXSerializable> 

/// Full constructor for the `FolderLinkMetadata` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url name:(NSString * _Nonnull)name linkPermissions:(DBXSHARINGLinkPermissions * _Nonnull)linkPermissions id_:(NSString * _Nullable)id_ expires:(NSDate * _Nullable)expires pathLower:(NSString * _Nullable)pathLower teamMemberInfo:(DBXSHARINGTeamMemberInfo * _Nullable)teamMemberInfo contentOwnerTeamInfo:(DBXUSERSTeam * _Nullable)contentOwnerTeamInfo;

/// Convenience constructor for the `FolderLinkMetadata` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url name:(NSString * _Nonnull)name linkPermissions:(DBXSHARINGLinkPermissions * _Nonnull)linkPermissions;

/// Returns a human-readable representation of the
/// `DBXSHARINGFolderLinkMetadata` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGFolderLinkMetadata` struct.
/// 
@interface DBXSHARINGFolderLinkMetadataSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGFolderLinkMetadata` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGFolderLinkMetadata * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGFolderLinkMetadata` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGFolderLinkMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
