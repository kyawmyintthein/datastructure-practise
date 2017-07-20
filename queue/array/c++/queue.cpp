#include "queue.h"

ds::Queue::Queue(){
    front = -1;
    rear = -1;
}

void ds::Queue::Enqueue(int item){
    if(size() == ds::MAX_SIZE){
        throw new ds::QueueOverflowException();
    }
    if (isEmpty()){
        rear = 0;
        data[rear] = item;
    }else{
        rear = ++rear;
        data[rear] = item;
    }
}


void ds::Queue::Dequeue(){
    if(isEmpty()){
        throw new ds::QueueEmptyException();
    }else if(front == rear){
        rear = front = -1;
    }else{
        if(front == -1){
            front = 0;
        }else{
           front = ++front % ds::MAX_SIZE;
        }
    }
}

int ds::Queue::Front(){
    int ret = -1;
    if (isEmpty()){
        throw new ds::QueueEmptyException();
        return ret;
    }
    if(front = -1){
        ret = data[0];
    }else{
        ret = data[front];
    }
    return ret;
}

int ds::Queue::size(){
    return rear - front;
}

bool ds::Queue::isEmpty(){
    return front == rear ? true : false;
}

