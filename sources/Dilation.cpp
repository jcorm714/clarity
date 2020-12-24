#include "../headers/Dilation.h"

Dilation::Dilation(){
}

Dilation::Dilation(cv::Mat other): mImage(other){}

Dilation::Dilation(cv::Mat other, int type, int size):
mImage(other),
dilationType(type),
dilationSize(size)
{
}

cv::Mat Dilation::process(){
        int dType = 0;

        switch (dilationType)
        {
        case 0:
                dType = cv::MORPH_RECT;
                break;
        case 1:
                dType = cv::MORPH_CROSS;

                break;
        case 2:
                dType = cv::MORPH_ELLIPSE;
                break;
        
        default:
                dType = cv::MORPH_RECT;
                break;
        }

        cv::Mat element = cv::getStructuringElement(dType, cv::Size(2*dilationSize + 1, 2* dilationSize + 1),cv::Point(dilationSize, dilationSize));
        cv::dilate(mImage, dst, element);
        return dst;
}

void Dilation::display(){
        imshow("Dilation", dst);
}

cv::Mat Dilation::getImage(){
        return dst;
}