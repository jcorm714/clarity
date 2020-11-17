#include"../headers/Image.h"

Image::Image(){}

Image::Image(cv::Mat s): mImage(s){}

cv::Mat Image::getImage(){
        return mImage;
}

void Image::display(){
        imshow("Test", mImage);
}