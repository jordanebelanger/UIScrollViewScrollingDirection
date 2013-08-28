UIScrollViewScrollingDirection
==============================

ScrollingDirectionScrollView

This is a drop in category for UIScrollView that enable the user to determine the scrolling direction of a UIScrollView rapidly.

It should be used with UIScrollViewDelegate in this fashion : 

- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
  [scrollView setLastContentOffset:scrollView.contentOffset];
}

This saves the scrollViews content offset before dragging begins allowing the scrolling direct to be determined in the other delegate methods like so

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate
{
  if (scrollView.scrollDirectionX == ScrollDirectionRight) {
    //Do something with your views etc
  }
  if (scrollView.scrollDirectionY == ScrollDirectionUp) {
    //Do something with your views etc
  }
}

Version 1.0.0

MIT License, Copyright © 2013 Jordane Belanger 
