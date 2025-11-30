#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QXmlStreamReader>
#include <QObject>
#include <QDate>
#include <QMap>

class DataManager : public QObject {
    Q_OBJECT
public:
    explicit DataManager(QObject *parent = nullptr);
    void fetchData(const QString& url, const QDate& date);
signals:
    void dataReady(const std::pair<QDate, QMap<QString, double>>& data);
public slots:
    void onReplyFinished();
private:
    QNetworkAccessManager* manager;
    QMap<QNetworkReply*, QDate> replyDates;
};
#endif // DATAMANAGER_H
