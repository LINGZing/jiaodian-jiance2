#include<opencv2/opencv.hpp>
#include<iostream>ipostream 
using namespace cv;

int main()
{
	Mat srcImage = imread("1.jpg", 0);
	Mat dstImage, binImage;

	imshow("ԭʼͼ", srcImage);

	cornerHarris(srcImage, dstImage, 2, 3, 0.016);
	imshow("Ч��ͼ", dstImage);

	threshold(dstImage, binImage, 0.00001, 255, THRESH_BINARY);
	imshow("��ֵ��", binImage);
	
	waitKey(0);

	return 0;
}