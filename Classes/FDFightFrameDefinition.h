//
//  FDFightFrameDefinition.h
//  FlameDragon
//
//  Created by sui toney on 11-11-24.
//  Copyright 2011 ms. All rights reserved.
//

#import "FDSetImageFrameDefinition.h"


@interface FDFightFrameDefinition : FDSetImageFrameDefinition {

	CGPoint location;
	
	int soundId;
	BOOL isRemote;
	BOOL isHitting;
}

-(id) initFromFile:(NSString *)fileName Time:(int)t Sound:(int)s Remote:(BOOL)r Hitting:(BOOL)h;

-(BOOL) isRemote;
-(BOOL) isHitting;

@end
