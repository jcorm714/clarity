#ifndef IMAGE_H
#define IMAGE_H
#include"opencv2/opencv.hpp"

class Image {
        private:
                cv::Mat mImage;
        public:
                Image();
                Image(cv::Mat);
                cv::Mat getImage();
                virtual void display();
                
        
};

#endif