#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat srcImage = imread("1.jpg", 0);
	Mat dstImage, binImage;

	imshow("SRCIMAGE", srcImage);

	cornerHarris(srcImage, dstImage, 2, 3, 6);
	imshow("CORNERHARRIS", dstImage);

	threshold(dstImage, binImage, -0.07, 255, THRESH_BINARY);
	imshow("DSTIMAGE", binImage);

	waitKey(0);

	return 0;
}
