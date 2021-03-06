//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DialogEngine/DEWriter-Protocol.h>

@protocol DEWriter;

@interface DEDecompressWriter : NSObject <DEWriter>
{
    _Bool _streamInitialized;
    _Bool _streamEnded;
    NSObject<DEWriter> *_writer;
    struct z_stream_s _stream;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool streamEnded; // @synthesize streamEnded=_streamEnded;
@property(nonatomic) _Bool streamInitialized; // @synthesize streamInitialized=_streamInitialized;
@property(nonatomic) struct z_stream_s stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSObject<DEWriter> *writer; // @synthesize writer=_writer;
- (void)writeData:(id)arg1;
- (void)close;
- (id)decompress:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithWriter:(id)arg1;

@end

