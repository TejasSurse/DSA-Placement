#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = top;
    }
    // push
    void push(int data){
        if(top == size -1 ){
            cout<<"stack overflow "<<endl;
            return;
        }
        else{
            top++;
            arr[top] = data;
        }
    }

    // pop
    void pop(){
        if(top == 1){
            cout<<"stack underflow "<<endl;
            return;
        }
        else{
            top--;
        }
    }

    // size
    int getSize(){
        return top+1;
    }


    // fetch top 
    int getTop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    // check if empty 
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
  
}

