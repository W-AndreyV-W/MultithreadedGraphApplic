#include "workerthread.h"

WorkerThread::WorkerThread(QObject *parent, QMutex* _mutex, unsigned int* timer,
                           unsigned int number) : QThread (parent) {
    mutex = _mutex;
    timerPull = timer;
    numberThread = number;
}

WorkerThread::~WorkerThread() {

}

void WorkerThread::run() {

    for (int i = 0; i <= 100; i++) {

        QThread::usleep(timerWorket);

        mutex->lock();

        timerWorket = *timerPull;
        emit sig_worket(numberThread, i);

        mutex->unlock();
    }
}
