#include<iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
 
int main(){

    cout<<"HELLO WORLD"<<endl;
    Mat img = imread("E:\\05.Pictures\\2006\\05\\003.jpg");
    int a = 10;
    imshow("img", img);
    waitKey(0);
    
    return 0;
}
