///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGLinkMetadata;
@class DBXSHARINGVisibility;

/// 
/// The `DBXSHARINGLinkMetadata` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Metadata for a shared link. This can be either a PathLinkMetadata or
/// CollectionLinkMetadata.
/// 
@interface DBXSHARINGLinkMetadata : NSObject <DBXSerializable> 

/// URL of the shared link.
@property (nonatomic, copy) NSString * _Nonnull url;

/// Who can access the link.
@property (nonatomic) DBXSHARINGVisibility * _Nonnull visibility;

/// Expiration time, if set. By default the link won't expire.
@property (nonatomic) NSDate * _Nullable expires;

/// Full constructor for the `LinkMetadata` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DBXSHARINGVisibility * _Nonnull)visibility expires:(NSDate * _Nullable)expires;

/// Convenience constructor for the `LinkMetadata` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url visibility:(DBXSHARINGVisibility * _Nonnull)visibility;

/// Returns a human-readable representation of the `DBXSHARINGLinkMetadata`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGLinkMetadata` struct.
/// 
@interface DBXSHARINGLinkMetadataSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGLinkMetadata` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGLinkMetadata * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGLinkMetadata` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGLinkMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
