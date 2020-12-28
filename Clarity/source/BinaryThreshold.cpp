#include "../headers/BinaryThreshold.h"

BinaryThreshold::BinaryThreshold(){}
BinaryThreshold::BinaryThreshold(cv::Mat m): mImage(m){}
BinaryThreshold::BinaryThreshold(double thresh, double max, cv::Mat m):
  threshold(thresh),
  maxValue(max)
{
        mImage = m;
       

}

cv::Mat BinaryThreshold::process(){
        cv::threshold(mImage, dst, threshold, maxValue, cv::THRESH_BINARY);
        return dst;
}

void BinaryThreshold::display(){
        imshow("Binary Threshold", dst);
}

cv::Mat BinaryThreshold::getImage(){
        return dst;
}