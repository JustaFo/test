#ifndef IMGPROCESSOR_H
#define IMGPROCESSOR_H

#include <QMainWindow>

namespace Ui {
    class ImgProcessor;
}

class ImgProcessor : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImgProcessor(QWidget *parent = 0);
    ~ImgProcessor();

private:
    Ui::ImgProcessor *ui;
};

#endif // IMGPROCESSOR_H
