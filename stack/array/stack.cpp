#include "stack.h"
#include "stdio.h"

ds::Stack::Stack(int item){
    top = -1;
}

void ds::Stack::Push(int item){
    if(top == ds::MAX_SIZE-1){
        printf("Error: Stack overflow \n");
        return;
    }
    top = ++top;
    data[top]  = item;
}

void ds::Stack::Pop(){
    if (top == -1){
        printf("Error: Stack is empty. \n");
        return;
    }
    top--;
}

int ds::Stack::Top(){
    if(top == -1){
        printf("Error: Stack is empty. \n");
        return -1;
    }
    return data[top];
}





