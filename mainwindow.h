#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QFileDialog>
#include "opencv.hpp"
#include "features2d/features2d.hpp"
#include "core/core.hpp"
#include "nonfree/features2d.hpp"
#include "highgui/highgui.hpp"
#include "nonfree/nonfree.hpp"
#include <QDebug>
#include <string>
//#include "stitch.h"
#include "opencv2/stitching/detail/blenders.hpp"
#include <QTextCodec>
#include "opencv2/imgproc/imgproc.hpp"
#include <Qlist>
#include <QCameraInfo>
#include <QProgressBar>
#include "thread_stitch.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void ShowOnLabel(cv::Mat mat,QLabel *k);
    void Cal();

private slots:
    void on_ProgressList_currentRowChanged(int currentRow);

    void on_LoadCalButtom_clicked();

    void on_LoadCapPic_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<cv::Mat> CalMat;
    std::vector<cv::Mat> CapMat;
    QProgressBar *statusProgressBar;
    QLabel *statusLabel;
    QLabel *statusGap;

    Thread_Stitch TS;

};

#endif // MAINWINDOW_H
