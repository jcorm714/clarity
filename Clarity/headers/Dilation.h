#ifndef DILATION_H
#define DILATION_H

#include"opencv2/imgproc.hpp"
#include "Process.h"
class Dilation: public Process {

        private:
                int dilationType;
                int dilationSize;
                cv::Mat mImage;
                cv::Mat dst;

        public:
                Dilation();
                Dilation(cv::Mat);
                Dilation(cv::Mat, int, int);
                virtual cv::Mat process();
                virtual void display();
                cv::Mat getImage();
};
#endif