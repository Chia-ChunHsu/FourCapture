/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *DetectTab;
    QPushButton *CapturePicture;
    QLabel *CapResultLabel;
    QPushButton *LoadCapPic;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QLabel *FilterLabel2;
    QLabel *FilterLabel4;
    QLabel *FilterLabel1;
    QLabel *FilterLabel3;
    QWidget *tab_3;
    QLabel *WarpFilterLabel1;
    QLabel *WarpFilterLabel2;
    QLabel *WarpFilterLabel3;
    QLabel *WarpFilterLabel4;
    QPushButton *saveResultButtom;
    QWidget *CalibrationTab;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QLabel *CalLabel2;
    QLabel *CalLabel4;
    QLabel *CalLabel3;
    QLabel *CalLabel1;
    QPushButton *LoadCalButtom;
    QPushButton *CaptureCalButtom;
    QWidget *page;
    QLabel *WarpCalLabel1;
    QLabel *WarpCalLabel2;
    QLabel *WarpCalLabel3;
    QLabel *WarpCalLabel4;
    QWidget *page_3;
    QLabel *CalResultLabel;
    QListWidget *ProgressList;
    QWidget *tab;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 417);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 621, 351));
        DetectTab = new QWidget();
        DetectTab->setObjectName(QStringLiteral("DetectTab"));
        CapturePicture = new QPushButton(DetectTab);
        CapturePicture->setObjectName(QStringLiteral("CapturePicture"));
        CapturePicture->setEnabled(false);
        CapturePicture->setGeometry(QRect(370, 270, 111, 50));
        CapResultLabel = new QLabel(DetectTab);
        CapResultLabel->setObjectName(QStringLiteral("CapResultLabel"));
        CapResultLabel->setGeometry(QRect(370, 10, 240, 180));
        CapResultLabel->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        LoadCapPic = new QPushButton(DetectTab);
        LoadCapPic->setObjectName(QStringLiteral("LoadCapPic"));
        LoadCapPic->setEnabled(false);
        LoadCapPic->setGeometry(QRect(500, 270, 111, 50));
        tabWidget_2 = new QTabWidget(DetectTab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 10, 351, 311));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        FilterLabel2 = new QLabel(tab_2);
        FilterLabel2->setObjectName(QStringLiteral("FilterLabel2"));
        FilterLabel2->setGeometry(QRect(180, 10, 160, 120));
        FilterLabel2->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        FilterLabel4 = new QLabel(tab_2);
        FilterLabel4->setObjectName(QStringLiteral("FilterLabel4"));
        FilterLabel4->setGeometry(QRect(180, 150, 160, 120));
        FilterLabel4->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        FilterLabel1 = new QLabel(tab_2);
        FilterLabel1->setObjectName(QStringLiteral("FilterLabel1"));
        FilterLabel1->setGeometry(QRect(10, 10, 160, 120));
        FilterLabel1->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        FilterLabel3 = new QLabel(tab_2);
        FilterLabel3->setObjectName(QStringLiteral("FilterLabel3"));
        FilterLabel3->setGeometry(QRect(10, 150, 160, 120));
        FilterLabel3->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        WarpFilterLabel1 = new QLabel(tab_3);
        WarpFilterLabel1->setObjectName(QStringLiteral("WarpFilterLabel1"));
        WarpFilterLabel1->setGeometry(QRect(10, 10, 160, 120));
        WarpFilterLabel1->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        WarpFilterLabel2 = new QLabel(tab_3);
        WarpFilterLabel2->setObjectName(QStringLiteral("WarpFilterLabel2"));
        WarpFilterLabel2->setGeometry(QRect(180, 10, 160, 120));
        WarpFilterLabel2->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        WarpFilterLabel3 = new QLabel(tab_3);
        WarpFilterLabel3->setObjectName(QStringLiteral("WarpFilterLabel3"));
        WarpFilterLabel3->setGeometry(QRect(10, 150, 160, 120));
        WarpFilterLabel3->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        WarpFilterLabel4 = new QLabel(tab_3);
        WarpFilterLabel4->setObjectName(QStringLiteral("WarpFilterLabel4"));
        WarpFilterLabel4->setGeometry(QRect(180, 150, 160, 120));
        WarpFilterLabel4->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        tabWidget_2->addTab(tab_3, QString());
        saveResultButtom = new QPushButton(DetectTab);
        saveResultButtom->setObjectName(QStringLiteral("saveResultButtom"));
        saveResultButtom->setEnabled(false);
        saveResultButtom->setGeometry(QRect(370, 200, 241, 61));
        tabWidget->addTab(DetectTab, QString());
        CalibrationTab = new QWidget();
        CalibrationTab->setObjectName(QStringLiteral("CalibrationTab"));
        stackedWidget = new QStackedWidget(CalibrationTab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(210, 10, 371, 311));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        CalLabel2 = new QLabel(page_2);
        CalLabel2->setObjectName(QStringLiteral("CalLabel2"));
        CalLabel2->setGeometry(QRect(180, 0, 160, 120));
        CalLabel2->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        CalLabel4 = new QLabel(page_2);
        CalLabel4->setObjectName(QStringLiteral("CalLabel4"));
        CalLabel4->setGeometry(QRect(180, 130, 160, 120));
        CalLabel4->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        CalLabel3 = new QLabel(page_2);
        CalLabel3->setObjectName(QStringLiteral("CalLabel3"));
        CalLabel3->setGeometry(QRect(10, 130, 160, 120));
        CalLabel3->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        CalLabel1 = new QLabel(page_2);
        CalLabel1->setObjectName(QStringLiteral("CalLabel1"));
        CalLabel1->setGeometry(QRect(10, 0, 160, 120));
        CalLabel1->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        CalLabel1->setLineWidth(1);
        LoadCalButtom = new QPushButton(page_2);
        LoadCalButtom->setObjectName(QStringLiteral("LoadCalButtom"));
        LoadCalButtom->setGeometry(QRect(180, 260, 160, 50));
        CaptureCalButtom = new QPushButton(page_2);
        CaptureCalButtom->setObjectName(QStringLiteral("CaptureCalButtom"));
        CaptureCalButtom->setGeometry(QRect(10, 260, 160, 50));
        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        WarpCalLabel1 = new QLabel(page);
        WarpCalLabel1->setObjectName(QStringLiteral("WarpCalLabel1"));
        WarpCalLabel1->setGeometry(QRect(10, 0, 160, 120));
        WarpCalLabel1->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        WarpCalLabel2 = new QLabel(page);
        WarpCalLabel2->setObjectName(QStringLiteral("WarpCalLabel2"));
        WarpCalLabel2->setGeometry(QRect(180, 0, 160, 120));
        WarpCalLabel2->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        WarpCalLabel3 = new QLabel(page);
        WarpCalLabel3->setObjectName(QStringLiteral("WarpCalLabel3"));
        WarpCalLabel3->setGeometry(QRect(10, 130, 160, 120));
        WarpCalLabel3->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        WarpCalLabel4 = new QLabel(page);
        WarpCalLabel4->setObjectName(QStringLiteral("WarpCalLabel4"));
        WarpCalLabel4->setGeometry(QRect(180, 130, 160, 120));
        WarpCalLabel4->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        CalResultLabel = new QLabel(page_3);
        CalResultLabel->setObjectName(QStringLiteral("CalResultLabel"));
        CalResultLabel->setGeometry(QRect(10, 0, 320, 240));
        CalResultLabel->setStyleSheet(QStringLiteral("background-color: rgb(233, 255, 255);"));
        stackedWidget->addWidget(page_3);
        ProgressList = new QListWidget(CalibrationTab);
        new QListWidgetItem(ProgressList);
        new QListWidgetItem(ProgressList);
        new QListWidgetItem(ProgressList);
        ProgressList->setObjectName(QStringLiteral("ProgressList"));
        ProgressList->setGeometry(QRect(10, 10, 191, 311));
        tabWidget->addTab(CalibrationTab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);
        ProgressList->setCurrentRow(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        CapturePicture->setText(QApplication::translate("MainWindow", "Capture Picture", 0));
        CapResultLabel->setText(QString());
        LoadCapPic->setText(QApplication::translate("MainWindow", "Load", 0));
        FilterLabel2->setText(QString());
        FilterLabel4->setText(QString());
        FilterLabel1->setText(QString());
        FilterLabel3->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("MainWindow", "Original", 0));
        WarpFilterLabel1->setText(QString());
        WarpFilterLabel2->setText(QString());
        WarpFilterLabel3->setText(QString());
        WarpFilterLabel4->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Warping", 0));
        saveResultButtom->setText(QApplication::translate("MainWindow", "SaveResult", 0));
        tabWidget->setTabText(tabWidget->indexOf(DetectTab), QApplication::translate("MainWindow", "Detect Mode", 0));
        CalLabel2->setText(QString());
        CalLabel4->setText(QString());
        CalLabel3->setText(QString());
        CalLabel1->setText(QString());
        LoadCalButtom->setText(QApplication::translate("MainWindow", "Load Calibration Pic From File", 0));
        CaptureCalButtom->setText(QApplication::translate("MainWindow", "Capture the Calibration Pictures", 0));
        WarpCalLabel1->setText(QString());
        WarpCalLabel2->setText(QString());
        WarpCalLabel3->setText(QString());
        WarpCalLabel4->setText(QString());
        CalResultLabel->setText(QString());

        const bool __sortingEnabled = ProgressList->isSortingEnabled();
        ProgressList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ProgressList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Capture Calibration Picture", 0));
        QListWidgetItem *___qlistwidgetitem1 = ProgressList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "See The Warping Result", 0));
        QListWidgetItem *___qlistwidgetitem2 = ProgressList->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "The Stitching Result of the Calibration Photo", 0));
        ProgressList->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(CalibrationTab), QApplication::translate("MainWindow", "Calibration Mode", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Black Calibration", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
