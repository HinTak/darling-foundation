#import <Foundation/NSObject.h>
#import <dispatch/dispatch.h>

enum {
    NSUbiquitousKeyValueStoreServerChange,
    NSUbiquitousKeyValueStoreInitialSyncChange,
    NSUbiquitousKeyValueStoreQuotaViolationChange,
    NSUbiquitousKeyValueStoreAccountChange
};

@class NSArray, NSDictionary, NSData, NSString;

FOUNDATION_EXPORT NSString * const NSUbiquitousKeyValueStoreDidChangeExternallyNotification;
FOUNDATION_EXPORT NSString * const NSUbiquitousKeyValueStoreChangeReasonKey;
FOUNDATION_EXPORT NSString * const NSUbiquitousKeyValueStoreChangedKeysKey;

@protocol _NSUbiquitousKeyValueStoreProvider;

@interface NSUbiquitousKeyValueStore : NSObject
{
    id<_NSUbiquitousKeyValueStoreProvider> _provider;
    dispatch_queue_t _providerQueue;
}

+ (NSUbiquitousKeyValueStore *)defaultStore;
- (id)objectForKey:(NSString *)aKey;
- (void)setObject:(id)anObject forKey:(NSString *)aKey;
- (void)removeObjectForKey:(NSString *)aKey;
- (NSString *)stringForKey:(NSString *)aKey;
- (NSArray *)arrayForKey:(NSString *)aKey;
- (NSDictionary *)dictionaryForKey:(NSString *)aKey;
- (NSData *)dataForKey:(NSString *)aKey;
- (long long)longLongForKey:(NSString *)aKey;
- (double)doubleForKey:(NSString *)aKey;
- (BOOL)boolForKey:(NSString *)aKey;
- (void)setString:(NSString *)aString forKey:(NSString *)aKey;
- (void)setData:(NSData *)aData forKey:(NSString *)aKey;
- (void)setArray:(NSArray *)anArray forKey:(NSString *)aKey;
- (void)setDictionary:(NSDictionary *)aDictionary forKey:(NSString *)aKey;
- (void)setLongLong:(long long)value forKey:(NSString *)aKey;
- (void)setDouble:(double)value forKey:(NSString *)aKey;
- (void)setBool:(BOOL)value forKey:(NSString *)aKey;
- (NSDictionary *)dictionaryRepresentation;
- (BOOL)synchronize;

@end
