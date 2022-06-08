#include<bits/stdc++.h>
using namespace std;
int top = -1;
int stack_arr[5];

int isFull(){
    if(top == 5 - 1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push(int data){
    if(isFull()){
        cout<<"Stack ovewrflow!"<<endl;
        return;
    }else{
        top++;
        stack_arr[top] = data;
    }
}

int pop(){
    int value;
    if(isEmpty()){
        cout<<"Stack underflow!"<<endl;
        exit(1);
    }else{
        value = stack_arr[top];
        top--;
        return value;
    }

}

int peek(){
    if(isEmpty()){
        cout<<"Stack underflow!"<<endl;
        exit(1);
    }
    return stack_arr[top];
}


void printStack(){
    if(top == -1){
        cout<<"Stack underflow"<<endl;
        return;
    }
    for(int i = top; i >= 0; i--){
        cout<<stack_arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int choice, data;
  while(1){

    cout<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Print the top element"<<endl;
    cout<<"4. Print the all element of the stack"<<endl;
    cout<<"5. Quit"<<endl;
    cout<<"Please enter your choice: ";
    cin>>choice;
    cout<<endl;

     system("cls");

    switch(choice){
        case 1: cout<<"Enter the element to be pushed: ";
        cin>>data;
        push(data);
        break;

        case 2: data = pop();
        cout<<"Deleted element is : "<<data<<endl;
        break;

        case 3: cout<<"The topmost element of stack is : "<<peek()<<endl;
        break;

        case 4: printStack();
        break;

        case 5: exit(1);

        default: cout<<"Wrong choice"<<endl;
    }
  }



    return 0;
}
