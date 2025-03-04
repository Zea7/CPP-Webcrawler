#ifndef WIDGETS_H
#define WIDGETS_H

#include <QMainWindow>
#include <QLabel>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

private:
    /* 
        private functions

        void setUI()    :   기본 UI 설정
    */
    void setUI();


    /* 
        private member variables

        QVBoxLayout *mainLayout :   MainWindow의 main layout
        QLabel *showHttpRespond :   Http respond를 표시해주는 테스트 화면
        QWidget *mainWidget     :   MainWindow의 centralWidget이 될 widget
    */
    QVBoxLayout *mainLayout;
    QLabel *showHttpRespond;
    QWidget *mainWidget;
};

#endif 