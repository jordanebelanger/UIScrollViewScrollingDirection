//
//  UIScrollView+UIScrollViewScrollingDirection.h
//
//  Created by Jordane Belanger on 2013-08-27.
//  Copyright (c) 2013 Jordane Belanger All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum ScrollDirection {
  ScrollDirectionNone,
  ScrollDirectionRight,
  ScrollDirectionLeft,
  ScrollDirectionUp,
  ScrollDirectionDown,
  ScrollDirectionCrazy,
} ScrollDirection;

@interface UIScrollView (UIScrollViewScrollingDirection)

- (int)scrollDirectionX;
- (int)scrollDirectionY;

- (CGPoint)lastContentOffset;
- (void)setLastContentOffset:(CGPoint)contentOffset;

@end
