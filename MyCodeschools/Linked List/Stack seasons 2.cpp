#include<iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void push(int x){
    if (top == MAX_SIZE -1){
        cout<<"Error: Stack overflow"<<endl;
        return;
    }
    top++;
    A[top] = x;
}

void pop(){
    if (top == -1){
        cout<<"Error: No element to pop"<<endl;
        return;
    }
    top--;
}

int isEmpty(){
    if(top == -1){
        return 1;
    }
    return 0;
}

void print(){
    int i;
    cout<<"Stack: ";
    for (i = 0; i <= top; i++ ){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    push(2);print();
    push(5);print();
    push(10);print();
    pop();print();
    push(12);print();
}

