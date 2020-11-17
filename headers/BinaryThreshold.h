#ifndef BINARY_THRESHOLD_H
#define BINARY_THRESHOLD_H

#include "Process.h"

class BinaryThreshold : public Process {
        //this needs an image in grayscale,
        //as the it thresholds based on the intensity of the pixel
        //
        private: 
                double threshold;
                double maxValue;
                cv::Mat mImage;
                cv::Mat dst;
        public:
                virtual cv::Mat process();
                virtual void display();
                BinaryThreshold();
                BinaryThreshold(double, double, cv::Mat);
                BinaryThreshold(cv::Mat);
                cv::Mat getImage();
                
};
#endif