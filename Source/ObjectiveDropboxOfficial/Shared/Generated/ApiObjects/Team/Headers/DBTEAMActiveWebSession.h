///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMDeviceSession.h"

@class DBTEAMActiveWebSession;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ActiveWebSession` struct.
///
/// Information on active web sessions.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMActiveWebSession : DBTEAMDeviceSession <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Information on the hosting device.
@property (nonatomic, readonly, copy) NSString *userAgent;

/// Information on the hosting operating system.
@property (nonatomic, readonly, copy) NSString *os;

/// Information on the browser used for this web session.
@property (nonatomic, readonly, copy) NSString *browser;

/// The time this session expires.
@property (nonatomic, readonly, nullable) NSDate *expires;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sessionId The session id.
/// @param userAgent Information on the hosting device.
/// @param os Information on the hosting operating system.
/// @param browser Information on the browser used for this web session.
/// @param ipAddress The IP address of the last activity from this session.
/// @param country The country from which the last activity from this session
/// was made.
/// @param created The time this session was created.
/// @param updated The time of the last activity from this session.
/// @param expires The time this session expires.
///
/// @return An initialized instance.
///
- (instancetype)initWithSessionId:(NSString *)sessionId
                        userAgent:(NSString *)userAgent
                               os:(NSString *)os
                          browser:(NSString *)browser
                        ipAddress:(nullable NSString *)ipAddress
                          country:(nullable NSString *)country
                          created:(nullable NSDate *)created
                          updated:(nullable NSDate *)updated
                          expires:(nullable NSDate *)expires;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param sessionId The session id.
/// @param userAgent Information on the hosting device.
/// @param os Information on the hosting operating system.
/// @param browser Information on the browser used for this web session.
///
/// @return An initialized instance.
///
- (instancetype)initWithSessionId:(NSString *)sessionId
                        userAgent:(NSString *)userAgent
                               os:(NSString *)os
                          browser:(NSString *)browser;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ActiveWebSession` struct.
///
@interface DBTEAMActiveWebSessionSerializer : NSObject

///
/// Serializes `DBTEAMActiveWebSession` instances.
///
/// @param instance An instance of the `DBTEAMActiveWebSession` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMActiveWebSession` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMActiveWebSession *)instance;

///
/// Deserializes `DBTEAMActiveWebSession` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMActiveWebSession` API object.
///
/// @return An instantiation of the `DBTEAMActiveWebSession` object.
///
+ (DBTEAMActiveWebSession *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
