///
/// Auto-generated by Stone, do not modify.
///

#import "DBXSHARINGListFileMembersCountResult.h"
#import "DBXSHARINGSharedFileMembers.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXSHARINGListFileMembersCountResult 

- (instancetype)initWithMembers:(DBXSHARINGSharedFileMembers *)members memberCount:(NSNumber *)memberCount {

    self = [super init];
    if (self != nil) {
        _members = members;
        _memberCount = memberCount;
    }
    return self;
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXSHARINGListFileMembersCountResultSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXSHARINGListFileMembersCountResultSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXSHARINGListFileMembersCountResultSerializer serialize:self] description];
}

@end


@implementation DBXSHARINGListFileMembersCountResultSerializer 

+ (NSDictionary *)serialize:(DBXSHARINGListFileMembersCountResult *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"members"] = [DBXSHARINGSharedFileMembersSerializer serialize:valueObj.members];
    jsonDict[@"member_count"] = valueObj.memberCount;

    return jsonDict;
}

+ (DBXSHARINGListFileMembersCountResult *)deserialize:(NSDictionary *)valueDict {
    DBXSHARINGSharedFileMembers *members = [DBXSHARINGSharedFileMembersSerializer deserialize:valueDict[@"members"]];
    NSNumber *memberCount = valueDict[@"member_count"];

    return [[DBXSHARINGListFileMembersCountResult alloc] initWithMembers:members memberCount:memberCount];
}

@end
