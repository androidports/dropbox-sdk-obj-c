///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGFileAction;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileAction` union.
///
/// Sharing actions that may be taken on files.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGFileAction : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGFileActionTag` enum type represents the possible tag states
/// with which the `DBSHARINGFileAction` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGFileActionTag) {
  /// Disable viewer information on the file.
  DBSHARINGFileActionDisableViewerInfo,

  /// Change or edit contents of the file.
  DBSHARINGFileActionEditContents,

  /// Enable viewer information on the file.
  DBSHARINGFileActionEnableViewerInfo,

  /// Add a member with view permissions.
  DBSHARINGFileActionInviteViewer,

  /// Add a member with view permissions but no comment permissions.
  DBSHARINGFileActionInviteViewerNoComment,

  /// Stop sharing this file.
  DBSHARINGFileActionUnshare,

  /// Relinquish one's own membership to the file.
  DBSHARINGFileActionRelinquishMembership,

  /// Use create_link instead.
  DBSHARINGFileActionShareLink,

  /// Create a shared link to the file.
  DBSHARINGFileActionCreateLink,

  /// (no description).
  DBSHARINGFileActionOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGFileActionTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disable_viewer_info".
///
/// Description of the "disable_viewer_info" tag state: Disable viewer
/// information on the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisableViewerInfo;

///
/// Initializes union class with tag state of "edit_contents".
///
/// Description of the "edit_contents" tag state: Change or edit contents of the
/// file.
///
/// @return An initialized instance.
///
- (instancetype)initWithEditContents;

///
/// Initializes union class with tag state of "enable_viewer_info".
///
/// Description of the "enable_viewer_info" tag state: Enable viewer information
/// on the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithEnableViewerInfo;

///
/// Initializes union class with tag state of "invite_viewer".
///
/// Description of the "invite_viewer" tag state: Add a member with view
/// permissions.
///
/// @return An initialized instance.
///
- (instancetype)initWithInviteViewer;

///
/// Initializes union class with tag state of "invite_viewer_no_comment".
///
/// Description of the "invite_viewer_no_comment" tag state: Add a member with
/// view permissions but no comment permissions.
///
/// @return An initialized instance.
///
- (instancetype)initWithInviteViewerNoComment;

///
/// Initializes union class with tag state of "unshare".
///
/// Description of the "unshare" tag state: Stop sharing this file.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnshare;

///
/// Initializes union class with tag state of "relinquish_membership".
///
/// Description of the "relinquish_membership" tag state: Relinquish one's own
/// membership to the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithRelinquishMembership;

///
/// Initializes union class with tag state of "share_link".
///
/// Description of the "share_link" tag state: Use create_link instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithShareLink;

///
/// Initializes union class with tag state of "create_link".
///
/// Description of the "create_link" tag state: Create a shared link to the
/// file.
///
/// @return An initialized instance.
///
- (instancetype)initWithCreateLink;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "disable_viewer_info".
///
/// @return Whether the union's current tag state has value
/// "disable_viewer_info".
///
- (BOOL)isDisableViewerInfo;

///
/// Retrieves whether the union's current tag state has value "edit_contents".
///
/// @return Whether the union's current tag state has value "edit_contents".
///
- (BOOL)isEditContents;

///
/// Retrieves whether the union's current tag state has value
/// "enable_viewer_info".
///
/// @return Whether the union's current tag state has value
/// "enable_viewer_info".
///
- (BOOL)isEnableViewerInfo;

///
/// Retrieves whether the union's current tag state has value "invite_viewer".
///
/// @return Whether the union's current tag state has value "invite_viewer".
///
- (BOOL)isInviteViewer;

///
/// Retrieves whether the union's current tag state has value
/// "invite_viewer_no_comment".
///
/// @return Whether the union's current tag state has value
/// "invite_viewer_no_comment".
///
- (BOOL)isInviteViewerNoComment;

///
/// Retrieves whether the union's current tag state has value "unshare".
///
/// @return Whether the union's current tag state has value "unshare".
///
- (BOOL)isUnshare;

///
/// Retrieves whether the union's current tag state has value
/// "relinquish_membership".
///
/// @return Whether the union's current tag state has value
/// "relinquish_membership".
///
- (BOOL)isRelinquishMembership;

///
/// Retrieves whether the union's current tag state has value "share_link".
///
/// @return Whether the union's current tag state has value "share_link".
///
- (BOOL)isShareLink;

///
/// Retrieves whether the union's current tag state has value "create_link".
///
/// @return Whether the union's current tag state has value "create_link".
///
- (BOOL)isCreateLink;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGFileAction` union.
///
@interface DBSHARINGFileActionSerializer : NSObject

///
/// Serializes `DBSHARINGFileAction` instances.
///
/// @param instance An instance of the `DBSHARINGFileAction` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGFileAction` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGFileAction *)instance;

///
/// Deserializes `DBSHARINGFileAction` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGFileAction` API object.
///
/// @return An instantiation of the `DBSHARINGFileAction` object.
///
+ (DBSHARINGFileAction *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
