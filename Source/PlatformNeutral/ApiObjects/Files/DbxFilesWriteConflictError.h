///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESWriteConflictError;

/// 
/// The `DBXFILESWriteConflictError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESWriteConflictError : NSObject <DBXSerializable> 

/// The `DBXFILESWriteConflictErrorTag` enum type represents the possible tag
/// states that the `DBXFILESWriteConflictError` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESWriteConflictErrorTag) {
    /// There's a file in the way.
    DBXFILESWriteConflictErrorFile,

    /// There's a folder in the way.
    DBXFILESWriteConflictErrorFolder,

    /// There's a file at an ancestor path, so we couldn't create the required
    /// parent folders.
    DBXFILESWriteConflictErrorFileAncestor,

    /// (no description).
    DBXFILESWriteConflictErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXFILESWriteConflictErrorTag tag;

/// Initializes union class with tag state of `File`.
- (nonnull instancetype)initWithFile;

/// Initializes union class with tag state of `Folder`.
- (nonnull instancetype)initWithFolder;

/// Initializes union class with tag state of `FileAncestor`.
- (nonnull instancetype)initWithFileAncestor;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `File`.
- (BOOL)isFile;

/// Returns whether the union's current tag state has value `Folder`.
- (BOOL)isFolder;

/// Returns whether the union's current tag state has value `FileAncestor`.
- (BOOL)isFileAncestor;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DBXFILESWriteConflictError`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXFILESWriteConflictError` union.
/// 
@interface DBXFILESWriteConflictErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESWriteConflictError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESWriteConflictError * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESWriteConflictError` object from a
/// json-compatible dictionary representation.
+ (DBXFILESWriteConflictError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
