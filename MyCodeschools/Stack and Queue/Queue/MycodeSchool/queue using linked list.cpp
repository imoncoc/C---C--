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
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }else{
        rear-> next = temp;
        rear = temp;
    }

}

void pop(){
    struct Node* temp = front;
    if(front == NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    if(front == rear){
        front = rear = NULL;
    }else{
        front = front->next;
    }
    delete(temp);
}

int Front(){
    if(front == NULL){
        cout<<"Queue is empty"<<endl;
        return NULL;
    }
    cout<<"Front : "<<front->data;
}

void Print() {
    if(front == NULL && rear == NULL){
        cout<<"Queue is Empty"<<endl;
        return;
    }
	struct Node* temp = front;
	while(temp != NULL) {
            cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}


int main(){
    push(10); Print();
    push(20); Print();
    pop(); Print();
    pop(); Print();
    pop(); Print();
    push(30); Print();
    push(40); Print();
    push(50); Print();
    Front();


    return 0;
}
