///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESDimensions;
@class DBXFILESGpsCoordinates;
@class DBXFILESMediaMetadata;

/// 
/// The `DBXFILESMediaMetadata` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Metadata for a photo or video.
/// 
@interface DBXFILESMediaMetadata : NSObject <DBXSerializable> 

/// Dimension of the photo/video.
@property (nonatomic) DBXFILESDimensions * _Nullable dimensions;

/// The GPS coordinate of the photo/video.
@property (nonatomic) DBXFILESGpsCoordinates * _Nullable location;

/// The timestamp when the photo/video is taken.
@property (nonatomic) NSDate * _Nullable timeTaken;

/// Full constructor for the `MediaMetadata` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithDimensions:(DBXFILESDimensions * _Nullable)dimensions location:(DBXFILESGpsCoordinates * _Nullable)location timeTaken:(NSDate * _Nullable)timeTaken;

/// Convenience constructor for the `MediaMetadata` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)init;

/// Returns a human-readable representation of the `DBXFILESMediaMetadata`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXFILESMediaMetadata` struct.
/// 
@interface DBXFILESMediaMetadataSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESMediaMetadata` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESMediaMetadata * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESMediaMetadata` object from a
/// json-compatible dictionary representation.
+ (DBXFILESMediaMetadata * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
