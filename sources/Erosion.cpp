#include "../headers/Erosion.h"

Erosion::Erosion(){}

Erosion::Erosion(cv::Mat other): mImage(other){}

Erosion::Erosion(cv::Mat other, int type, int size)
:
        mImage(other),
        erosionSize(size),
        erosionType(type)
{}

cv::Mat Erosion::getImage(){
        return dst;
}

void Erosion::display(){
        imshow("Erosion", dst);
}

cv::Mat Erosion::process(){
        
        //set the type of erosion
        int eType = 0;
        switch (erosionType)
        {
        case 0:
                eType = cv::MORPH_RECT;
                break;
        case 1:
                eType = cv::MORPH_CROSS;
                break;
        case 2:
                eType = cv::MORPH_ELLIPSE;
                break;
        
        default:
                eType = cv::MORPH_RECT;
                break;
        }

        cv::Mat element = cv::getStructuringElement(eType, 
                                                cv::Size(2*erosionSize + 1, 2* erosionSize + 1),
                                                cv::Point(erosionSize, erosionSize));

        cv::erode(mImage, dst, element);
        return dst;        
}