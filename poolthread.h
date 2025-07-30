#ifndef POOLTHREAD_H
#define POOLTHREAD_H

#include <QMutex>
#include <QVector>

#include "workerthread.h"

class PoolThread : public QObject {

    Q_OBJECT

public:

    PoolThread(QObject* patent, unsigned int stopTime);
    ~PoolThread();

    void setTime(unsigned int time);
    void pool();

signals:

    void sig_workerThread(unsigned int numberThread, int iter);

public slots:

    void workerThread(unsigned int numberThread, int iter);
    void poolFinish();

private:

    QMutex* mutex = nullptr;

    int i = 0;

    unsigned int* _stopTime = nullptr;
    QVector<WorkerThread*> treads;
};

#endif // POOLTHREAD_H
