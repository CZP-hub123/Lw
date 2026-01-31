#include<Opencv/include/MyOpencvApi.h>

using namespace cv;
void InvertGary(const Mat & origin,Mat &dst){

    CV_Assert(origin.type()==CV_8UC1);
    dst.create(origin.size(),origin.type());
    for (int  i = 0; i < origin.rows; i++)
    {
        for (int  j = 0; j < origin.cols; j++)
        {
            uchar t = origin.at<uchar>(i,j);
            dst.at<uchar>(i,j) = 255-t;
        }
    }
}
