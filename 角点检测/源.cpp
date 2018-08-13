#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat srcImage = imread("1.jpg", 0);
	Mat dstImage, binImage;

	imshow("原始图", srcImage);

	cornerHarris(srcImage, dstImage, 2, 3, 0.016);
	imshow("效果图", dstImage);

	threshold(dstImage, binImage, 0.00001, 255, THRESH_BINARY);
	imshow("二值化", binImage);
	
	waitKey(0);

	return 0;
}
//角点检测

//创建第一个分支