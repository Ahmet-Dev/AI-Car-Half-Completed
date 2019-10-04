//
//  ROS Cam Operation.cpp
//  
//
//  Created by Ahmet Kahraman on 27.02.2019.
//
//Opencv için jetsonda, resim ve video işlemek.

#include "ROS Cam Operation.hpp"
int main()
{
    cv::mat.img = cv::imread("test.jpg");
    cv::Sobel(img, dst, CV32F, 1, 1);
    cm::imwrite();
    cm::VideoCapture input(zed girişi);
    cv::VideoWriter output(
    "test_car.avi",
    CV_FOURCC('X','V','I','D'),
    30,
    cv::Size(input.get(CV_CAP_PROP_FRAME_WIDTH()),input.get(CV_CAP_PROP_FRAME_HEIGHT()))
    );
    for(;;)
    {
        if(input.read(img)) break;
    cv::Sobel(img, dst, SV8U, 1, 1);
    
        output.write(dst);
    cv:imshow("img",img);
        char c = cv::waitKey(30);
if(c == ' ') break;
        //Görüntü alma kodu bitti.
}
    //Canny Mode
    int main(int argc, char** argv)
    {
        cv::cvtColor(img, img_gray, CV_BGR2GRAY);
        cv::Canny(img.gray, img.edges, 120, 400);
        cv::inshow("img_edges", img);
        char c =cv::waitKey(1);
            if(c == 10) break;//Çıkış kodu.
            //Görüntü alma sadece köşegenler ve çizgiler kodu bitti.
    }
    return 0;
}
//Canny Hard Mode
int main(int argc, char** argv)
{
    cv::cvtColor(img, img_gray, CV_BGR2GRAY);
    cv::Canny(img.gray, img.edges, 140, 300);
    cv::inshow("img_edges", img);
    std::vector<cv::Vec4i> lines;
    cv::HoughLinesP(img_edges, lines, CV_PI/2, 50, 25, 2);
    for(size_t i = 0; i < lines.size(); i++)
    {
        cv::Vec4i l = lines[i];
        cv::line(
        img,
                 cv::Point(l[0], l[1]),
                 cv::Point(l[2], l[3]),
                 cv::Scalar(0, 255, 255),
                 3
        );
    }//Canny sistemi çizgi tanıma
    cv::GaussianBlur(img_gray, img_gray, cv::Size(10,10), 2, 2);
    //Canny sisteminde fazlalık olan çizgi ve yuvarlakları filtreleme
    std::vector<cv::Vec4i> circles;
    cv::HoughCircles(img_gray, circles, CV_HOUGH_GRADIENT, 1, 10, 100, 18, 1, 18);
    for(size_t i = 0; i < circles.size(); i++)
    {
        cv::Vec3f c = circles[i];
        cv::circle(img, cv::Point(c[0]c[1],
        c[2],
        cv::Scalar(0,255,0),
        3);
    }
    //Yuvarlak olan tabela veya tekerlekleri tanıma
    char c =cv::waitKey(1);
    if(c == 10) break;//Çıkış kodu.
    //Görüntü alma video üzerinde köşegenler ve çizgiler kodu bitti.
}
return 0;
}
