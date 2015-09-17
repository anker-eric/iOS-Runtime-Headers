/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJoint : NSObject <NSCoding> {
    BOOL __implicit;
    SKPhysicsBody *bodyA;
    SKPhysicsBody *bodyB;
    struct CGVector { 
        float dx; 
        float dy; 
    } reactionForce;
    float reactionTorque;
}

@property (nonatomic) BOOL _implicit;
@property (nonatomic, retain) SKPhysicsBody *bodyA;
@property (nonatomic, retain) SKPhysicsBody *bodyB;
@property (nonatomic, readonly) struct CGVector { float x1; float x2; } reactionForce;
@property (nonatomic, readonly) float reactionTorque;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (BOOL)_implicit;
- (id)bodyA;
- (id)bodyB;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGVector { float x1; float x2; })reactionForce;
- (float)reactionTorque;
- (void)setBodyA:(id)arg1;
- (void)setBodyB:(id)arg1;
- (void)set_implicit:(BOOL)arg1;

@end