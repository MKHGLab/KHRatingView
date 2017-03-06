//
//  KHRatingView.h
//

#import <UIKit/UIKit.h>

@protocol KHRatingViewDelegate <NSObject>
@optional
- (void)ratingChanged:(int)viewTag ratingValue: (float)rating;
@end

IB_DESIGNABLE
@interface KHRatingView : UIControl {
  CALayer *_starMaskLayer;
  CALayer *_highlightLayer;
  UIImage *_markImage;
}
@property (nonatomic) IBInspectable NSUInteger numberOfStar;
@property (copy, nonatomic) IBInspectable NSString *markCharacter;
@property (strong, nonatomic) IBInspectable UIFont *markFont;
@property (strong, nonatomic) IBInspectable UIImage *markImage;
@property (strong, nonatomic) IBInspectable UIColor *baseColor;
@property (strong, nonatomic) IBInspectable UIColor *highlightColor;
@property (nonatomic) IBInspectable int ratingViewTag;
@property (nonatomic) IBInspectable float starSize;
@property (nonatomic) IBInspectable float value;
@property (nonatomic) IBInspectable float stepInterval;
@property (nonatomic) IBInspectable float minimumValue;

@property (nonatomic, weak) id <KHRatingViewDelegate> delegate;

@end



