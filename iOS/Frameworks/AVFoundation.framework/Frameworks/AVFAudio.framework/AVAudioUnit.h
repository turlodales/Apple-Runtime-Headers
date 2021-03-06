//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioNode.h>

@class AUAudioUnit, NSString;

@interface AVAudioUnit : AVAudioNode
{
}

+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (float)valueForParam:(unsigned int)arg1;
- (_Bool)setValue:(float)arg1 forParam:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long version;
@property(readonly, nonatomic) NSString *manufacturerName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct AudioComponentDescription audioComponentDescription;
@property(readonly, nonatomic) struct OpaqueAudioComponentInstance *audioUnit;
- (_Bool)loadAudioUnitPresetAtURL:(id)arg1 error:(id *)arg2;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription)arg1;

// Remaining properties
@property(readonly, nonatomic) AUAudioUnit *AUAudioUnit; // @dynamic AUAudioUnit;

@end

