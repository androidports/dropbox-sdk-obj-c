///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXPROPERTIESGetPropertyTemplateArg;

/// 
/// The `DBXPROPERTIESGetPropertyTemplateArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXPROPERTIESGetPropertyTemplateArg : NSObject <DBXSerializable> 

/// An identifier for property template added by route properties/template/add.
@property (nonatomic, copy) NSString * _Nonnull templateId;

/// Full constructor for the `GetPropertyTemplateArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId;

/// Returns a human-readable representation of the
/// `DBXPROPERTIESGetPropertyTemplateArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXPROPERTIESGetPropertyTemplateArg`
/// struct.
/// 
@interface DBXPROPERTIESGetPropertyTemplateArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXPROPERTIESGetPropertyTemplateArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXPROPERTIESGetPropertyTemplateArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXPROPERTIESGetPropertyTemplateArg` object
/// from a json-compatible dictionary representation.
+ (DBXPROPERTIESGetPropertyTemplateArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
