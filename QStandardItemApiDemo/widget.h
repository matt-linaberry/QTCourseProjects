#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QItemSelection>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QStandardItemModel * model;

private slots:
    void selectionChangedSlot(const QItemSelection & oldSelection, const QItemSelection & newSelection);  // the emit has these params!


};

#endif // WIDGET_H
