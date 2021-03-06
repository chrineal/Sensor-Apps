//
//  Shape2D.h
//  Asg4Gyro
//
//  Created by Alexander Ou on 3/7/16.
//  Copyright © 2016 ChrineApps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <GLKit/GLKit.h>
#include <math.h>

#ifndef Shape2D_h
#define Shape2D_h
@interface Shape2D : NSObject

//Variables
@property (nonatomic) CGColorRef color;
@property (nonatomic) double degreesToRotate;
@property (nonatomic) int pixelToTranslate;

//RGBA default values for an object
@property (nonatomic) CGFloat red;
@property (nonatomic) CGFloat green;
@property (nonatomic) CGFloat blue;
@property (nonatomic) CGFloat alpha;


//Methods
-(id)init;
+(CGPoint)rotateVector: (CGPoint) vectorToRotate : (double)degreesToRotate;
+(CGPoint)translateVector: (CGPoint) vectorToTranslate : (double) XTranslateAmount : (double) YTranslateAmount;

@end
#endif /* Shape2D_h */

