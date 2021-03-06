#import <UIKit/UIKit.h>
#import <GPUImage/GPUImage.h>

@interface SimpleVideoFileFilterViewController : UIViewController
{
    GPUImageMovie *movieFile;
    GPUImageOutput<GPUImageInput> *filter;
    GPUImageMovieWriter *movieWriter;
}

- (IBAction)updatePixelWidth:(id)sender;

@end
