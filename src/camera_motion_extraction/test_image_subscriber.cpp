
/// [headers]
#define DISPLAY_ON
#include<image_subscriber.h>
/// [headers]

int main(int argc, char **argv){
    RosToCvmat img_conv;
    img_conv.imageSubscriber(argc, argv);
    return 0;
}