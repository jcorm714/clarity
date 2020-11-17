#include<iostream>
#include"opencv2/opencv.hpp"
#include"headers/Image.h"
#include"headers/BinaryThreshold.h"
using namespace cv;

int main(int argc, char **argv){

        const char* imPath = "/Users/joshcormier/test.jpg";
        Mat image = imread(imPath, IMREAD_GRAYSCALE);
        Image im(image);
        im.display();
        waitKey(0);
        BinaryThreshold bt(75,128, im.getImage());
        bt.process();
        bt.display();
        waitKey(0);
       

        return 0;
}
