#ifndef Stack_H
#define Stack_H

#include <iostream>


namespace ds{
    const unsigned int MAX_SIZE = 100;
    class Stack{
        private:
            int data[MAX_SIZE];
            int top;
        public:
            Stack(int=0);
            ~Stack();
            void Push(int item);
            void Pop();
            int Top();
            bool isEmpty();
            int size();
    };
}

#endif
