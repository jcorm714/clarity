#include<iostream>
#include"opencv2/opencv.hpp"

using namespace cv;

int main(int argc, char **argv){

        const char* imPath = "/Users/joshcormier/test.jpg";
        Mat image = imread(imPath);

        String name = "Test";
        cv::imshow( name, image);
        waitKey(0);

        std::cout<<"hello world" << '\n';
        return 0;
}
