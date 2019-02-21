#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QVariantMap>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    mNetManager(new QNetworkAccessManager(this)),
    mNetReply(nullptr),
    mDataBuffer(new QByteArray)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_fetchButton_clicked()
{
    // start the process of the fetch
    QNetworkRequest request;
    const QUrl API_ENDPOINT("https://jsonplaceholder.typicode.com/posts");

    request.setUrl(API_ENDPOINT);

    mNetReply = mNetManager->get(request);
    connect(mNetReply, &QIODevice::readyRead, this, &Widget::dataReadyRead);
    connect(mNetReply, &QNetworkReply::finished, this, &Widget::dataReadFinished);

}

void Widget::dataReadyRead()
{
    mDataBuffer->append(mNetReply->readAll());
}

void Widget::dataReadFinished()
{
    if (mNetReply->error()) {
        qDebug() << "Error: " << mNetReply->errorString();

    } else {
        //qDebug() << "Data fetch finished!" << QString(*mDataBuffer);  // pointer because it's a reference.

        // convert the data into a JSON document
        QJsonDocument doc = QJsonDocument::fromJson(*mDataBuffer);

        // what if the object from the server is gotten
        /*
        QJsonDocument objectDoc = QJsonDocument::fromJson(*mDataBuffer);
        QJsonObject obObject = objectDoc.toVariant().toJsonObject();*/

        QJsonArray array  = doc.array();

        for (int i = 0; i < array.size() ; i ++) {
            QJsonObject object = array.at(i).toObject();
            QVariantMap map = object.toVariantMap();
            QString title = map["title"].toString();
            ui->listWidget->addItem("[" + QString::number(i + 1) + "] " + title);
        }
    }
}
