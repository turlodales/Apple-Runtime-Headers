//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface REExportedValueEncoder : NSObject
{
    unsigned long long _options;
}

- (void)writeArrayValuePairToStream:(id)arg1 valueWriter:(CDUnknownBlockType)arg2 isLast:(_Bool)arg3;
- (void)writeArrayEndToStream:(id)arg1;
- (void)writeArrayStartToStream:(id)arg1;
- (_Bool)writesArrayHeader;
- (void)writeDictionaryValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;
- (void)writeDictionaryEndToStream:(id)arg1;
- (void)writeDictionaryStartToStream:(id)arg1;
- (_Bool)writesDictionaryHeader;
- (void)writeObjectValuePairToStream:(id)arg1 keyWriter:(CDUnknownBlockType)arg2 valueWriter:(CDUnknownBlockType)arg3 isLast:(_Bool)arg4;
- (void)writeObjectEnd:(id)arg1 toStream:(id)arg2;
- (void)writeObjectStart:(id)arg1 toStream:(id)arg2;
- (void)writeUnsupportedObject:(id)arg1 toStream:(id)arg2;
- (void)writeNullToStream:(id)arg1;
- (void)writeNumber:(id)arg1 toStream:(id)arg2;
- (void)writeString:(id)arg1 toStream:(id)arg2;
- (void)writeDate:(id)arg1 toStream:(id)arg2;
- (id)_namesArrayFromArray:(id)arg1;
- (void)_writeCollection:(id)arg1 toStream:(id)arg2 startBlock:(CDUnknownBlockType)arg3 writerBlock:(CDUnknownBlockType)arg4 endBlock:(CDUnknownBlockType)arg5 wantsHeader:(_Bool)arg6 depth:(unsigned long long)arg7;
- (void)_writeValue:(id)arg1 toStream:(id)arg2 depth:(unsigned long long)arg3 needsIndent:(_Bool)arg4;
- (id)dataFromExportedValue:(id)arg1;
- (void)writeExportedValue:(id)arg1 toStream:(id)arg2;
- (id)initWithOptions:(unsigned long long)arg1;

@end

