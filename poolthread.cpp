#include "poolthread.h"

PoolThread::PoolThread(QObject* parent, unsigned int stopTime)
                     : QObject{parent}{

    mutex = new QMutex;
    treads.resize(10);
    _stopTime = new unsigned int;
    *_stopTime = stopTime;
}

PoolThread::~PoolThread(){

    delete mutex;
    delete _stopTime;
}

void PoolThread::setTime(unsigned int time){

    mutex->lock();

    *_stopTime = time;

    mutex->unlock();
}

void PoolThread::workerThread(unsigned int numberThread, int iter){

    emit sig_workerThread(numberThread, iter);
}

void PoolThread::pool(){

    for (int i = 0; i < 10; i++){

        mutex->lock();

        treads[i] = new WorkerThread(this, mutex, _stopTime, i + 1);
        connect(treads[i], &WorkerThread::sig_worket, this, &PoolThread::workerThread);
        connect(treads[i], &WorkerThread::finished, treads[i], &QObject::deleteLater);
        treads[i]->start();

        mutex->unlock();
    }
}
