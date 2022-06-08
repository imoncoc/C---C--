#include<iostream>
using namespace std;
int queueArr[5];
int front = -1, rear = -1;
bool isFull(){
    return (rear + 1) % 5 == front? true : false;
}

bool isEmpty()
	{
		return (front == -1 && rear == -1);
	}

void push(int data){
    cout<<"Enqueuing or Pushing: "<<data<<endl;
    if (isFull()){
        cout<<"Error: Queue is full"<<endl;
        return;
    }
    if(isEmpty()){
        front = rear = 0;
    }else{
        rear = (rear + 1)%5;
    }
    queueArr[rear] = data;
}

void pop(){
    cout<<"Dequeuing or poping."<<endl;
    if(isEmpty()){
        cout<<"Error: Queue is Empty\n";
			return;
    }else if(front == rear){
        rear = front = -1;
    }else{
        front = (front + 1)% 5;
    }
}
void printQueue(){
    if(isEmpty()){
        return;
    }
    int count = (rear + 5 - front)%5 +1;
    cout<<endl<<"Queue : ";
    for(int i = 0; i < count; i++){
        int index = (front + i) % 5;
        cout<<queueArr[index]<<" ";
    }
    cout<<endl<<endl;
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    push(60);
    printQueue();






    return 0;
}
