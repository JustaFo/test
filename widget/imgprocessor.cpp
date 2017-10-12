#include "imgprocessor.h"
#include "ui_imgprocessor.h"

ImgProcessor::ImgProcessor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImgProcessor)
{
    ui->setupUi(this);
}

ImgProcessor::~ImgProcessor()
{
    delete ui;
}
