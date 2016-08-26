///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESUploadSessionFinishBatchJobStatus;
@class DBXFILESUploadSessionFinishBatchResult;

/// 
/// The `DBXFILESUploadSessionFinishBatchJobStatus` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadSessionFinishBatchJobStatus : NSObject <DBXSerializable> 

/// The `DBXFILESUploadSessionFinishBatchJobStatusTag` enum type represents the
/// possible tag states that the `DBXFILESUploadSessionFinishBatchJobStatus`
/// union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESUploadSessionFinishBatchJobStatusTag) {
    /// The asynchronous job is still in progress.
    DBXFILESUploadSessionFinishBatchJobStatusInProgress,

    /// The uploadSessionFinishBatch has finished.
    DBXFILESUploadSessionFinishBatchJobStatusComplete,

};

/// Represents the union's current tag state.
@property (nonatomic) DBXFILESUploadSessionFinishBatchJobStatusTag tag;

/// The uploadSessionFinishBatch has finished.
@property (nonatomic) DBXFILESUploadSessionFinishBatchResult * _Nonnull complete;

/// Initializes union class with tag state of `InProgress`.
- (nonnull instancetype)initWithInProgress;

/// Initializes union class with tag state of `Complete`.
- (nonnull instancetype)initWithComplete:(DBXFILESUploadSessionFinishBatchResult * _Nonnull)complete;

/// Returns whether the union's current tag state has value `InProgress`.
- (BOOL)isInProgress;

/// Returns whether the union's current tag state has value `Complete`.
- (BOOL)isComplete;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

/// Returns a human-readable representation of the
/// `DBXFILESUploadSessionFinishBatchJobStatus` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXFILESUploadSessionFinishBatchJobStatus`
/// union.
/// 
@interface DBXFILESUploadSessionFinishBatchJobStatusSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESUploadSessionFinishBatchJobStatus` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadSessionFinishBatchJobStatus * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESUploadSessionFinishBatchJobStatus`
/// object from a json-compatible dictionary representation.
+ (DBXFILESUploadSessionFinishBatchJobStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
