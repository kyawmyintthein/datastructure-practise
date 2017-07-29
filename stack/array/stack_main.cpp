#include "stack.h"
#include <iostream>

using namespace ds;
using namespace std;

int main(){
    ds::Stack stack;
    stack = ds::Stack();
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    stack.Push(4);
    stack.Push(5);
    stack.Pop();
    int top = stack.Top();
    std::cout <<  "Front Value :" << stack.Top() << std::endl;
    return 0;
}
