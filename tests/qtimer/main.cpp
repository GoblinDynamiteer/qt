#include <QCoreApplication>
#include "timer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Timer timer(2000);

    timer.Start();

    return a.exec();
}
