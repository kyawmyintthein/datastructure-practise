#ifndef Queue_H
#define Queue_H

#include <iostream>
#include <cstdlib>
using namespace std;

/*
 * Queue implementation with static array
 */

namespace ds{
    const int MAX_SIZE = 100;

    class QueueOverflowException{
        public:
            QueueOverflowException(){
                cout << "Queue is overflow." << endl;
            }
    };

    class QueueEmptyException{
        public:
            QueueEmptyException(){
                cout << "Queue is empty." << endl;
            }
    };

    class Queue{
        private:
            int data[MAX_SIZE];
            int front;
            int rear;
        public:
            Queue();
            void Enqueue(int item);
            void Dequeue();
            int Front();
            int size();
            bool isEmpty();
    };
}

#endif
