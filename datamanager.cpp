#include "datamanager.h"
#include <QUrl>
#include <QtNetwork/QNetworkRequest>

DataManager::DataManager(QObject *parent) : QObject{parent}, manager(new QNetworkAccessManager(this)) {}

void DataManager::fetchData(const QString& url, const QDate& date) {
    QNetworkReply* reply = manager->get(QNetworkRequest(QUrl(url)));
    replyDates[reply] = date;
    connect(reply, &QNetworkReply::finished, this, &DataManager::onReplyFinished);
}

void DataManager::onReplyFinished() {
    QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());
    if(!reply) return;

    QDate date = replyDates[reply];
    replyDates.remove(reply);

    QMap<QString, double> rates;

    if(reply->error() == QNetworkReply::NoError) {
        QByteArray rawData = reply->readAll();
        QString utf8String = QString::fromLocal8Bit(rawData);
        utf8String.replace("encoding=\"windows-1251\"", "encoding=\"utf-8\"");
        QByteArray utf8Data = utf8String.toUtf8();

        QXmlStreamReader xml(utf8Data);

        while(!xml.atEnd()) {
            xml.readNext();
            if(xml.isStartElement() && xml.name() == "Valute") {
                QString charCode;
                double value = 0.0;
                while(!(xml.isEndElement() && xml.name() == "Valute")) {
                    xml.readNext();
                    if(xml.isStartElement()) {
                        if (xml.name() == "CharCode") {
                            charCode = xml.readElementText();
                        } else if (xml.name() == "Value") {
                            value = xml.readElementText().replace(",",".").toDouble();
                        }
                    }
                }
                rates[charCode] = value;
            }
        }
    } else {
        qWarning() << "Network error:" << reply->errorString();
    }

    emit dataReady({date, rates});
    reply->deleteLater();
}




