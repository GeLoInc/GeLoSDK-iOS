#import <Foundation/Foundation.h>

@interface GeLoUrl : NSObject {
    NSString *baseUrl;
}

+(GeLoUrl*)sharedInstance;

-(GeLoUrl*) initWithEnv:(NSString*)env;
-(NSURL*) withPath:(NSString*)path;

@property (nonatomic) NSString *baseUrl;


@end
