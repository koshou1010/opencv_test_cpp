
#include <opencv2\opencv.hpp> 

using namespace cv;
using namespace std;

int main()
{
    VideoCapture capture(0); //開啟電腦攝像頭
    if (!capture.isOpened()) //檢查是否成功開啟
        cout << "fail to open!" << endl;
    namedWindow("camera", 1); //命名影像視窗

    Mat frame; //定義每個影格
    int delay = 30;
    while (1)
    {
        capture >> frame; //捕捉影像
        if (frame.empty())
            break;

        imshow("camera", frame);

        if (delay >= 0 && waitKey(delay) >= 0)
            waitKey(0);
    }
}