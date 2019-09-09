#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include<iostream>

int main(){
    //read images by deafult always convert image to the 3 channel BGR color image
    cv::Mat color_img = cv::imread("../img/lena.jpg");
    cv::Mat gray_img= cv::imread("../img/lena.jpg",0);
    
    if(!color_img.data){
        std::cout << "could not open o find the image"<< std::endl;
        return -1;
    }
    
    // write images
    cv::imwrite("../img/lenaGray.jpg",gray_img);

    // get pixels
    int my_row= color_img.rows-1;
    int my_col= color_img.cols-1;

    cv::Vec3b pixel = color_img.at<cv::Vec3b>(my_row,my_col);
    std::cout << "Pixel value (B,G,R): ( " << static_cast<int>(pixel[0]) << "," 
        << static_cast<int>(pixel[1]) << "," << static_cast<int>(pixel[2])<< ")"<< std::endl;

    // show images
    cv::imshow("Lena BGR",color_img);
    cv::imshow("Lena Gray",gray_img);

    cv::waitKey(0);
    return 0;
}