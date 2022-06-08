
#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
};

void insertAtTheEnd(Node** head, int newValue){
    //1. Prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    //2. If Linked list is empty, newNode will be a head node
    if(*head == NULL){
        *head = newNode;
        return;
    }
    //3. Find the last node
    Node* last = *head;
    while(last-> next != NULL){
        last = last->next;
    }
    //4. Insert newNode after last node (at the end)
    last->next = newNode;
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

    insertAtTheEnd(&head, 4);
    insertAtTheEnd(&head, 5);
    insertAtTheEnd(&head, 6);
    insertAtTheEnd(&head, 7);
    insertAtTheEnd(&head, 8);
    insertAtTheEnd(&head, 9);
    insertAtTheEnd(&head, 10);


    PrintList(head);



    return 0;
}

