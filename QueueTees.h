//
// Created by nickh on 12/8/2024.
//

#ifndef QUEUETEES_H
#define QUEUETEES_H
#include "Cutie.h"


class QueueTees {
public:
    QueueTees() : front(0), rear(0), currentSize(0) {}

    void enqueue(Cutie& cutie) {
        if(currentSize == 10) {
            cout << "Queue is fulL :( Aint no room for your cuties " << endl;;
            return;
        }
        queue[rear] = &cutie;
        rear++;
        currentSize++;
    }

    Cutie* dequeue() {
        if(currentSize == 0) {
            cout << "Queue is empty. We got space for your cuite!" << endl;
            return nullptr;
        }
        Cutie* cutie = queue[front];
        front++;
        currentSize--;
        return cutie;
    }

    int size() {
        return currentSize;
    }


private:
    Cutie* queue[10];
    int front;
    int rear;
    int currentSize;
};



#endif //QUEUETEES_H
