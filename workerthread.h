#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QThread>
#include <QMutex>


class WorkerThread : public QThread {

    Q_OBJECT

public:

    explicit WorkerThread(QObject *parent, QMutex* _mutex, unsigned int* timer,
                          unsigned int number);
    ~WorkerThread();

signals:

    void sig_worket(unsigned int numberThread, int iter);

private:

    QMutex* mutex = nullptr;
    unsigned int timerWorket = 10;
    unsigned int* timerPull = nullptr;
    unsigned int numberThread = 0;

    void run() override;
};

#endif // WORKERTHREAD_H
