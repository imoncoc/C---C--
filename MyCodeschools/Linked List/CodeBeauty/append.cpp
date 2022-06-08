#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
 }

 void append(Node** head_ref, int new_data){
     Node* new_node = new Node();
     Node* last = *head_ref;

     new_node->data = new_data;
     new_node->next = NULL;

     if(*head_ref == NULL){
        *head_ref = new_node;
        return;
     }

     while(last->next != NULL){
        last = last->next;
     }

     last->next = new_node;
     return;

 }

void printList(Node* n){
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head-> next = second;

    second->data = 20;
    second-> next = third;

    third->data = 30;
    third-> next = NULL;

    push(&head, 5);
    push(&head, 2);
    append(&head, 40);



    printList(head);


    return 0;
}

