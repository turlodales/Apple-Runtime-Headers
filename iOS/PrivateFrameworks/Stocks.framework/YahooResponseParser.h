//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YahooResponseParser : NSObject
{
}

+ (void)parseStockQuoteDictionaries:(id)arg1 withDataSources:(id)arg2 parsedStockResult:(CDUnknownBlockType)arg3;
+ (void)parseExchangeDictionaries:(id)arg1 parsedExchangeResult:(CDUnknownBlockType)arg2;
+ (id)parseDataSourceMapFromDataSourceDictionaries:(id)arg1;
+ (void)parseData:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
+ (id)objectOfClass:(Class)arg1 withDictionaryKeyPath:(id)arg2 inJSONObject:(id)arg3;
+ (id)arrayWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 wrapResultIfDictionary:(_Bool)arg3;
+ (id)dictionaryWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
+ (id)objectWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;

@end

