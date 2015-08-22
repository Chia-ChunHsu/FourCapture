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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowOnLabel(cv::Mat mat, QLabel *k)
{
    QImage qtemp = QImage((const unsigned char*)(mat.data),mat.cols,mat.rows,QImage::Format_RGB888);
    k->clear();
    k->setPixmap(QPixmap::fromImage(qtemp.scaled(ui->CalLabel1->width(),ui->CalLabel1->height(),Qt::KeepAspectRatio)));
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
        //QImage qtemp = QImage((const unsigned char*)(temp.data),temp.cols,temp.rows,QImage::Format_RGB888);
        //qimg.push_back(qtemp);
    }
    statusProgressBar->setValue(40);
    ShowOnLabel(CalMat[0],ui->CalLabel1);
    statusProgressBar->setValue(55);
    ShowOnLabel(CalMat[1],ui->CalLabel2);
    statusProgressBar->setValue(70);
    ShowOnLabel(CalMat[2],ui->CalLabel3);
    statusProgressBar->setValue(85);
    ShowOnLabel(CalMat[3],ui->CalLabel4);
    statusLabel->setText("Load Reference Pictures Success!");
    statusProgressBar->setValue(100);
}
