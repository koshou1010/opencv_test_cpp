#include<opencv2/opencv.hpp>

using namespace cv;

int main() {
	Mat img = imread("test.png", -1);
	if (img.empty()) return -1;
	namedWindow("HelloCV", WINDOW_AUTOSIZE);
	imshow("HelloCV", img);
	waitKey(0);
	destroyWindow("HelloCV");
	return 0;
}