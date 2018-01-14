#ifndef TIMER_H
#define TIMER_H

#include <QObject>
#include <QTimer>

class Timer : public QObject
{
    Q_OBJECT
public:
    explicit Timer(quint32 ms);
    void Start();

signals:

public slots:
    void PrintTimer();

private:
    QTimer m_timer;
    quint32 m_interval;
};

#endif // TIMER_H
