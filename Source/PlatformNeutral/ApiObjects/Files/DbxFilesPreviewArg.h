///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESPreviewArg;

/// 
/// The `DBXFILESPreviewArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESPreviewArg : NSObject <DBXSerializable> 

/// The path of the file to preview.
@property (nonatomic, copy) NSString * _Nonnull path;

/// Deprecated. Please specify revision in path instead
@property (nonatomic, copy) NSString * _Nullable rev;

/// Full constructor for the `PreviewArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path rev:(NSString * _Nullable)rev;

/// Convenience constructor for the `PreviewArg` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

/// Returns a human-readable representation of the `DBXFILESPreviewArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXFILESPreviewArg` struct.
/// 
@interface DBXFILESPreviewArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESPreviewArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESPreviewArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESPreviewArg` object from a
/// json-compatible dictionary representation.
+ (DBXFILESPreviewArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
