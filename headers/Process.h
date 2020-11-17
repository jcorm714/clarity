#ifndef PROCESS_H
#define PROCESS_H

#include "Image.h"
class Process : public Image {
        private:
                cv::Mat mImage;
        public:
                virtual cv::Mat process();
                Process();
               

};
#endif