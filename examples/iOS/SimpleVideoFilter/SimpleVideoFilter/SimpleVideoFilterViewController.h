#import <UIKit/UIKit.h>
#import <GPUImage/GPUImage.h>

@interface SimpleVideoFilterViewController : UIViewController
{
    GPUImageVideoCamera *videoCamera;
    GPUImageOutput<GPUImageInput> *filter;
    GPUImageMovieWriter *movieWriter;
}

- (IBAction)updateSliderValue:(id)sender;

@end
