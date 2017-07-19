#include "queue.h"

ds::Queue::Queue(){
    front = -1;
    rear = -1;
}

void ds::Queue::Enqueue(int item){
    if(size() == ds::MAX_SIZE){
        throw new ds::QueueOverflowException();
    }
    data[rear] = item;
    rear = ++rear;
}


int ds::Queue::Dequeue(){
    if(isEmpty()){
        throw new ds::QueueEmptyException();
    }
    int ret =data[front];
    front = ++front;
    return ret;
}

int ds::Queue::size(){
    return abs(rear - front);
}

bool ds::Queue::isEmpty(){
    return rear == front ? true : false;
}

