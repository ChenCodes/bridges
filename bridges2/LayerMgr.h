//
//  LayerMgr.h
//  bridges
//
//  Created by Zack Grossbart on 8/25/12.
//
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "Box2D.h"

#define PTM_RATIO 32.0

@interface LayerMgr : NSObject {
    b2World *_world;
}

+(CGFloat) distanceBetweenTwoPoints: (CGPoint) point1: (CGPoint) point2;

-(id) initWithSpriteSheet:(CCSpriteBatchNode*) spriteSheet:(b2World*) world;
-(void)addChildToSheet:(CCSprite*) sprite;
-(void)addBoxBodyForSprite:(CCSprite *)sprite;
-(void)spriteDone:(id)sender;

@end