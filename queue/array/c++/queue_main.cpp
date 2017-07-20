#include "queue.h"
#include <iostream>
using namespace ds;
using namespace std;
int main(){
    ds::Queue queue;
    queue = ds::Queue();
    queue.Enqueue(1);
    std::cout << "Queue Size : " <<  queue.size() << std::endl;
    std::cout <<  "Front Value :" << queue.Front() << std::endl;
    queue.Enqueue(2);

    std::cout << "Queue Size : " <<  queue.size() << std::endl;
    std::cout <<  "Front Value :" << queue.Front() << std::endl;
    queue.Dequeue();
    std::cout << "Dequeue then," << std::endl;
    std::cout << "Queue Size : " <<  queue.size() << std::endl;
    std::cout <<  "Front Value :" << queue.Front() << std::endl;
    return 0;
}
