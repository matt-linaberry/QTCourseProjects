#include "customtablemodel.h"

#include <QBrush>
#include <QFont>
#include <QTime>
#include <QTimer>

CustomTableModel::CustomTableModel(QObject * parent) : QAbstractTableModel (parent)
{
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, &QTimer::timeout, [=](){
        // update the index of the changes
        QModelIndex topLeft = index(0,0);
        // notify the view of the time change in the model
        emit dataChanged(topLeft, topLeft); // from and to
    });
    timer->start();
}

int CustomTableModel::rowCount(const QModelIndex &parent) const
{
    return 2;
}

int CustomTableModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant CustomTableModel::data(const QModelIndex &index, int role) const
{
//    if (role == Qt::DisplayRole) {
//        QString value = QString("Row %1, Col %2").arg(index.row() + 1).arg(index.column() + 1);

//        return value;
//    } else {
//        return QVariant();
//    }
    int row = index.row();
    int col = index.column();

    switch(role) {
        case Qt::DisplayRole:
        if (row == 0 && col == 1) {
            return QString("<-- left");
        } else if (row == 1 && col == 1) {
            return QString("--> right");
        }
        else if (row == 0 && col == 0) {
            return QTime::currentTime().toString();
        }
        else {
            return QString("Row %1, Col %2").arg(row).arg(col);
        }
        break;
    case Qt::FontRole:
        if (row == 0 && col == 0) {
            QFont font;
            font.setBold(true);
            return font;
        }
    case Qt::BackgroundRole:
        if (row == 1 && col == 2) {
            QBrush backgroundColor(Qt::yellow);
            return backgroundColor;
        }
        break;
    case Qt::TextAlignmentRole:
        if (row == 1 && col == 1) {
            return Qt::AlignRight;
        }
    }
    return QVariant();
}

QVariant CustomTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole) {
        if (orientation == Qt::Horizontal) {
            switch (section) {
            case 0:
                return QString("First");
            case 1:
                return QString("Second");
            case 2:
                return QString("Third");
            default:
                return QString("ERROR");
            }
        }
    }
    return QVariant();
}
