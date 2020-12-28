#include<iostream>
#include"opencv2/opencv.hpp"
#include"headers/Image.h"
#include"headers/BinaryThreshold.h"
#include"headers/Erosion.h"
#include"headers/Dilation.h"
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
        Erosion er(bt.getImage(), 0, 5);
        er.process();
        er.display();
        waitKey(0);
        Dilation dt(er.getImage(), 0, 5);
        dt.process();
        dt.display();
        waitKey();

        return 0;
}
