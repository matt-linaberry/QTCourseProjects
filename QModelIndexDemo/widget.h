#ifndef WIDGET_H
#define WIDGET_H

#include <QFileSystemModel>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    QFileSystemModel * model;
    QModelIndex parentIndex;
};

#endif // WIDGET_H
