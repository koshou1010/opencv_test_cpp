
#include <opencv2\opencv.hpp> 

using namespace cv;
using namespace std;

int main()
{
    VideoCapture capture(0); //�}�ҹq���ṳ�Y
    if (!capture.isOpened()) //�ˬd�O�_���\�}��
        cout << "fail to open!" << endl;
    namedWindow("camera", 1); //�R�W�v������

    Mat frame; //�w�q�C�Ӽv��
    int delay = 30;
    while (1)
    {
        capture >> frame; //�����v��
        if (frame.empty())
            break;

        imshow("camera", frame);

        if (delay >= 0 && waitKey(delay) >= 0)
            waitKey(0);
    }
}