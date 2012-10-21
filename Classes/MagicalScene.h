//
//  MagicalScene.h
//  FlameDragon
//
//  Created by sui toney on 12-10-20.
//  Copyright 2012 ms. All rights reserved.
//

#import "cocos2d.h"
#import "BattleScene.h"
#import "MagicalInformation.h"
#import "MagicDefinition.h"

@interface MagicalScene : BattleScene {

	MagicalInformation *magicalInfo;
	MagicDefinition *magicDefinition;
	
	FDCreature *subject;
	NSArray *targetList;

	// UI
	FDSprite *subjectSprite;
	FDSprite *targetSprite;
	
	AnimationDefinition *subjectAttackAni;
	AnimationDefinition *subjectIdleAni;
	FDCombinedAnimation *subjectAnimation;
	
	AnimationDefinition *targetIdleAni;
	FDCombinedAnimation *targetAnimation;
	
	BOOL updatedMp;
}

-(id) initWithMagic:(int)mId Subject:(FDCreature *)sub Targets:(NSArray *)tars Information:(MagicalInformation *)info Background:(int)backgroundImageId;

-(void) appendIdleAnimation;
-(void) appendSubjectAttackAnimation;

-(void) updateMp;
@end
