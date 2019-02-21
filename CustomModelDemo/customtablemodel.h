#ifndef CUSTOMTABLEMODEL_H
#define CUSTOMTABLEMODEL_H

#include <QObject>
#include <QAbstractTableModel>
#include <QTimer>

class CustomTableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    CustomTableModel(QObject * parent);

    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;

    QVariant data(const QModelIndex &index, int role) const; // control the data that is shown in each cell.

    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
   private:
    QTimer * timer;
};

#endif // CUSTOMTABLEMODEL_H
