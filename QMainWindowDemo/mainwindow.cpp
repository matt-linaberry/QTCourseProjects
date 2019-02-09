#include "mainwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QMenuBar>
#include <QStatusBar>
#include <QAction>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    // set up the button and the menu
    QPushButton * button = new QPushButton("Hello!", this);
    setCentralWidget(button);  // takes up the whole thing!

    // Declare quit action
    QAction * quitAction = new QAction("Quit");
    connect(quitAction, &QAction::triggered, [=]() {
       QApplication::quit();
    });



    QMenu * fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(quitAction);
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    // add status bar message
    statusBar()->showMessage("Uploading file...", 3500);
    //statusBar()->clearMessage();

}

MainWindow::~MainWindow()
{

}

QSize MainWindow::sizeHint() const
{
    return QSize(800, 500);
}
