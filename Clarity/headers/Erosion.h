#ifndef EROSION_H
#define EROSION_H

#include"Process.h"
#include"opencv2/imgproc.hpp"

class Erosion : public Process {

        private:
                int erosionType;
                int erosionSize;
                cv::Mat mImage;
                cv::Mat dst;
        public:
                virtual cv::Mat process();
                virtual void display();
                Erosion();
                Erosion(cv::Mat);
                Erosion(cv::Mat, int, int);
                cv::Mat getImage();

};
#endif