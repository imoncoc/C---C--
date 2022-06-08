
#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
};

void insertAfter(Node* previous, int newValue){
    // 1. Check if previous node is NULL
    if(previous == NULL){
        cout<<"Previous can not be NULL"<<endl;
        return;
    }
    // 2. Prepare a newNode
    Node* newNode = new Node();
    newNode-> value = newValue;
    // 3. Insert newNOde after previous
    newNode->next = previous-> next;
    previous->next = newNode;
}


void PrintList(Node *n){
    while(n != NULL){
        cout<<n->value<<" ";
        n = n->next;
    }
}


int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head-> value = 1;
    head-> next = second;
    second-> value = 2;
    second-> next = third;
    third-> value = 3;
    third-> next = NULL;

    insertAfter(head, 4);
    insertAfter(second, 5);



    PrintList(head);



    return 0;
}


