//
//  FDLocalString.h
//  FlameDragon
//
//  Created by sui toney on 11-12-27.
//  Copyright 2011 ms. All rights reserved.
//

#import "cocos2d.h"


@interface FDLocalString : NSObject {

}

+(NSString *) chapter:(int)charId conversation:(int)converId sequence:(int)sequenceId;
+(NSString *) chapterCreature:(int)charId conversation:(int)converId sequence:(int)sequenceId;

+(NSString *) race:(int)raceId;
+(NSString *) occupation:(int)occupationId;
+(NSString *) creature:(int)creatureDefId;

+(NSString *) chapter:(int)charId;

+(NSString *) confirm:(int)confirmId;
+(NSString *) message:(int)msgId;


@end
