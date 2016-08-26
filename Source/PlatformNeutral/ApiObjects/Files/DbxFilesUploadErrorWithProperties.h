///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESInvalidPropertyGroupError;
@class DBXFILESUploadErrorWithProperties;
@class DBXFILESUploadWriteFailed;

/// 
/// The `DBXFILESUploadErrorWithProperties` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadErrorWithProperties : NSObject <DBXSerializable> 

/// The `DBXFILESUploadErrorWithPropertiesTag` enum type represents the possible
/// tag states that the `DBXFILESUploadErrorWithProperties` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESUploadErrorWithPropertiesTag) {
    /// Unable to save the uploaded contents to a file.
    DBXFILESUploadErrorWithPropertiesPath,

    /// (no description).
    DBXFILESUploadErrorWithPropertiesOther,

    /// (no description).
    DBXFILESUploadErrorWithPropertiesPropertiesError,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXFILESUploadErrorWithPropertiesTag tag;

/// Unable to save the uploaded contents to a file.
@property (nonatomic) DBXFILESUploadWriteFailed * _Nonnull path;

/// (no description).
@property (nonatomic) DBXFILESInvalidPropertyGroupError * _Nonnull propertiesError;

/// Initializes union class with tag state of `Path`.
- (nonnull instancetype)initWithPath:(DBXFILESUploadWriteFailed * _Nonnull)path;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `PropertiesError`.
- (nonnull instancetype)initWithPropertiesError:(DBXFILESInvalidPropertyGroupError * _Nonnull)propertiesError;

/// Returns whether the union's current tag state has value `Path`.
- (BOOL)isPath;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `PropertiesError`.
- (BOOL)isPropertiesError;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DBXFILESUploadErrorWithProperties` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXFILESUploadErrorWithProperties` union.
/// 
@interface DBXFILESUploadErrorWithPropertiesSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESUploadErrorWithProperties` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadErrorWithProperties * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESUploadErrorWithProperties` object
/// from a json-compatible dictionary representation.
+ (DBXFILESUploadErrorWithProperties * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
