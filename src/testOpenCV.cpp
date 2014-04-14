#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    Mat image;
    image = imread(argv[1],1);

    if(!image.data){
        cout << "error" <<endl;
        return 1;
    }

    namedWindow("Show",CV_WINDOW_AUTOSIZE);
    imshow("Show",image);

    waitKey(0);
    return 0;

}

