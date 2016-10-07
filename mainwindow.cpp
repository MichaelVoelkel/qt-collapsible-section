#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Section.h"

#include <QBoxLayout>
#include <QLabel>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Section* section = new Section("Section", 300, ui->centralWidget);
    ui->centralWidget->layout()->addWidget(section);

    auto* anyLayout = new QVBoxLayout();
    anyLayout->addWidget(new QLabel("Some Text in Section", section));
    anyLayout->addWidget(new QPushButton("Button in Section", section));

    section->setContentLayout(*anyLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}
