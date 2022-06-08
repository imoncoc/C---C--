#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void push(int x){
    struct Node* temp = new Node();
    temp-> data = x;
    temp-> next = NULL;
    if(rear == NULL && front == NULL){
        front = rear = temp;
        return;
    }else{
        rear->next = temp;
        rear = temp;
    }
}

void pop(){
    struct Node* temp = front;
    if(front == NULL){
        cout<<"Queue is Empty"<<endl;
        return;
    }else if(front == rear){
        front = rear = NULL;
    }else{
        front = front-> next;
    }
    delete(temp);
}

void top(){
    if(front == NULL){
        cout<<"fornt is empty"<<endl;
    }else{
        cout<<"front : "<<front-> data<<endl;
    }

}

void print(){
    struct Node* temp = front;
    if(front == NULL && rear == NULL){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    push(10); print();
    push(20); print();
    push(30); print();
    pop(); print();
    pop(); print();
    pop(); print();
    top();
    push(40); print();
    push(50); print();
    top();


    return 0;
}
