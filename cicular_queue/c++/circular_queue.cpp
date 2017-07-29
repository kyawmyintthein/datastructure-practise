#include <iostream>
struct Queue {
            int *arr;
            int rear, front;
            int size;
            Queue(int size){
                front = rear = -1;
                size = size;
                arr = new int[size];
            }
            void enQueue(int item);
            void deQueue();
            int  Front();
            bool isEmpty();
};

void Queue::Queue::enQueue(int item) {
    if(isEmpty()){
        std::cout << "Queue is empty" << std::endl;
    }
    if(front == -1){
      front = rear = 0;
      arr[rear]= item;
    }else if(rear == size-1 && front == 0){
        rear = 0;
        arr[rear] = item;
    }else{
        rear++;
        arr[rear] = item;
    }
}

void Queue::Queue::deQueue(){
    if(isEmpty()){
        std::cout << "Queue is empty" << std::endl;
    }
    if(front == rear){
        front = rear = -1;
    }else if(front == size-1){
        front = 0;
    }else{
        front++;
    }
}

int Queue::Queue::Front(){
    if(isEmpty()){
        std::cout << "Queue is empty" << std::endl;
        return -1;
    }
    return arr[front];
}

bool Queue::Queue::isEmpty(){
    if((rear == front -1) || (front == 0 && rear == size - 1)){
        return true;
    }
    return false;
}

int main(){
    Queue queue(5);
    queue.enQueue(1);
    queue.enQueue(2);
    queue.enQueue(3);
    queue.enQueue(4);
    queue.enQueue(5);
    queue.enQueue(6);
    queue.deQueue();
    int one = queue.Front();
    std::cout << "Dequeue Item " << one << std::endl;
    queue.enQueue(6);
    queue.deQueue();
    queue.deQueue();
    queue.deQueue();
    queue.deQueue();
    int six = queue.Front();
    std::cout << "Dequeue Item " << six << std::endl;
    return 0;
}
