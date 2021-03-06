//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRTurkishSuffix : NSObject
{
    NSString *_pattern;
    NSString *_name;
    unsigned char _patternBuffer[16];
    unsigned char _isOptional[16];
    unsigned int _patternBufferLength;
    int _suffixType;
    _Bool _postponesApostrophe;
}

+ (void)enumerateSuffixMatchesForWord:(id)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)_enumerateSuffixMatchesForBuffer:(char *)arg1 length:(unsigned int)arg2 followedByLetter:(unsigned char)arg3 options:(unsigned int)arg4 depth:(unsigned int)arg5 matchState:(int)arg6 suffixStack:(id *)arg7 suffixRangeStack:(struct _NSRange *)arg8 usingBlock:(CDUnknownBlockType)arg9;
+ (id)standardTurkishSuffixes;
+ (id)standardTurkishVerbSuffixes;
+ (id)standardTurkishNounSuffixes;
- (unsigned int)matchingIndexInBuffer:(char *)arg1 length:(unsigned int)arg2 followedByLetter:(unsigned char)arg3 matchWithNameOnly:(_Bool *)arg4;
- (_Bool)postponesApostrophe;
- (int)suffixType;
- (id)name;
- (id)pattern;
- (id)description;
- (void)dealloc;
- (id)initWithPattern:(id)arg1 name:(id)arg2 type:(int)arg3 postponesApostrophe:(_Bool)arg4;
- (void)_fillPatternBuffer;

@end

