#include "thread_stitch.h"

Thread_Stitch::Thread_Stitch()
{

}

Thread_Stitch::~Thread_Stitch()
{

}

int Thread_Stitch::Warp(std::vector<cv::Mat> &CalMat,std::vector<cv::Mat> &CalWarp,std::vector<cv::Mat> &nodilate_warp,cv::Mat &Result)
{

    cv::Stitch stitcher = cv::Stitch::createDefault();

    cv::Stitch::Status status;
    status = stitcher.stitch2(CalMat,CalMat,Result,CalWarp,nodilate_warp,dilate_mask,1,ConrnerPoint);


    if (cv::Stitch::OK == status)
    {
        //cv::imshow("result",Result);
        return 1;
    }
    else
    {
        return 0;
        //qDebug()<<"Stitching fail.";
    }

}

