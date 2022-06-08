#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* link;
};
struct Node* top;

void push(int data){
    struct Node* temp = new Node();
    if(!temp){
        cout<<"Heap is OverFlow"<<endl;
        exit(1);
    }

    temp->data = data;
    temp->link = top;
    top = temp;
}

int isEmpty(){
    return top == NULL;
}

int peek(){
    if(!isEmpty()){
        return top->data;
    }else{
        exit(1);
    }
}

void pop(){
    struct Node* temp;

    if(top == NULL){
        cout<<"Stack is Underflow"<<endl;
        exit(1);
    }else{
        temp = top;
        top = top->link;
        temp->link = NULL;
        delete(temp);
    }
}

void display(){
    struct Node* temp;

    if(top == NULL){
        cout<<"Heap is UnderFlow"<<endl;
        exit(1);
    }
    else{
            temp = top;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->link;
        }
        cout<<endl;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();


    return 0;
}
