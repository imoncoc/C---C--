#include<bits/stdc++.h>
using namespace std;
int stack_arr[5];
int top = -1;

void push(int data){
    if(top == 5 - 1){
        cout<<"Stack is full"<<endl;
    }else{
        top++;
        stack_arr[top] = data;
    }
}

printStack(){
    if(top == -1){
        cout<<"Stack underflow"<<endl;
    }
    for(int i = top; i >= 0; i--){
        cout<<stack_arr[i]<<endl;
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);

   printStack();


    return 0;
}
