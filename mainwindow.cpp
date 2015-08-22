#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusLabel = new QLabel(this);
    statusProgressBar = new QProgressBar(this);
    statusGap = new QLabel(this);
    statusGap->setFixedWidth(200);
    statusProgressBar->setTextVisible(false);
    ui->statusBar->addPermanentWidget(statusLabel);
    ui->statusBar->addPermanentWidget(statusProgressBar,1);
    ui->statusBar->addPermanentWidget(statusGap);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowOnLabel(cv::Mat mat, QLabel *k)
{
    QImage qtemp = QImage((const unsigned char*)(mat.data),mat.cols,mat.rows,mat.step,QImage::Format_RGB888);
    k->clear();
    k->setPixmap(QPixmap::fromImage(qtemp.scaled(k->width(),k->height(),Qt::KeepAspectRatio)));
    k->show();
}

void MainWindow::on_ProgressList_currentRowChanged(int currentRow)
{
    if(currentRow == 0)
    {
        ui->stackedWidget->setCurrentIndex(0);
    }
    else if(currentRow == 1)
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(currentRow == 2)
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
}

void MainWindow::on_LoadCalButtom_clicked()
{
    statusProgressBar->setValue(0);
    QStringList fileNames = QFileDialog::getOpenFileNames(this,tr("Open Image"), "D:/Dropbox/sen3/HandHold_", tr("Image Files (*.jpg)"));

    if(fileNames.size()>4)
    {
        statusLabel->setText("Chosse Too Many Pictures!");
        return;
    }
    else if(fileNames.size()<4)
    {
        statusLabel->setText("Not Enough Pictures!");
        return;
    }
    for(int i=0;i<4;i++)
    {
        cv::Mat temp = cv::imread(fileNames[i].toStdString().c_str(),cv::IMREAD_COLOR);
        CalMat.push_back(temp);
    }

    ShowOnLabel(CalMat[0],ui->CalLabel1);
    ShowOnLabel(CalMat[1],ui->CalLabel2);
    ShowOnLabel(CalMat[2],ui->CalLabel3);
    ShowOnLabel(CalMat[3],ui->CalLabel4);
    statusLabel->setText("Load Reference Pictures Success!");
    statusProgressBar->setValue(20);

    std::vector<cv::Mat> WarpMat;
    std::vector<cv::Mat> nonDilateMask;
    std::vector<cv::Mat> WarpM;
    cv::Mat Result;
    if(TS.Warp(CalMat,WarpMat,nonDilateMask,Result)!=1)
    {
        statusLabel->setText("Stitching Fail!");
        return;
    }
    statusLabel->setText("Stitching Success!");

    statusProgressBar->setValue(60);
    ui->stackedWidget->setCurrentIndex(1);

    for(int n=0;n<WarpMat.size();n++)
    {
        cv::Mat resultTemp = WarpMat[n].clone();
        for(int i=0;i<WarpMat[n].cols;i++)
        {
            for(int j=0;j<WarpMat[n].rows;j++)
            {
                if(nonDilateMask[n].at<uchar>(j,i) == 255)
                {
                    resultTemp.at<cv::Vec3b>(j, i)[0] = WarpMat[n].at<cv::Vec3b>(j,i)[0];
                    resultTemp.at<cv::Vec3b>(j, i)[1] = WarpMat[n].at<cv::Vec3b>(j,i)[1];
                    resultTemp.at<cv::Vec3b>(j, i)[2] = WarpMat[n].at<cv::Vec3b>(j,i)[2];
                }
                else
                {
                    resultTemp.at<cv::Vec3b>(j, i)[0] = 0;
                    resultTemp.at<cv::Vec3b>(j, i)[1] = 0;
                    resultTemp.at<cv::Vec3b>(j, i)[2] = 0;
                }
            }
        }
        WarpM.push_back(resultTemp);
    }

    ShowOnLabel(WarpM[0],ui->WarpCalLabel1);
    ShowOnLabel(WarpM[1],ui->WarpCalLabel2);
    ShowOnLabel(WarpM[2],ui->WarpCalLabel3);
    ShowOnLabel(WarpM[3],ui->WarpCalLabel4);
    statusProgressBar->setValue(80);


    ui->stackedWidget->setCurrentIndex(2);
    ShowOnLabel(Result,ui->CalResultLabel);

    statusProgressBar->setValue(100);
}
