#ifndef PRINTOUT_H
#define PRINTOUT_H

#include <QObject>

class PrintOut : public QObject
{
    Q_OBJECT
public:
    explicit PrintOut(QObject *parent = nullptr);

signals:

public slots:
    void printNumber(int value);
};

#endif // PRINTOUT_H
