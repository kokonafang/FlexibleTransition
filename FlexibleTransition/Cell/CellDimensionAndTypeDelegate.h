//
//  CellDimensionAndTypeDelegate.h
//  ElasticTransitionExample
//
//  Created by fang on 16/02/16.
//  Copyright © 2016 fang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(int, PropertyRelated){
    STICKY,
    SHADOW,
    TRANSFORM,
    RADIUS
};

@protocol CellDimensionAndTypeDelegate

@required
@property (nonatomic) PropertyRelated  type;
@property (nonatomic) CGFloat   rowHeigth;
@property (nonatomic) NSString  *name;

@optional
-(void)didChangeStateToOn:(BOOL)on;

@end
