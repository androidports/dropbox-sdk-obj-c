///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAclUpdatePolicy;
@class DBSHARINGMemberPolicy;
@class DBSHARINGShareFolderArgBase;
@class DBSHARINGSharedLinkPolicy;
@class DBSHARINGViewerInfoPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShareFolderArgBase` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGShareFolderArgBase : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Who can add and remove members of this shared folder.
@property (nonatomic, readonly, nullable) DBSHARINGAclUpdatePolicy *aclUpdatePolicy;

/// Whether to force the share to happen asynchronously.
@property (nonatomic, readonly) NSNumber *forceAsync;

/// Who can be a member of this shared folder. Only applicable if the current
/// user is on a team.
@property (nonatomic, readonly, nullable) DBSHARINGMemberPolicy *memberPolicy;

/// The path to the folder to share. If it does not exist, then a new one is
/// created.
@property (nonatomic, readonly, copy) NSString *path;

/// The policy to apply to shared links created for content inside this shared
/// folder.  The current user must be on a team to set this policy to `members`
/// in `DBSHARINGSharedLinkPolicy`.
@property (nonatomic, readonly, nullable) DBSHARINGSharedLinkPolicy *sharedLinkPolicy;

/// Who can enable/disable viewer info for this shared folder.
@property (nonatomic, readonly, nullable) DBSHARINGViewerInfoPolicy *viewerInfoPolicy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path to the folder to share. If it does not exist, then a
/// new one is created.
/// @param aclUpdatePolicy Who can add and remove members of this shared folder.
/// @param forceAsync Whether to force the share to happen asynchronously.
/// @param memberPolicy Who can be a member of this shared folder. Only
/// applicable if the current user is on a team.
/// @param sharedLinkPolicy The policy to apply to shared links created for
/// content inside this shared folder.  The current user must be on a team to
/// set this policy to `members` in `DBSHARINGSharedLinkPolicy`.
/// @param viewerInfoPolicy Who can enable/disable viewer info for this shared
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
             aclUpdatePolicy:(nullable DBSHARINGAclUpdatePolicy *)aclUpdatePolicy
                  forceAsync:(nullable NSNumber *)forceAsync
                memberPolicy:(nullable DBSHARINGMemberPolicy *)memberPolicy
            sharedLinkPolicy:(nullable DBSHARINGSharedLinkPolicy *)sharedLinkPolicy
            viewerInfoPolicy:(nullable DBSHARINGViewerInfoPolicy *)viewerInfoPolicy;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param path The path to the folder to share. If it does not exist, then a
/// new one is created.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ShareFolderArgBase` struct.
///
@interface DBSHARINGShareFolderArgBaseSerializer : NSObject

///
/// Serializes `DBSHARINGShareFolderArgBase` instances.
///
/// @param instance An instance of the `DBSHARINGShareFolderArgBase` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGShareFolderArgBase` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGShareFolderArgBase *)instance;

///
/// Deserializes `DBSHARINGShareFolderArgBase` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGShareFolderArgBase` API object.
///
/// @return An instantiation of the `DBSHARINGShareFolderArgBase` object.
///
+ (DBSHARINGShareFolderArgBase *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
