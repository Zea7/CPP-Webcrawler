#include "widgets.h"

MainWindow::MainWindow() {
    setUI();
}

MainWindow::~MainWindow() {

}

void MainWindow::setUI(){
    resize(1200, 900);

    this->mainLayout = new QVBoxLayout();
    this->showHttpRespond = new QLabel("ASDB");
    this->mainWidget = new QWidget();

    this->mainLayout->addWidget(this->showHttpRespond);
    this->mainWidget->setLayout(this->mainLayout);

    setCentralWidget(this->mainWidget);
}