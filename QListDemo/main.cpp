#include <QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Declare the list
    QList<QString> stringList;
    // put data inside!
    stringList << "I am " << " lovin " << " Qt";
    stringList.append(" a ");
    stringList.append(" lot !");

    // get the data from the list.

    qDebug() << "The first element: " << stringList[0];
    qDebug() << "The second element: " << stringList[1];
    qDebug() << "The third element: " << stringList[2];
    qDebug() << "The fourth element: " << stringList[3];

    // get the count
    qDebug() << "the number of elements " << stringList.length();

    // now go looping
    for (int i = 0; i < stringList.count() ; i++) {
        qDebug() << "The element at index " << QString::number(i) << " is " << stringList.at(i);
    }

    return a.exec();
}
