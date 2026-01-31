#include<iostream>
#include<opencv2/opencv.hpp>
#include"MyOpencvApi.h"
using namespace std;
using namespace cv;

int main(){

    Mat img = imread("Opencv/data/img/test.JPG",IMREAD_GRAYSCALE);
    Mat img1 = imread("Opencv/data/img/test.JPG",IMREAD_COLOR);
    cout<<img.type()<<endl;
    cout<<img1.type()<<endl;
    if (img.empty())
    {
        cout << "image load failed!" << endl;
        return -1;
    }
    cout<<"img row:"<<img.rows<<"img col:"<<img.cols<<endl;
    namedWindow("img",WINDOW_NORMAL);
    resizeWindow("img",800,800);
    imshow("img", img);
    Mat a = img;
    Mat b ;
    InvertGary(img,b);
    // a.at<uchar>(0,0) = 0;
    // b.at<uchar>(0,0) = 255;

    // cout<<(int)img.at<uchar>(0,0)<<endl;
    // cout<<(int)a.at<uchar>(0,0)<<endl;
    // cout<<(int)b.at<uchar>(0,0)<<endl;
    
    namedWindow("b",WINDOW_NORMAL);
    resizeWindow("b",800,800);
    imshow("b",b);    

    //imshow("img", img);
    waitKey(0);
    return 0;
}