#include "timer.h"
#include <iostream>
#include <QCoreApplication>

Timer::Timer(quint32 ms)
{
    m_interval = ms;
    m_timer.setInterval(m_interval);
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(PrintTimer()));
}

void Timer::Start()
{
    m_timer.start();
}

void Timer::PrintTimer()
{
    std::cout << "Timer done! Resetting (" << m_interval << "ms)" << std::endl;
}
