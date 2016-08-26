///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMobileClientPlatform;

/// 
/// The `DBXTEAMMobileClientPlatform` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMobileClientPlatform : NSObject <DBXSerializable> 

/// The `DBXTEAMMobileClientPlatformTag` enum type represents the possible tag
/// states that the `DBXTEAMMobileClientPlatform` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMMobileClientPlatformTag) {
    /// Official Dropbox iPhone client
    DBXTEAMMobileClientPlatformIphone,

    /// Official Dropbox iPad client
    DBXTEAMMobileClientPlatformIpad,

    /// Official Dropbox Android client
    DBXTEAMMobileClientPlatformAndroid,

    /// Official Dropbox Windows phone client
    DBXTEAMMobileClientPlatformWindowsPhone,

    /// Official Dropbox Blackberry client
    DBXTEAMMobileClientPlatformBlackberry,

    /// (no description).
    DBXTEAMMobileClientPlatformOther,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXTEAMMobileClientPlatformTag tag;

/// Initializes union class with tag state of `Iphone`.
- (nonnull instancetype)initWithIphone;

/// Initializes union class with tag state of `Ipad`.
- (nonnull instancetype)initWithIpad;

/// Initializes union class with tag state of `Android`.
- (nonnull instancetype)initWithAndroid;

/// Initializes union class with tag state of `WindowsPhone`.
- (nonnull instancetype)initWithWindowsPhone;

/// Initializes union class with tag state of `Blackberry`.
- (nonnull instancetype)initWithBlackberry;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Iphone`.
- (BOOL)isIphone;

/// Returns whether the union's current tag state has value `Ipad`.
- (BOOL)isIpad;

/// Returns whether the union's current tag state has value `Android`.
- (BOOL)isAndroid;

/// Returns whether the union's current tag state has value `WindowsPhone`.
- (BOOL)isWindowsPhone;

/// Returns whether the union's current tag state has value `Blackberry`.
- (BOOL)isBlackberry;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the `DBXTEAMMobileClientPlatform`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMMobileClientPlatform` union.
/// 
@interface DBXTEAMMobileClientPlatformSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMMobileClientPlatform` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMobileClientPlatform * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMMobileClientPlatform` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMMobileClientPlatform * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
