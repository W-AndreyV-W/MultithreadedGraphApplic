#include "poolthread.h"

PoolThread::PoolThread(QObject* parent, unsigned int stopTime)
                     : QObject{parent}{

    mutex = new QMutex;
    _stopTime = new unsigned int;
    *_stopTime = stopTime;
    treads.resize(10);
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

void PoolThread::workerThread(unsigned int numberThread, int iter) {

    emit sig_workerThread(numberThread, iter);
}

void PoolThread::poolFinish() {

    i--;
}

void PoolThread::pool(){

    if (i==0) {

        for (; i < 10; i++) {

            treads[i] = new WorkerThread(this, mutex, _stopTime, i);
            connect(treads[i], &WorkerThread::sig_worket, this, &PoolThread::workerThread);
            connect(treads[i], &WorkerThread::finished, treads[i], &QObject::deleteLater);
            connect(treads[i], &WorkerThread::finished, this, &PoolThread::poolFinish);
            treads[i]->start();
        }
    }
}
