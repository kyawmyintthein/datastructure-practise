#ifndef Stack_H
#define Stack_H

#include <iostream>

namespace ds{
    #define MAX_SIZE 100
    class Stack{
        private:
            int data[MAX_SIZE];
            int top;
        public:
            Stack();
            void Push(int item);
            int Pop();
    }
}
